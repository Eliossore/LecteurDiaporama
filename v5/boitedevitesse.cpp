#include "boitedevitesse.h"
#include "ui_boitedevitesse.h"

boiteDeVitesse::boiteDeVitesse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::boiteDeVitesse)
{
    _vitesse = 2;
    ui->setupUi(this);
    QObject::connect(ui->pConfirmer, SIGNAL(clicked()), this, SLOT(confirmer()));
    QObject::connect(ui->pAnnuler, SIGNAL(clicked()), this, SLOT(annuler()));
}

boiteDeVitesse::~boiteDeVitesse()
{
    delete ui;
}

int boiteDeVitesse::getVitesse()
{
    return _vitesse;
}

void boiteDeVitesse::confirmer()
{
    _vitesse = ui->spbVitesse->value();
    this->close();
}

void boiteDeVitesse::annuler()
{
    this->close();
}
