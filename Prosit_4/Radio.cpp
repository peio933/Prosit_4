#include "Radio.h"

// Constructeur par d�faut de la classe Radio
Radio::Radio()
{
    premier = nullptr; // Initialise le pointeur 'premier' � nullptr
}

// Fonction qui affiche les messages r�cursivement � partir du pointeur donn�
string Radio::getmessage(Contenu* p1)
{
    if (p1 == nullptr)
    {
        return string(); // Retourne une cha�ne vide si le pointeur est nullptr
    }
    else
    {
        cout << p1->message << endl; // Affiche le message du n�ud actuel
        return getmessage(p1->next); // Appel r�cursif avec le pointeur suivant
    }
}

// Fonction qui retourne le pointeur vers le premier contenu de la liste
Contenu* Radio::getpremier()
{
    return premier; // Retourne le pointeur vers le premier �l�ment de la liste
}

// Fonction qui ajoute un nouveau contenu � la liste
void Radio::ajouterContenu(string msg, Contenu* premier)
{
    Contenu* n;
    n = new Contenu; // Alloue dynamiquement un nouvel �l�ment Contenu
    n->message = msg; // Initialise le message avec la cha�ne donn�e
    n->next = premier; // Le prochain �l�ment pointe vers l'ancien premier
    this -> premier = n; // Met � jour le pointeur 'premier' pour pointer vers le nouvel �l�ment
}
