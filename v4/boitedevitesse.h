#ifndef BOITEDEVITESSE_H
#define BOITEDEVITESSE_H

#include <QDialog>
#include <QDebug>

namespace Ui {
class boiteDeVitesse;
}

class boiteDeVitesse : public QDialog
{
    Q_OBJECT

public:
    explicit boiteDeVitesse(QWidget *parent = nullptr);
    ~boiteDeVitesse();
    int vitesse;
    int getVitesse();

public slots:
    void confirmer();
    void annuler();

private:
    Ui::boiteDeVitesse *ui;
};

#endif // BOITEDEVITESSE_H
