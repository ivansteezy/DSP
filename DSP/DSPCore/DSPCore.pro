TEMPLATE = lib

QT += mvvmcore
# Creating a static library is typically more efficient. You can still create a shared library if you want to
CONFIG += c++14 static

TARGET = DSPCore

DEFINES += QT_DEPRECATED_WARNINGS

HEADERS += \
	DSPUtility/LINQ.h \
	DSPUtility/Thread.h \
	dspapp.h \
	mainviewmodel.h

SOURCES += \
	DSPUtility/Thread.cpp \
	dspapp.cpp \
	mainviewmodel.cpp

RESOURCES += \
	dspcore.qrc

TRANSLATIONS += dsp_core_de.ts \
	dsp_core_template.ts

DISTFILES += $$TRANSLATIONS
QTMVVM_TS_SETTINGS = settings.xml
_never_true_condition: SOURCES += $$files($$PWD/.ts-dummy/*)
# Uncomment the following line to automatically generated and update settings translations when building
#PRE_TARGETDEPS += qtmvvm-tsgen
