#pragma once

#include <cstdlib>
#include <string>
#include <iostream>
#include "../conio/Headers/conio.h"

using namespace std;

class menuChoice
{
private:
	unsigned int Label;
	string optionName;
	bool leaver;

public:
	menuChoice(unsigned int Label_, string optionName_, bool leaver_);
	~menuChoice();

	unsigned int getLabel() const;
	string getOptionName() const;
	bool leaves() const;

	void setLabel(int labelIn);
	void setOptionName(string nameIn);
};