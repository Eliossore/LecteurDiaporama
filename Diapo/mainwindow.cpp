#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    QObject::connect(bEffacer, SIGNAL(clicked()), this, SLOT(effacer()));






    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

