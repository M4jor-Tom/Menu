#include "../Headers/MenuChoice.h"

using namespace std;

MenuChoice::MenuChoice(unsigned int Label_, string optionName_, bool leaver_) : Label(Label_), optionName(optionName_), leaver(leaver_)
{

}

MenuChoice::~MenuChoice()
{

}

unsigned int MenuChoice::getLabel() const
{
	return Label;
}

string MenuChoice::getOptionName() const
{
	return optionName;
}

bool MenuChoice::leaves() const
{
	return leaver;
}

void MenuChoice::setLabel(int labelIn)
{
	Label = labelIn;
}
void MenuChoice::setOptionName(string nameIn)
{
	optionName = nameIn;
}
