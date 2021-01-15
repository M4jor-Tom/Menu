#include "../Headers/MenuChoice.h"

using namespace std;

MenuChoice::MenuChoice(const unsigned int &Label_, const string &optionName_, const bool &leaver_):
	Label(Label_), optionName(optionName_), leaver(leaver_)
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

void MenuChoice::setLabel(const int &labelIn)
{
	Label = labelIn;
}
void MenuChoice::setOptionName(const string &nameIn)
{
	optionName = nameIn;
}
