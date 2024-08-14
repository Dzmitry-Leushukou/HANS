#include "gamepresetmenu.h"
#include "ui_gamepresetmenu.h"

GamePresetMenu::GamePresetMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GamePresetMenu)
{
    ui->setupUi(this);
}

GamePresetMenu::~GamePresetMenu()
{
    delete ui;
}
