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
	bool leaving() const;
	void selectIncr();
	void selectDecr();
	void addChoice(string name);
	void addExit(string name = "Exit");
	bool deleteChoice(unsigned int labelIn);
};