#include "../Headers/menuChoice.h"

using namespace std;

menuChoice::menuChoice(unsigned int Label_, string optionName_, bool Visible_) : Label(Label_), optionName(optionName_), Visible(Visible_)
{

}

menuChoice::~menuChoice()
{

}

unsigned int menuChoice::getLabel() const
{
	if(this != nullptr)
		return Label;
	else
		return NULL;
}

bool menuChoice::getVisible() const
{
	if (this != nullptr)
		return Visible;
	else
		return NULL;
}

std::string menuChoice::getOptionName() const
{
	if (this != nullptr)
		return optionName;
	else
		return NULL;
}

void menuChoice::setLabel(int labelIn)
{
	if(this != nullptr)
		Label = labelIn;
}

void menuChoice::setVisible(bool visibleIn)
{
	if (this != nullptr)
		Visible = visibleIn;
}

void menuChoice::setOptionName(std::string nameIn)
{
	if (this != nullptr)
		optionName = nameIn;
}
