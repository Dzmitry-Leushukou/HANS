#ifndef PLAYMENU_H
#define PLAYMENU_H

#include <QMainWindow>
#include "gamepresetmenu.h"

namespace Ui {
class PlayMenu;
}

class PlayMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlayMenu(QWidget *parent = nullptr);
    ~PlayMenu();

signals:
    void Back();

private slots:

    void on_BackButton_clicked();

    void on_NewGameButton_clicked();

    void showMenu();

private:
    Ui::PlayMenu *ui;
    GamePresetMenu *game_preset_menu;
};

#endif // PLAYMENU_H
