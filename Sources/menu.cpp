#include "menu.h"
using namespace std;

menu::menu() : choiceList(), selectedOption(1)
{
	
}

unsigned int menu::getSelected() const
{
	return selectedOption;
}

unsigned int menu::getLastOption() const
{
	unsigned int i = 0;
	while (choiceList[i] != nullptr && i < optionsPerMenu)
	{
		i++;
	}
	return i;
}

unsigned int menu::display()
{
	char key = 0;
	do
	{
		for (unsigned int i = 0; i < optionsPerMenu; i++)
		{
			if (choiceList[i] != nullptr && i < optionsPerMenu)
			{
				string selectedLeft = "	", selectedRight = "	";
				if (selectedOption == i + 1)
				{
					selectedLeft = "<--	";
					selectedRight = "	-->";
				}
				if (choiceList[i]->getVisible())
					cout << selectedLeft << choiceList[i]->getOptionName() << selectedRight << endl;
			}
		}


		key = _getch();
		switch (key)
		{
		case '+':
			selectIncr();
			break;

		case '-':
			selectDecr();
			break;
		default:
			cout << "Unbinded key pressed." << endl;
			break;
		}
		system("cls");
	}while(key != 13);
	return selectedOption;
}

void menu::selectIncr()
{
	if(selectedOption < getLastOption()) selectedOption++;
}

void menu::selectDecr()
{
	if(selectedOption > 1) selectedOption--;
}

void menu::addChoice(string name)
{
	unsigned int lastChoice = getLastOption();
	if (lastChoice < optionsPerMenu)
	{
		choiceList[lastChoice] = new menuChoice(lastChoice, name);
	}
}

void menu::hideChoice(menuChoice* menuChoiceIn)
{
	menuChoiceIn -> setVisible(0);
}

void menu::showChoice(menuChoice* menuChoiceIn)
{
	menuChoiceIn -> setVisible(1);
}

void menu::deleteChoice(unsigned int labelIn)
{
	choiceList[labelIn] -> ~menuChoice();
	for(int i = labelIn + 1; i < optionsPerMenu; i++)
	{
		choiceList[i] -> setLabel(choiceList[i] -> getLabel() - 1);
	}
}