QT       += core gui multimedia sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17 console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    album.cpp \
    audioplayer.cpp \
    database.cpp \
    main.cpp \
    playlist.cpp \
    song.cpp \
    widget.cpp

HEADERS += \
    album.h \
    audioplayer.h \
    database.h \
    playlist.h \
    song.h \
    widget.h

FORMS += \
    widget.ui

QMAKE_CXXFLAGS += -std=gnu++11

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
