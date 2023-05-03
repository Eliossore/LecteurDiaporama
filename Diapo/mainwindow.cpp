#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(quitter()));
    QObject::connect(ui->actionChargerDiaporama, SIGNAL(triggered()), this, SLOT(charger()));
    QObject::connect(ui->actionEnleverDiaporama, SIGNAL(triggered()), this, SLOT(enlever()));
    QObject::connect(ui->actionVitesseDeDeplacement, SIGNAL(triggered()), this, SLOT(vitesse()));
    QObject::connect(ui->actionAProposDe, SIGNAL(triggered()), this, SLOT(apropos()));
    QObject::connect(ui->bSuivant, SIGNAL(clicked()), this, SLOT(suivant()));
    QObject::connect(ui->bPrecedent, SIGNAL(clicked()), this, SLOT(precedent()));
    QObject::connect(ui->bArreter, SIGNAL(clicked()), this, SLOT(arreter()));
    QObject::connect(ui->bLancer, SIGNAL(clicked()), this, SLOT(lancer()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::quitter()
{
    qDebug() << "Bouton quitter";
}

void MainWindow::charger()
{
    qDebug() << "Bouton changer";
}

void MainWindow::enlever()
{
    qDebug() << "Bouton enlever";
}

void MainWindow::vitesse()
{
    qDebug() << "Bouton vitesse";
}
void MainWindow::apropos()
{
    qDebug() << "Bouton apropos";
}
void MainWindow::precedent()
{
    qDebug() << "Bouton precedent";;
}
void MainWindow::lancer()
{
    qDebug() << "Bouton lancer";
}
void MainWindow::arreter()
{

    qDebug() << "Bouton arreter";
}

void MainWindow::suivant()
{
    qDebug() << "Bouton suivant";
}
