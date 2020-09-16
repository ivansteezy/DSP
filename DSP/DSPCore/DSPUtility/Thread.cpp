#ifndef THREAD_CPP
#define THREAD_CPP
#include "Thread.h"

DSP::Utility::DSPThread::DSPThread(const unsigned int &sleepTime, std::function<bool ()> callback) :
    m_sleepTime(sleepTime),
    m_callback(callback),
    m_exit(false),
    m_wakeUp(false)
{
}

void DSP::Utility::DSPThread::Start()
{
    m_thread = std::make_shared<std::thread>([this]()
    {
        do
        {
            if(!m_callback())
            {
                std::unique_lock<std::mutex> ul(m_mutex);
                auto status = m_event.wait_for(ul, std::chrono::milliseconds(m_sleepTime), [this](){ return m_wakeUp; });

                if(status && m_exit) break;
                else                 m_wakeUp = false;
            }
        } while(!m_exit);
    });
}

void DSP::Utility::DSPThread::WakeUp()
{
    if(m_thread)
    {
        {
            std::lock_guard<std::mutex> ul(m_mutex);
            m_wakeUp = true;
        }
        m_event.notify_one();
    }
}

void DSP::Utility::DSPThread::SetSleepTimeMiliseconds(const unsigned int &miliseconds)
{
    m_sleepTime = miliseconds;
}

void DSP::Utility::DSPThread::SetSleepTimeSeconds(const unsigned int &seconds)
{
    m_sleepTime = seconds * 1000;
}

void DSP::Utility::DSPThread::Terminate()
{
    if(m_thread)
    {
        {
            std::lock_guard<std::mutex> ul(m_mutex);
            m_exit = true;
            m_wakeUp = true;
        }

        m_event.notify_one();
        m_thread->join();
        m_thread = nullptr;
    }
}

DSP::Utility::DSPThread::~DSPThread()
{
    Terminate();
}

#endif // THREAD_CPP
