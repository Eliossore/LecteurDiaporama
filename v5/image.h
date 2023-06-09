#ifndef IMAGE_H
#define IMAGE_H
#include <iostream>
#include <QString>
#include <QDebug>
using namespace std;

class Image
{
public:
    Image(unsigned int pRang=0,
              QString pCategorie="", QString pTitre="", QString pChemin = "");
    unsigned int getRang();
    QString getCategorie();
    QString getTitre();
    QString getChemin();
    void afficher();           // affiche tous les champs de l'image

private:
    unsigned int _rang;         /* rang de l'image au sein du diaporama
                                   auquel l'image est associée */
    QString _titre;              // intitulé de l'image
    QString _categorie;          // catégorie de l'image (personne, animal, objet)
    QString _chemin;             // chemin complet vers le dossier où se trouve l'image
};

#endif // IMAGE_H
