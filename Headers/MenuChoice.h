#pragma once

#include <cstdlib>
#include <string>
#include <iostream>
#include "../conio/Headers/conio.h"

using namespace std;

class MenuChoice
{
private:
	unsigned int _label;
	string _optionName;
	bool _leaver;

public:
	MenuChoice(const unsigned int &label, const string &optionName, const bool &leaver);
	~MenuChoice();

	unsigned int getLabel() const;
	string getOptionName() const;
	bool leaves() const;

	void setLabel(const int &labelIn);
	void setOptionName(const string &nameIn);
};
