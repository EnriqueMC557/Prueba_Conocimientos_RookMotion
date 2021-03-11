include(../rasterwindow/rasterwindow.pri)

# work-around for QTBUG-13496
CONFIG += no_batch

SOURCES += \
    clockclass.cpp \
    main.cpp

target.path = $$[QT_INSTALL_EXAMPLES]/gui/analogclock
INSTALLS += target

HEADERS += \
    clockclass.h
