#include "Radio.h"

// Constructeur par défaut de la classe Radio
Radio::Radio()
{
    premier = nullptr; // Initialise le pointeur 'premier' à nullptr
}

// Fonction qui affiche les messages récursivement à partir du pointeur donné
string Radio::getmessage(Contenu* p1)
{
    if (p1 == nullptr)
    {
        return string(); // Retourne une chaîne vide si le pointeur est nullptr
    }
    else
    {
        cout << p1->message << endl; // Affiche le message du nœud actuel
        return getmessage(p1->next); // Appel récursif avec le pointeur suivant
    }
}

// Fonction qui retourne le pointeur vers le premier contenu de la liste
Contenu* Radio::getpremier()
{
    return premier; // Retourne le pointeur vers le premier élément de la liste
}

// Fonction qui ajoute un nouveau contenu à la liste
void Radio::ajouterContenu(string msg, Contenu* premier)
{
    Contenu* n;
    n = new Contenu; // Alloue dynamiquement un nouvel élément Contenu
    n->message = msg; // Initialise le message avec la chaîne donnée
    n->next = premier; // Le prochain élément pointe vers l'ancien premier
    this -> premier = n; // Met à jour le pointeur 'premier' pour pointer vers le nouvel élément
}
