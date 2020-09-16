#ifndef THREAD_H
#define THREAD_H

#include <thread>
#include <chrono>
#include <mutex>
#include<functional>
#include <condition_variable>

namespace DSP
{
    namespace Utility
    {
        class DSPThread
        {
        public:
            DSPThread(const unsigned int& sleepTime, std::function<bool()> callback);
            ~DSPThread();

        public:
            void Start();
            void WakeUp();
            void Terminate();
            void SetSleepTimeMiliseconds(const unsigned int& miliseconds);
            void SetSleepTimeSeconds(const unsigned int& seconds);

        private:
            std::shared_ptr<std::thread> m_thread;
            std::condition_variable m_event;
            std::mutex m_mutex;
            bool m_exit;
            bool m_wakeUp;

            std::function<bool()> m_callback;
            int m_sleepTime;
        };
        using ThreadPtr = std::shared_ptr<DSPThread>;
    }
}

#endif // THREAD_H
