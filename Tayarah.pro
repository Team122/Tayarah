QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    category.cpp \
    client.cpp \
    clothing.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    productspecs.cpp \
    register.cpp

HEADERS += \
    category.h \
    client.h \
    clothing.h \
    login.h \
    mainwindow.h \
    productspecs.h \
    register.h

FORMS += \
    category.ui \
    clothing.ui \
    login.ui \
    mainwindow.ui \
    register.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
