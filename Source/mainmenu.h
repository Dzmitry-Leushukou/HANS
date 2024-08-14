#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>
#include <playmenu.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void showMainMenu();

private slots:
    void on_Exit_clicked();

    void on_SettingsButton_clicked();

    void on_PlayButton_clicked();

private:
    Ui::MainWindow *ui;
    PlayMenu* play_menu;
};
#endif // MAINMENU_H
