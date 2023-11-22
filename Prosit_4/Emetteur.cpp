#include "Emetteur.h"

// Fonction de la classe Emetteur qui diffuse des messages à tous les récepteurs
void Emetteur::Diffuser(Recepteur& ok)
{
    // Parcours de la liste des pointeurs Radio du récepteur
    for (int i = 0; i < ok.getTabPointeurRadio().size(); i++)
    {
        // Appel à la fonction getmessage pour afficher les messages du Radio courant
        ok.getTabPointeurRadio()[i]->getmessage(ok.getTabPointeurRadio()[i]->getpremier());
    }
}
