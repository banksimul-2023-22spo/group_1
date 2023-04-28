QT       += core gui
QT += serialport
QT +=network
QT       += multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    enviroment.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    enviroment.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/build-chooseAction-Desktop_Qt_5_15_2_MinGW_64_bit-Debug/release/ -lchooseAction
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/build-chooseAction-Desktop_Qt_5_15_2_MinGW_64_bit-Debug/debug/ -lchooseAction

INCLUDEPATH += $$PWD/chooseAction
DEPENDPATH += $$PWD/chooseAction

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/build-DLL_endscene-Desktop_Qt_5_15_2_MinGW_64_bit-Debug/release/ -lDLL_endscene
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/build-DLL_endscene-Desktop_Qt_5_15_2_MinGW_64_bit-Debug/debug/ -lDLL_endscene

INCLUDEPATH += $$PWD/DLL_endscene
DEPENDPATH += $$PWD/DLL_endscene

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/build-DLL_loggedin-Desktop_Qt_5_15_2_MinGW_64_bit-Debug/release/ -lDLL_loggedin
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/build-DLL_loggedin-Desktop_Qt_5_15_2_MinGW_64_bit-Debug/debug/ -lDLL_loggedin

INCLUDEPATH += $$PWD/DLL_loggedin
DEPENDPATH += $$PWD/DLL_loggedin

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/build-DLL_withdraw-Desktop_Qt_5_15_2_MinGW_64_bit-Debug/release/ -lDLL_withdraw
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/build-DLL_withdraw-Desktop_Qt_5_15_2_MinGW_64_bit-Debug/debug/ -lDLL_withdraw

INCLUDEPATH += $$PWD/DLL_withdraw
DEPENDPATH += $$PWD/DLL_withdraw
