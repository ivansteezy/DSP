#ifndef DSPAPP_H
#define DSPAPP_H

#include <QtMvvmCore/CoreApp>

class DSPApp : public QtMvvm::CoreApp
{
    Q_OBJECT

public:
    explicit DSPApp(QObject *parent = nullptr);

protected:
    void performRegistrations() override;
    int startApp(const QStringList &arguments) override;
};

#undef coreApp
#define coreApp static_cast<DSPApp*>(CoreApp::instance())

#endif // DSPAPP_H
