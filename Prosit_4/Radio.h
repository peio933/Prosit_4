#pragma once
#include "library.h"

typedef struct Contenu Contenu;

struct Contenu {
	string message;
	Contenu* next;
};



class Radio
{
private:
	Contenu* premier;
public:
	Radio();
	string getmessage(Contenu*);
	Contenu* getpremier();
	void ajouterContenu(string, Contenu*);
};

Radio radio;
Radio radio2;
Radio radio3;
Radio radio4;

