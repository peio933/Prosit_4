#include "Recepteur.h"

// Constructeur de la classe Recepteur
Recepteur::Recepteur()
{
    int n;
    int choix;

    // Demande � l'utilisateur combien de cha�nes radio il souhaite ajouter
    cout << "Combien de cha�nes sur les 4 disponibles voulez-vous ajouter ?" << endl;
    cin >> n;

    // V�rification de la validit� de la valeur entr�e par l'utilisateur
    while (n != 1 && n != 2 && n != 3 && n != 4)
    {
        cout << "Nombre incorrect" << endl;
        cin >> n;
    }

    // Boucle pour ajouter les cha�nes radio choisies par l'utilisateur
    for (int i = 0; i < n; i++)
    {
        // Demande � l'utilisateur le num�ro de la radio choisie
        cout << "Veuillez entrer le num�ro de radio choisi" << endl;
        cin >> choix;

        // V�rification de la validit� de la valeur entr�e par l'utilisateur
        while (choix != 1 || choix != 2 || choix != 3 || choix != 4)
        {
            cout << "Num�ro incorrect" << endl;
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

// Fonction qui permet au r�cepteur d'�couter toutes les radios
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
