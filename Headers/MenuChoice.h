#pragma once

#include <cstdlib>
#include <string>
#include <iostream>
#include "../conio/Headers/conio.h"
#include "../TextModyst/Headers/Modyst.h"

using namespace std;

class MenuChoice
{
private:
	unsigned int _label;
	string _optionName;
	bool _leaver;
	Text::Code _highlight;
	bool _locked;

public:
	MenuChoice(const unsigned int &label, const string &optionName, const bool &leaver);
	MenuChoice(const unsigned int &label, const string &optionName, const bool &leaver, Text::Code highlight);
	MenuChoice(const unsigned int &label, const string &optionName, const bool &leaver, bool locked);
	~MenuChoice();

	unsigned int getLabel() const;
	string getOptionName() const;
	Text::Code getHighlight() const;
	bool isLocked() const;
	bool leaves() const;

	void setLabel(const int &labelIn);
	void setOptionName(const string &nameIn);
};
