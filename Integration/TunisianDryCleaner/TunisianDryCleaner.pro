QT       += core gui multimedia multimediawidgets
QT       += widgets
QT       += core gui sql
QT       += core gui
QT       += serialport
QT       += core gui  serialport charts
QT       += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

#Gestion du réseau
TEMPLATE = app
#CONFIG += release
QT += network
#TARGET =
DEPENDPATH += .
INCLUDEPATH += .

QT += printsupport

SOURCES += \
    arduino.cpp \
    arduinoemp.cpp \
    client.cpp \
    connection.cpp \
    employe.cpp \
    exportexcelobjec.cpp \
    fournisseurs.cpp \
    interfacearduinoclient.cpp \
    interfacearduinoproduit.cpp \
    interfaceauthentification.cpp \
    main.cpp \
    mainwindow.cpp \
    produit.cpp \
    profil.cpp \
    qrcode.cpp \
    service.cpp \
    smtp.cpp \
    statistique.cpp

HEADERS += \
    arduino.h \
    arduinoemp.h \
    client.h \
    connection.h \
    employe.h \
    exportexcelobjec.h \
    fournisseurs.h \
    interfacearduinoclient.h \
    interfacearduinoproduit.h \
    interfaceauthentification.h \
    mainwindow.h \
    produit.h \
    profil.h \
    qrcode.h \
    service.h \
    smtp.h \
    statistique.h

FORMS += \
    interfacearduinoclient.ui \
    interfacearduinoproduit.ui \
    interfaceauthentification.ui \
    mainwindow.ui \
    statistique.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    TunisianDryCleaner.pro.user \
    TunisianDryCleaner.pro.user.3b2098f \
    english.qm \
    english.ts \
    message.py

RESOURCES +=
