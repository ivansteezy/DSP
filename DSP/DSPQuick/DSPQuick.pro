TEMPLATE = app

QT += quick mvvmquick
CONFIG += c++14

TARGET = DSPQuick

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += main.cpp

RESOURCES += \
    dspquick.qrc

TRANSLATIONS += dsp_quick_de.ts \
	dsp_quick_template.ts

# Link with core project
win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../DSPCore/release/ -lDSPCore
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../DSPCore/debug/ -lDSPCore
else:unix: LIBS += -L$$OUT_PWD/../DSPCore/ -lDSPCore

INCLUDEPATH += $$PWD/../DSPCore
DEPENDPATH += $$PWD/../DSPCore

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../DSPCore/release/libDSPCore.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../DSPCore/debug/libDSPCore.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../DSPCore/release/DSPCore.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../DSPCore/debug/DSPCore.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../DSPCore/libDSPCore.a

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =
