#pragma once
#include <list>
#include <sstream>
#include "MenuChoice.h"

class Menu
{
private:
	list<MenuChoice> _choiceList;
	unsigned int _selectedOption;

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
	void addChoice(const string &name, Text::Code highlight);
	void addChoice(const string &name);
	void addLocked(const string &name);
	void addExit(const string &name = "Exit", Text::Code highlight = Text::BOLD);
	bool deleteChoice(const unsigned int &labelIn);
	void clear();
};
