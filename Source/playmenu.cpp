#include "playmenu.h"
#include "ui_playmenu.h"

PlayMenu::PlayMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PlayMenu)
{
    ui->setupUi(this);
}

PlayMenu::~PlayMenu()
{
    delete ui;
    delete game_preset_menu;
}

void PlayMenu::on_BackButton_clicked()
{
    emit Back();
}

void PlayMenu::on_NewGameButton_clicked()
{
    game_preset_menu=new GamePresetMenu();
    game_preset_menu->show();
    connect(game_preset_menu, &GamePresetMenu::BackToPlayMenu, this, &PlayMenu::showMenu);
    this->hide();
}

void PlayMenu::showMenu()
{
    this->show();
    game_preset_menu->hide();
    delete game_preset_menu;
}

