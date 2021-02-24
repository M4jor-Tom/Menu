#include "../Headers/MenuChoice.h"

using namespace std;

MenuChoice::MenuChoice(const unsigned int &label, const string &optionName, const bool &leaver, Text::Code highlight):
	_label(label), _optionName(optionName), _leaver(leaver), _highlight(highlight), _locked(false)
{
	
}

MenuChoice::MenuChoice(const unsigned int &label, const string &optionName, const bool &leaver):
	_label(label), _optionName(optionName), _leaver(leaver), _highlight(Text::BOLD), _locked(false)
{

}

MenuChoice::MenuChoice(const unsigned int &label, const string &optionName, const bool &leaver, bool locked):
	_label(label), _optionName(optionName), _leaver(leaver), _highlight(Text::DEFAULT), _locked(locked)
{

}

MenuChoice::~MenuChoice()
{

}

unsigned int MenuChoice::getLabel() const
{
	return _label;
}

string MenuChoice::getOptionName() const
{
	return _optionName;
}

Text::Code MenuChoice::getHighlight() const
{
	return _highlight;
}

bool MenuChoice::isLocked() const
{
	return _locked;
}

bool MenuChoice::leaves() const
{
	return _leaver;
}

void MenuChoice::setLabel(const int &labelIn)
{
	_label = labelIn;
}
void MenuChoice::setOptionName(const string &nameIn)
{
	_optionName = nameIn;
}
