#include "lecteur.h"

Lecteur::Lecteur()
{
    _numDiaporamaCourant = 0;   // =  le lecteur est vide
}

void Lecteur::avancer()
{
    if (_diaporama.size() == 0) {
        return; // ne rien faire si le diaporama est vide
    }

    _posImageCourante = (_posImageCourante + 1) % _diaporama.size();
}

void Lecteur::reculer()
{
    if (_diaporama.size() == 0) {
        return; // ne rien faire si le diaporama est vide
    }

    _posImageCourante = (_posImageCourante - 1 + _diaporama.size()) % _diaporama.size();
}

void Lecteur::changerDiaporama(unsigned int pNumDiaporama)
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

void Lecteur::chargerDiaporama()
{
    /* Chargement des images associées au diaporama courant
       Dans une version ultérieure, ces données proviendront d'une base de données,
       et correspondront au diaporama choisi */
    Image* imageACharger;
    imageACharger = new Image(3, "personne", "Blanche Neige", "C:\\cartesDisney\\carteDisney2.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(2, "personne", "Cendrillon", "C:\\cartesDisney\\carteDisney4.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(4, "animal", "Mickey", "C:\\cartesDisney\\carteDisney1.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(1, "personne", "Grincheux", "C:\\cartesDisney\\carteDisney1.gif");
    _diaporama.push_back(imageACharger);


     // trier le contenu du diaporama par ordre croissant selon le rang de l'image dans le diaporama
     for (unsigned int i = 0; i < nbImages() - 1; i++) {
            for (unsigned int j = i + 1; j < nbImages(); j++) {
                if (_diaporama[i]->getRang() > _diaporama[j]->getRang()) {
                    swap(_diaporama[i], _diaporama[j]);
                }
            }
        }
	 
     _posImageCourante = 0;

     cout << "Diaporama num. " << numDiaporamaCourant() << " selectionne. " << endl;
     cout << nbImages() << " images chargees dans le diaporama" << endl;

}

void Lecteur::viderDiaporama()
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

void Lecteur::afficher()
{
    /* affiche les information sur le lecteur :
     * 1) vide (si num. de diaporama = 0) OU BIEN  numéro de diaporama affiché
     * 2) Si un diaporama courant est chargé (num. de diaporama > 0), affiche l'image courante OU BIEN 'diaporama vide'
     *     si ce diaporama n'a aucun image */

        if (numDiaporamaCourant() == 0) {
            cout << "Lecteur vide." << endl;
        }
        else {
            cout << "Diaporama num. " << numDiaporamaCourant() << " : " << endl;
            if (nbImages() == 0) {
                cout << "Aucune image dans ce diaporama." << endl;
            }
            else {
                Image* imageCourante = this->imageCourante();
                cout << "Image courante : " << endl;
                imageCourante->afficher();
            }
        }
}

unsigned int Lecteur::nbImages()
{
    return _diaporama.size();
}

Image *Lecteur::imageCourante()
{
    if (_diaporama.empty()) { // Si le diaporama est vide
            return nullptr; // Retourne un pointeur nul car il n'y a pas d'image courante
        }
    else { // Sinon, retourne un pointeur vers l'image courante
            return _diaporama[_posImageCourante];
        }
}

unsigned int Lecteur::numDiaporamaCourant()
{
    return _numDiaporamaCourant;
}
