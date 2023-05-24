#include "lecteurvue.h"
#include "ui_lecteurvue.h"

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(quitter()));
    QObject::connect(ui->actionChargerDiaporama, SIGNAL(triggered()), this, SLOT(charger()));
    QObject::connect(ui->actionEnleverDiaporama, SIGNAL(triggered()), this, SLOT(enlever()));
    QObject::connect(ui->actionVitesseDeDefilement, SIGNAL(triggered()), this, SLOT(vitesse()));
    QObject::connect(ui->actionAProposDe, SIGNAL(triggered()), this, SLOT(apropos()));
    QObject::connect(ui->bSuivant, SIGNAL(clicked()), this, SLOT(suivant()));
    QObject::connect(ui->bPrecedent, SIGNAL(clicked()), this, SLOT(precedent()));
    QObject::connect(ui->bArreter, SIGNAL(clicked()), this, SLOT(arreter()));
    QObject::connect(ui->bLancer, SIGNAL(clicked()), this, SLOT(lancer()));
}

LecteurVue::~LecteurVue()
{
    delete ui;
}

void LecteurVue::quitter()
{
    qDebug() << "Bouton quitter";
}

void LecteurVue::charger()
{
    qDebug() << "Bouton changer";
}

void LecteurVue::enlever()
{
    qDebug() << "Bouton enlever";
}

void LecteurVue::vitesse()
{
    qDebug() << "Bouton vitesse";
}
void LecteurVue::apropos()
{
    qDebug() << "Bouton apropos";
}
void LecteurVue::precedent()
{
    qDebug() << "Bouton precedent";;
}
void LecteurVue::lancer()
{
    qDebug() << "Bouton lancer";
}
void LecteurVue::arreter()
{

    qDebug() << "Bouton arreter";
}

void LecteurVue::suivant()
{
    qDebug() << "Bouton suivant";
}
