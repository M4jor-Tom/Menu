#include "../Headers/menu.h"
using namespace std;

menu::menu(): selectedOption(0)
{
	
}

menu::~menu()
{

}

unsigned int menu::display()
{
	char key = 0;
	unsigned short int caughtIndex = 0;
	do
	{
		unsigned short int scanIndex = 0;
		for(menuChoice choice: choiceList)
		{
			string selectedLeft = "	", selectedRight = "	";
			if(scanIndex == selectedOption)
			{
				caughtIndex = scanIndex;
				selectedLeft = "<--	";
				selectedRight = "	-->";
			}
			if (choice.getVisible())
					cout << selectedLeft << choice.getOptionName() << selectedRight << endl;
			scanIndex++;
		}


		key = _getch();
		switch (key)
		{
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

	return caughtIndex;
}

void menu::selectIncr()
{
	if(selectedOption < choiceList.size() - 1) selectedOption++;
}

void menu::selectDecr()
{
	if(selectedOption > 0) selectedOption--;
}

void menu::addChoice(string name)
{
	choiceList.push_back(menuChoice(choiceList.size(), name));
}

void menu::hideChoice(menuChoice* menuChoiceIn)
{
	menuChoiceIn -> setVisible(0);
}

void menu::showChoice(menuChoice* menuChoiceIn)
{
	menuChoiceIn -> setVisible(1);
}

bool menu::deleteChoice(unsigned int labelIn)
{
	typename list<menuChoice>::iterator it = choiceList.begin();
	while (it != choiceList.end())
		if (it++->getLabel() == labelIn)
		{
			choiceList.erase(it);
			return true;
		}
	return false;
}