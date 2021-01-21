#include "../Headers/Menu.h"

#if __has_include(<unistd.h>)
const char clearCommand[] = "clear";
#else
const char clearCommand[] = "cls";
#endif

using namespace std;

Menu::Menu(): selectedOption(0)
{
	
}

Menu::~Menu()
{

}

unsigned int Menu::display(const stringstream &summary)
{
	return display(summary.str());
}

unsigned int Menu::display(const string &summary)
{
	char key = 0;
	do
	{
		//Summary display
		cout << summary << endl << endl;

		//Cursor display
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

		//User selection
		key = _getch();
		switch (key)
		{
		case '\n':
		case 13:
			break;

		case 'w':
		case 'z':
		case 'u':
		case '-':
			selectDecr();
			break;

		case 's':
		case 'd':
		case '+':
			selectIncr();
			break;
		default:
			cout << "Unbinded key pressed"/* << " (" << key << ")"*/ << "." << endl << "Press any key to retry." << endl;
			_getch();
		}
		system(clearCommand);
	}while(key != 13 && key != '\n');

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

void Menu::addChoice(const string &name)
{
	choiceList.push_back(MenuChoice(choiceList.size(), name, false));
}

void Menu::addExit(const string &name)
{
	choiceList.push_back(MenuChoice(choiceList.size(), name, true));
}

bool Menu::deleteChoice(const unsigned int &labelIn)
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
