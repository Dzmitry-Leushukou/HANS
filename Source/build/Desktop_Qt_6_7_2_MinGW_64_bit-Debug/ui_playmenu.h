/********************************************************************************
** Form generated from reading UI file 'playmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYMENU_H
#define UI_PLAYMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayMenu
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PlayMenu)
    {
        if (PlayMenu->objectName().isEmpty())
            PlayMenu->setObjectName("PlayMenu");
        PlayMenu->resize(800, 600);
        centralwidget = new QWidget(PlayMenu);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(410, 170, 83, 29));
        PlayMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PlayMenu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        PlayMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(PlayMenu);
        statusbar->setObjectName("statusbar");
        PlayMenu->setStatusBar(statusbar);

        retranslateUi(PlayMenu);

        QMetaObject::connectSlotsByName(PlayMenu);
    } // setupUi

    void retranslateUi(QMainWindow *PlayMenu)
    {
        PlayMenu->setWindowTitle(QCoreApplication::translate("PlayMenu", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("PlayMenu", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlayMenu: public Ui_PlayMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYMENU_H
