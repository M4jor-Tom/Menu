#pragma once

#include <cstdlib>
#include <string>
#include <iostream>
#include <conio.h>

using namespace std;

class menuChoice
{
private:
	unsigned int Label;
	std::string optionName;
	bool Visible;

public:
	menuChoice(unsigned int Label_ = 1, string optionName_ = "", bool Visible_ = 1);
	~menuChoice();

	unsigned int getLabel() const;
	bool getVisible() const;
	std::string getOptionName() const;

	void setLabel(int labelIn);
	void setVisible(bool visibleIn);
	void setOptionName(std::string nameIn);
};