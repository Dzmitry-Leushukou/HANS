/********************************************************************************
** Form generated from reading UI file 'gamepresetmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEPRESETMENU_H
#define UI_GAMEPRESETMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GamePresetMenu
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GamePresetMenu)
    {
        if (GamePresetMenu->objectName().isEmpty())
            GamePresetMenu->setObjectName("GamePresetMenu");
        GamePresetMenu->resize(800, 600);
        centralwidget = new QWidget(GamePresetMenu);
        centralwidget->setObjectName("centralwidget");
        GamePresetMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GamePresetMenu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        GamePresetMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(GamePresetMenu);
        statusbar->setObjectName("statusbar");
        GamePresetMenu->setStatusBar(statusbar);

        retranslateUi(GamePresetMenu);

        QMetaObject::connectSlotsByName(GamePresetMenu);
    } // setupUi

    void retranslateUi(QMainWindow *GamePresetMenu)
    {
        GamePresetMenu->setWindowTitle(QCoreApplication::translate("GamePresetMenu", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GamePresetMenu: public Ui_GamePresetMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPRESETMENU_H
