#pragma once
#include "library.h"
class Recepteur
{
public:
	Recepteur();
	void ecouter();
	vector<Radio*> getTabPointeurRadio();
	void setTabPointeurRadio(Radio*);

private:
	vector<int> tabRadio;
	vector<Radio*> tabPointeurRadio;
};

