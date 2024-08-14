#include "mainmenu.h"
#include "ui_mainmenu.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete play_menu;
}

void MainWindow::showMainMenu()
{
    this->show();
    delete play_menu;
}

void MainWindow::on_Exit_clicked()
{
    delete ui;
    delete play_menu;
    exit(0);
}

void MainWindow::on_SettingsButton_clicked()
{

}

void MainWindow::on_PlayButton_clicked()
{
    play_menu=new PlayMenu();
    connect(play_menu, &PlayMenu::Back, this, &MainWindow::showMainMenu);
    play_menu->show();
    this->hide();

}

