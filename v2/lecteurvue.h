#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class LecteurVue : public QMainWindow
{
    Q_OBJECT

public:
    LecteurVue(QWidget *parent = nullptr);
    ~LecteurVue();

public slots:
    void quitter();
    void charger();
    void enlever();
    void vitesse();
    void apropos();
    void precedent();
    void suivant();
    void lancer();
    void arreter();


private:
    Ui::MainWindow *ui;
};
#endif // LECTEURVUE_H
