BUILD_SOURCES += .tr-dummies\debug\trcond.cpp debug\qrc_dspcore.cpp debug\moc_dspapp.cpp debug\moc_mainviewmodel.cpp 
for(src, BUILD_SOURCES): SOURCES += $$PWD/$$src 
