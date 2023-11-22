#include "Recepteur.h"

// Constructeur de la classe Recepteur
Recepteur::Recepteur()
{
    int n;
    int choix;

    // Demande à l'utilisateur combien de chaînes radio il souhaite ajouter
    cout << "Combien de chaînes sur les 4 disponibles voulez-vous ajouter ?" << endl;
    cin >> n;

    // Vérification de la validité de la valeur entrée par l'utilisateur
    while (n != 1 && n != 2 && n != 3 && n != 4)
    {
        cout << "Nombre incorrect" << endl;
        cin >> n;
    }

    // Boucle pour ajouter les chaînes radio choisies par l'utilisateur
    for (int i = 0; i < n; i++)
    {
        // Demande à l'utilisateur le numéro de la radio choisie
        cout << "Veuillez entrer le numéro de radio choisi" << endl;
        cin >> choix;

        // Vérification de la validité de la valeur entrée par l'utilisateur
        while (choix != 1 || choix != 2 || choix != 3 || choix != 4)
        {
            cout << "Numéro incorrect" << endl;
            cin >> choix;
        }

        // Ajoute le pointeur de la radio choisie au tableau de pointeurs de radios
        if (choix == 1)
        {
            Radio* p;
            p = &radio;
            setTabPointeurRadio(p);
        }
        else if (choix == 2)
        {
            Radio* p;
            p = &radio2;
            setTabPointeurRadio(p);
        }
        else if (choix == 3)
        {
            Radio* p;
            p = &radio3;
            setTabPointeurRadio(p);
        }
        else if (choix == 4)
        {
            Radio* p;
            p = &radio4;
            setTabPointeurRadio(p);
        }
    }
}

// Fonction qui permet au récepteur d'écouter toutes les radios
void Recepteur::ecouter()
{
    emetteur.Diffuser(*this);
}

// Fonction qui retourne le tableau de pointeurs de radios
vector<Radio*> Recepteur::getTabPointeurRadio()
{
    return tabPointeurRadio;
}

// Fonction qui ajoute un pointeur de radio au tableau de pointeurs de radios
void Recepteur::setTabPointeurRadio(Radio* p1)
{
    tabPointeurRadio.push_back(p1);
}
