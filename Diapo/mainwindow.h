#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString s;

public slots:
    void quitter();
    void charger();
    void enlever();
    void vitesse();
    void apropos();
    void precedent();
    void lancer();
    void arreter();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
