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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayMenu
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *BackButton;
    QPushButton *ContinueButton;
    QPushButton *SavedButton;
    QPushButton *NewGameButton;

    void setupUi(QMainWindow *PlayMenu)
    {
        if (PlayMenu->objectName().isEmpty())
            PlayMenu->setObjectName("PlayMenu");
        PlayMenu->resize(800, 600);
        centralwidget = new QWidget(PlayMenu);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        BackButton = new QPushButton(centralwidget);
        BackButton->setObjectName("BackButton");

        gridLayout->addWidget(BackButton, 3, 0, 1, 1);

        ContinueButton = new QPushButton(centralwidget);
        ContinueButton->setObjectName("ContinueButton");

        gridLayout->addWidget(ContinueButton, 0, 0, 1, 1);

        SavedButton = new QPushButton(centralwidget);
        SavedButton->setObjectName("SavedButton");

        gridLayout->addWidget(SavedButton, 2, 0, 1, 1);

        NewGameButton = new QPushButton(centralwidget);
        NewGameButton->setObjectName("NewGameButton");

        gridLayout->addWidget(NewGameButton, 1, 0, 1, 1);

        PlayMenu->setCentralWidget(centralwidget);

        retranslateUi(PlayMenu);

        QMetaObject::connectSlotsByName(PlayMenu);
    } // setupUi

    void retranslateUi(QMainWindow *PlayMenu)
    {
        PlayMenu->setWindowTitle(QCoreApplication::translate("PlayMenu", "MainWindow", nullptr));
        BackButton->setText(QCoreApplication::translate("PlayMenu", "Back", nullptr));
        ContinueButton->setText(QCoreApplication::translate("PlayMenu", "Continue Game", nullptr));
        SavedButton->setText(QCoreApplication::translate("PlayMenu", "Saved Games", nullptr));
        NewGameButton->setText(QCoreApplication::translate("PlayMenu", "New Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlayMenu: public Ui_PlayMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYMENU_H
