#pragma once
#include <list>
#include "menuChoice.h"

class menu
{
private:
	list<menuChoice> choiceList;
	unsigned int selectedOption;

public:
	menu();
	~menu();

	unsigned int display();
	void selectIncr();
	void selectDecr();
	void addChoice(string name);
	void hideChoice(menuChoice* menuChoiceIn);
	void showChoice(menuChoice* menuChoiceIn);
	bool deleteChoice(unsigned int labelIn);
};