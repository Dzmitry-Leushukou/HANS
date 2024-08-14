#ifndef GAMEPRESETMENU_H
#define GAMEPRESETMENU_H

#include <QMainWindow>

namespace Ui {
class GamePresetMenu;
}

class GamePresetMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit GamePresetMenu(QWidget *parent = nullptr);
    ~GamePresetMenu();

signals:
    void BackToPlayMenu();

private:
    Ui::GamePresetMenu *ui;
};

#endif // GAMEPRESETMENU_H
