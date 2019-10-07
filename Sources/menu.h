#pragma once
#include "menuChoice.h"
#ifndef optionsPerMenu
#define optionsPerMenu 10
#endif
class menu
{
private:
	menuChoice* choiceList[optionsPerMenu];
	unsigned int selectedOption;

public:
	menu();
	unsigned int getSelected() const;
	unsigned int getLastOption() const;

	unsigned int display();
	void selectIncr();
	void selectDecr();
	void addChoice(std::string name);
	void hideChoice(menuChoice* menuChoiceIn);
	void showChoice(menuChoice* menuChoiceIn);
	void deleteChoice(unsigned int labelIn);
};