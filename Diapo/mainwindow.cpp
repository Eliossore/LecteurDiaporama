#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(quitter()));
    QObject::connect(ui->actionChargerDiaporama, SIGNAL(clicked()), this, SLOT(charger()));
    QObject::connect(ui->actionEnleverDiaporama, SIGNAL(clicked()), this, SLOT(enlever()));
    QObject::connect(ui->actionVitesseDeDeplacement, SIGNAL(clicked()), this, SLOT(vitesse()));
    QObject::connect(ui->actionAProposDe, SIGNAL(clicked()), this, SLOT(apropos()));
    s = "Finito";
    qDebug() << s;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::quitter()
{
    s = "Bouton quitter";
    qDebug() << s;
}

void MainWindow::charger()
{
    s = "Bouton changer";
    qDebug() << s;
}

void MainWindow::enlever()
{
    s = "Bouton enlever";
    qDebug() << s;
}

void MainWindow::vitesse()
{
    s = "Bouton vitesse";
    qDebug() << s;
}
void MainWindow::apropos()
{
    s = "Bouton apropos";
    qDebug() << s;
}
void MainWindow::precedent()
{
    s = "Bouton precedent";
    qDebug() << s;
}
void MainWindow::lancer()
{
    s = "Bouton lancer";
    qDebug() << s;
}
void MainWindow::arreter()
{
    s = "Bouton arreter";
    qDebug() << s;
}
