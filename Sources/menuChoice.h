#pragma once

#include <string>
#include <iostream>
#include <conio.h>

class menuChoice
{
private:
	unsigned int Label;
	std::string optionName;
	bool Visible;

public:
	menuChoice(unsigned int Label_ = 1, std::string optionName_ = "", bool Visible_ = 1);
	~menuChoice();

	unsigned int getLabel() const;
	bool getVisible() const;
	std::string getOptionName() const;

	void setLabel(int labelIn);
	void setVisible(bool visibleIn);
	void setOptionName(std::string nameIn);
};