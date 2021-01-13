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
	MenuChoice(unsigned int Label_, string optionName_, bool leaver_);
	~MenuChoice();

	unsigned int getLabel() const;
	string getOptionName() const;
	bool leaves() const;

	void setLabel(int labelIn);
	void setOptionName(string nameIn);
};