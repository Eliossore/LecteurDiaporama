#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include <QMessageBox>
#include <vector>
#include <QDialog>
#include <QTimer>
#include <QPixmap>
#include <QSpinBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "image.h"
#include "boitedevitesse.h"

typedef vector<Image*> Diaporama;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class LecteurVue : public QMainWindow
{
    Q_OBJECT

public:
    LecteurVue(QWidget *parent = nullptr);
    ~LecteurVue();
    void changerDiaporama(unsigned int pNumDiaporama);    // Permet de choisir un diaporama, 0 si aucun diaporama souhaité
    void afficher();            // Affiche les informations sur lecteur-diaporama et image courante
    unsigned int nbImages();    // Affiche la taille de _diaporama
    Image* imageCourante();     // Retourne le pointeur vers l'image courante
    unsigned int numDiaporamaCourant();

public slots:
    // Les slots pour les boutons
    void quitter();
    void charger();
    void enlever();
    void vitesse();
    void apropos();
    void precedent();
    void suivant();
    void lancer();
    void arreter();
    void avanceAuto();


private:
    Ui::MainWindow *ui;
    unsigned _numDiaporamaCourant;   // Numéro du diaporama courant
    Diaporama _diaporama;            // Pointeur pour la liste d'image
    unsigned int _posImageCourante;  /* Position, dans le diaporama,
                                        de l'image courante.
                                        Indéfini quand diaporama vide. */
    QTimer *_temps;
    QDialog *_pageVitesse;
    boiteDeVitesse *_vite;

    /*-----------------------*/
    void chargerDiaporama();    // charge dans _diaporama les images du _numDiaporamaCourant
    void viderDiaporama();      // vide _diaporama de tous ses objets image et les delete

};
#endif // LECTEURVUE_H
