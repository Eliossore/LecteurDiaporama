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
    QObject::connect(ui->actionVitesseDeDeplacement, SIGNAL(triggered()), this, SLOT(vitesse()));
    QObject::connect(ui->actionAProposDe, SIGNAL(triggered()), this, SLOT(apropos()));
    QObject::connect(ui->bSuivant, SIGNAL(clicked()), this, SLOT(suivant()));
    QObject::connect(ui->bPrecedent, SIGNAL(clicked()), this, SLOT(precedent()));
    QObject::connect(ui->bArreter, SIGNAL(clicked()), this, SLOT(arreter()));
    QObject::connect(ui->bLancer, SIGNAL(clicked()), this, SLOT(lancer()));
    chargerDiaporama();
    afficher();
}

LecteurVue::~LecteurVue()
{
    delete ui;
}

void LecteurVue::quitter()
{
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
    QMessageBox::information(this, "À propos...", "Information sur l'application :\n\n - Version de l'application : V2\n - Date de création : 16/05/2023\n - Auteurs : Maxime JACOB-SAUSSEREAU, Esteban BACKES, Eneko ARBELBIDE\n");
}
void LecteurVue::precedent()
{
    (this)->_posImageCourante = ((this)->_posImageCourante - 1) % nbImages();
    this->afficher();
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
    (this)->_posImageCourante = ((this)->_posImageCourante + 1) % nbImages();
    this->afficher();
}

void LecteurVue::changerDiaporama(unsigned int pNumDiaporama)
{
    // s'il y a un diaporama courant, le vider, puis charger le nouveau Diaporama
    if (numDiaporamaCourant() > 0)
    {
        viderDiaporama();
    }
    _numDiaporamaCourant = pNumDiaporama;
    if (numDiaporamaCourant() > 0)
    {
        chargerDiaporama(); // charge le diaporama courant
    }

}

void LecteurVue::chargerDiaporama()
{
    /* Chargement des images associées au diaporama courant
       Dans une version ultérieure, ces données proviendront d'une base de données,
       et correspondront au diaporama choisi */
    Image* imageACharger;
    imageACharger = new Image(3, "personne", "Mulan", ":/cartesDisney/cartesDisney/Disney_24.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(2, "animal", "Dumbo", ":/cartesDisney/cartesDisney/Disney_11.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(4, "animal", "Alien", ":/cartesDisney/cartesDisney/Disney_42.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(1, "personne", "Cendrillon", ":/cartesDisney/cartesDisney/Disney_47.gif");
    _diaporama.push_back(imageACharger);


    // trier le contenu du diaporama par ordre croissant selon le rang de l'image dans le diaporama
        for (unsigned short int i = 0; i < _diaporama.size(); ++i)
        {
            for (unsigned short int j = 0; j < _diaporama.size() - i - 1; ++j)
            {
                if (_diaporama[j]->getRang() > _diaporama[j + 1]->getRang())
                {
                    // échanger les éléments
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
            _diaporama.pop_back(); /* Removes the last element in the vector,
                                      effectively reducing the container size by one.
                                      AND deletes the removed element */
        }
     _posImageCourante = 0;
    }
    cout << nbImages() << " images restantes dans le diaporama." << endl;

}

void LecteurVue::afficher()
{
    /* affiche les information sur le lecteur :
     * 1) vide (si num. de diaporama = 0) OU BIEN numéro de diaporama affiché
     * 2) Si un diaporama courant est chargé (num. de diaporama > 0), affiche l'image courante OU BIEN 'diaporama vide'
     *     si ce diaporama n'a aucun image */

    // 1)
    if (numDiaporamaCourant() == 0)
        cout << "vide" << endl;
    else
        cout << numDiaporamaCourant() << endl;

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
        cout << "diaporama vide" << endl;
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
