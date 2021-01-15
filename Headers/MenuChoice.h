#pragma once

#include <cstdlib>
#include <string>
#include <iostream>
#include "../conio/Headers/conio.h"

using namespace std;

class MenuChoice
{
private:
	unsigned int Label;
	string optionName;
	bool leaver;

public:
	MenuChoice(const unsigned int &Label_, const string &optionName_, const bool &leaver_);
	~MenuChoice();

	unsigned int getLabel() const;
	string getOptionName() const;
	bool leaves() const;

	void setLabel(const int &labelIn);
	void setOptionName(const string &nameIn);
};
