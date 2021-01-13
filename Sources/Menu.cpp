#include "../Headers/Menu.h"
using namespace std;

Menu::Menu(): selectedOption(0)
{
	
}

Menu::~Menu()
{

}

unsigned int Menu::display()
{
	char key = 0;
	do
	{
		unsigned short int scanIndex = 0;
		for(MenuChoice choice: choiceList)
		{
			string selectedLeft = "	", selectedRight = "	";
			if(scanIndex == selectedOption)
			{
				selectedLeft = "<--	";
				selectedRight = "	-->";
			}
			cout << selectedLeft << choice.getOptionName() << selectedRight << endl;
			scanIndex++;
		}


		key = _getch();
		switch (key)
		{
		case 13:
			break;

		case 'w':
		case 'z':
		case 'u':
		case '+':
			selectDecr();
			break;

		case 's':
		case 'd':
		case '-':
			selectIncr();
			break;
		default:
			cout << "Unbinded key pressed." << endl;
			break;
		}
		system("cls");
	}while(key != 13);

	return selectedOption;
}

bool Menu::leaving() const
{
	for (MenuChoice choice : choiceList)
		if(choice.leaves() && choice.getLabel() == selectedOption)
			return true;
	return false;
}

void Menu::selectIncr()
{
	if(selectedOption < choiceList.size() - 1) selectedOption++;
}

void Menu::selectDecr()
{
	if(selectedOption > 0) selectedOption--;
}

void Menu::addChoice(string name)
{
	choiceList.push_back(MenuChoice(choiceList.size(), name, false));
}

void Menu::addExit(string name)
{
	choiceList.push_back(MenuChoice(choiceList.size(), name, true));
}

bool Menu::deleteChoice(unsigned int labelIn)
{
	typename list<MenuChoice>::iterator it = choiceList.begin();
	while (it != choiceList.end())
		if (it++->getLabel() == labelIn)
		{
			choiceList.erase(it);
			return true;
		}
	return false;
}
