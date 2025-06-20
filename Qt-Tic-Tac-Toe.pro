#-------------------------------------------------
#
#
#-------------------------------------------------

QT       += multimedia
QT       += core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qt-Tic-Tac-Toe
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++14

INCLUDEPATH += \
    AI \
    Model \
    View \
    Controller \
    Forms

SOURCES += \
    View/mainpage.cpp \
    View/playerhistory.cpp \
    View/profile.cpp \
    View/signup.cpp \
    howtoplay.cpp \
    lastpositiondisplay.cpp \
    main.cpp \
    AI/MiniMaxAgent.cpp \
    Model/Board.cpp \
    View/TicTacToeGame.cpp \
    View/TitleScreen.cpp \
    Controller/TTTController.cpp \
    performancemetrics.cpp

HEADERS += \
    AI/AIAgent.h \
    AI/NoAgent.h \
    AI/MiniMaxAgent.h \
    Global_variables.h \
    Model/Board.h \
    View/TicTacToeGame.h \
    View/TitleScreen.h \
    Controller/TTTController.h \
    TTTCommonTypes.h \
    View/mainpage.h \
    View/playerhistory.h \
    View/profile.h \
    View/signup.h \
    howtoplay.h \
    lastpositiondisplay.h \
    performancemetrics.h

FORMS += \
    Forms/TicTacToeGame.ui \
    Forms/titlescreen.ui \
    View/mainpage.ui \
    View/playerhistory.ui \
    View/profile.ui \
    View/signup.ui \
    howtoplay.ui \
    lastpositiondisplay.ui

RC_ICONS = images/icon.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
