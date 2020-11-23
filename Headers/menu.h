#pragma once
#include <list>
#include "menuChoice.h"
#ifndef optionsPerMenu
#define optionsPerMenu 10
#endif
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