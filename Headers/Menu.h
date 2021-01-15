#pragma once
#include <list>
#include <sstream>
#include "MenuChoice.h"

class Menu
{
private:
	list<MenuChoice> choiceList;
	unsigned int selectedOption;

public:
	//Constructors
	Menu();

	//Destructors
	~Menu();

	//Displayers
	unsigned int display(const stringstream &summary);
	unsigned int display(const string &summary = "");

	//Getters
	bool leaving() const;

	//Setters / Editers
	void selectIncr();
	void selectDecr();
	void addChoice(const string &name);
	void addExit(const string &name = "Exit");
	bool deleteChoice(const unsigned int &labelIn);
};
