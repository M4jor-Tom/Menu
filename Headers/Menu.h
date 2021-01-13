#pragma once
#include <list>
#include "MenuChoice.h"

class Menu
{
private:
	list<MenuChoice> choiceList;
	unsigned int selectedOption;

public:
	Menu();
	~Menu();

	unsigned int display();
	bool leaving() const;
	void selectIncr();
	void selectDecr();
	void addChoice(string name);
	void addExit(string name = "Exit");
	bool deleteChoice(unsigned int labelIn);
};
