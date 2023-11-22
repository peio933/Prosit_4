#include "Emetteur.h"

// Fonction de la classe Emetteur qui diffuse des messages � tous les r�cepteurs
void Emetteur::Diffuser(Recepteur& ok)
{
    // Parcours de la liste des pointeurs Radio du r�cepteur
    for (int i = 0; i < ok.getTabPointeurRadio().size(); i++)
    {
        // Appel � la fonction getmessage pour afficher les messages du Radio courant
        ok.getTabPointeurRadio()[i]->getmessage(ok.getTabPointeurRadio()[i]->getpremier());
    }
}
