#include "../Headers/menuChoice.h"

using namespace std;

menuChoice::menuChoice(unsigned int Label_, string optionName_, bool leaver_) : Label(Label_), optionName(optionName_), leaver(leaver_)
{

}

menuChoice::~menuChoice()
{

}

unsigned int menuChoice::getLabel() const
{
	return Label;
}

string menuChoice::getOptionName() const
{
	return optionName;
}

bool menuChoice::leaves() const
{
	return leaver;
}

void menuChoice::setLabel(int labelIn)
{
	Label = labelIn;
}
void menuChoice::setOptionName(string nameIn)
{
	optionName = nameIn;
}
