#include "boitedevitesse.h"
#include "ui_boitedevitesse.h"

boiteDeVitesse::boiteDeVitesse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::boiteDeVitesse)
{
    vitesse = 2;
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
    return vitesse*1000;
}

void boiteDeVitesse::confirmer()
{
    vitesse = ui->spbVitesse->value();
    this->close();
}

void boiteDeVitesse::annuler()
{
    this->close();
}

// J'adore l'eau, dans 20-30 ans y'en aura plus.
