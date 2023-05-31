#include "lecteurvue.h"
#include "ui_lecteurvue.h"


LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _temps = new QTimer(this);
    // Connection des boutons et des actions
    QObject::connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(quitter()));
    QObject::connect(ui->actionChargerDiaporama, SIGNAL(triggered()), this, SLOT(charger()));
    QObject::connect(ui->actionEnleverDiaporama, SIGNAL(triggered()), this, SLOT(enlever()));
    QObject::connect(ui->actionVitesseDeDeplacement, SIGNAL(triggered()), this, SLOT(vitesse()));
    QObject::connect(ui->actionAProposDe, SIGNAL(triggered()), this, SLOT(apropos()));
    QObject::connect(ui->bSuivant, SIGNAL(clicked()), this, SLOT(suivant()));
    QObject::connect(_temps, SIGNAL(timeout()), this, SLOT(avanceAuto()));
    QObject::connect(ui->bPrecedent, SIGNAL(clicked()), this, SLOT(precedent()));
    QObject::connect(ui->bArreter, SIGNAL(clicked()), this, SLOT(arreter()));
    QObject::connect(ui->bLancer, SIGNAL(clicked()), this, SLOT(lancer()));
    // On charge le diaporama par défaut
    chargerDiaporama();
    // Et on affiche la première image du diapo
    afficher();
}

LecteurVue::~LecteurVue()
{
    delete ui;
}

void LecteurVue::quitter()
{
    /* Ferme la fênetre */
    this->close();
}

void LecteurVue::charger()
{
    qDebug() << "Bouton charger";
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
    // Crée une MessageBox avec les informations de l'applications lors de ça création
    // On le crée en 'dure' pour éviter de créer une toute nouvelle classe pour juste une seul fênetre
    QMessageBox::information(this, "À propos...", "Information sur l'application :\n\n - Version de l'application : V2\n - Date de création : 16/05/2023\n - Auteurs : Maxime JACOB-SAUSSEREAU, Esteban BACKES, Eneko ARBELBIDE\n");
}
void LecteurVue::precedent()
{
    if (_temps->isActive()) // Vérifie si le timer est actif et l'arrête si il est
    {
        arreter();
    }
    else
    {
        // Change la position de l'image dans le diaporama
        (this)->_posImageCourante = ((this)->_posImageCourante + 1) % nbImages();
        this->afficher();
    }
}
void LecteurVue::lancer()
{
    // Change la position de l'image dans le diaporama à la première
    (this)->_posImageCourante = 0;
    this->afficher();
    _temps->start(2000); // l'intervalle est mis à 2000 ms
    this->ui->lMode->setText("Automatique");
    this->ui->bArreter->setDisabled(false); // Active le bouton arrêter
}
void LecteurVue::arreter()
{
    _temps->stop();
    this->ui->lMode->setText("Manuel");
    this->ui->bArreter->setDisabled(true); // Désactive le bouton arrêter
}

void LecteurVue::suivant()
{
    if (_temps->isActive()) // Vérifie si le timer est actif et l'arrête si il est
    {
        arreter();
    }
    else
    {
        // Change la position de l'image dans le diaporama
        (this)->_posImageCourante = ((this)->_posImageCourante + 1) % nbImages();
        this->afficher();
    }
}

void LecteurVue::changerDiaporama(unsigned int pNumDiaporama)
{
    // Vide le diapo si il y en a déjà un
    if (numDiaporamaCourant() > 0)
    {
        viderDiaporama();
    }
    _numDiaporamaCourant = pNumDiaporama;
    if (numDiaporamaCourant() > 0)
    {
        chargerDiaporama();
    }

}

void LecteurVue::avanceAuto()
{
    // Version qui sera utiliser par le timer pour avancer dans le diaporama
    // Change la position de l'image dans le diaporama
    (this)->_posImageCourante = ((this)->_posImageCourante + 1) % nbImages();
    this->afficher();
}

void LecteurVue::chargerDiaporama()
{
    // On ajoute les images en dure dans le diaporama
    Image* imageACharger;
    imageACharger = new Image(3, "personne", "Mulan", ":/cartesDisney/cartesDisney/Disney_24.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(2, "animal", "Dumbo", ":/cartesDisney/cartesDisney/Disney_11.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(4, "animal", "Alien", ":/cartesDisney/cartesDisney/Disney_42.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(1, "personne", "Cendrillon", ":/cartesDisney/cartesDisney/Disney_47.gif");
    _diaporama.push_back(imageACharger);


    //  On trie les images dans le diaporama
        for (unsigned short int i = 0; i < _diaporama.size(); ++i)
        {
            for (unsigned short int j = 0; j < _diaporama.size() - i - 1; ++j)
            {
                if (_diaporama[j]->getRang() > _diaporama[j + 1]->getRang())
                {
                    Image* temp = _diaporama[j];
                    _diaporama[j] = _diaporama[j + 1];
                    _diaporama[j + 1] = temp;
                }
            }
         }

     _posImageCourante = 0;
}

void LecteurVue::viderDiaporama()
{
    if (nbImages () > 0)
    {
        unsigned int taille = nbImages();
        for (unsigned int i = 0; i < taille ; i++)
        {
            _diaporama.pop_back();
        }
     _posImageCourante = 0;
    }
    qDebug() << nbImages() << " Images restantes dans le diaporama." << Qt::endl;

}

void LecteurVue::afficher()
{
    // On affiche les information sur le lecteur
    // 1)
    if (numDiaporamaCourant() == 0)
        qDebug() << "Vide" << Qt::endl;
    else
        qDebug() << numDiaporamaCourant() << Qt::endl;

    // 2)
    if (nbImages() > 0) {
        imageCourante()->afficher();
        QPixmap imagePixmap = QPixmap(QString::fromStdString(imageCourante()->getChemin()));
        this->ui->lImage->setPixmap(imagePixmap);
        this->ui->lCategorie->setText(QString::fromStdString(imageCourante()->getCategorie()));
        this->ui->lRang->setText(QString::number(imageCourante()->getRang()));
        this->ui->lIntitule->setText(QString::fromStdString(imageCourante()->getTitre()));
    }
    else {
        qDebug() << "Diaporama vide" << Qt::endl;
    }
}

unsigned int LecteurVue::nbImages()
{
    return _diaporama.size();
}

Image *LecteurVue::imageCourante()
{
    return _diaporama[_posImageCourante];
}

unsigned int LecteurVue::numDiaporamaCourant()
{
    return _numDiaporamaCourant;
}
