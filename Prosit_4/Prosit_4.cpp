#include <iostream>
#include "library.h"

int main()
{
    // Ajout de contenus � la premi�re radio
    radio.ajouterContenu("Bonjour flash premi�res nouvelles!!", radio.getpremier());
    radio.ajouterContenu("Donnald Trump a tweet�...", radio.getpremier());
    radio.ajouterContenu("Qu'il avait gang� l'election!!!!", radio.getpremier());
    radio.ajouterContenu("quel ouf ce donald", radio.getpremier());

    // Ajout de contenus � la deuxi�me radio
    radio2.ajouterContenu("Yooooooo, aujourd'hui encore...", radio2.getpremier());
    radio2.ajouterContenu("Nekfeu met le feu", radio2.getpremier());
    radio2.ajouterContenu("Gims se tire", radio2.getpremier());
    radio2.ajouterContenu("Et kaaris joue avec des bouchons de li�ges!", radio2.getpremier());

    // Ajout de contenus � la troisi�me radio
    radio3.ajouterContenu("Bonjour, bonjour!!!", radio3.getpremier());
    radio3.ajouterContenu("On va vous mettre ce Bon vieux Jonnhy aujourd'hui!", radio3.getpremier());
    radio3.ajouterContenu("tourner le temps a l'orage...", radio3.getpremier());
    radio3.ajouterContenu("revenir a l'etat sauuuuvage", radio3.getpremier());

    // Ajout de contenus � la quatri�me radio
    radio4.ajouterContenu("Quel est l'animal le plus heureux?", radio4.getpremier());
    radio4.ajouterContenu("Le hibou, parce que sa femme est chouette!", radio4.getpremier());
    radio4.ajouterContenu("Quel est le point commun entre un pecheur et un mannequin?", radio4.getpremier());
    radio4.ajouterContenu("ils surveillent leur ligne!!!", radio4.getpremier());

    // Cr�ation d'un r�cepteur et �coute des radios
    Recepteur monrecepteur;
    monrecepteur.ecouter();

    return 0;
}


