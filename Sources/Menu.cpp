#include "../Headers/Menu.h"
#include "../unicommand/Headers/unicommand.h"
#include "../TextModyst/Headers/Modyst.h"

using namespace std;

Menu::Menu(): _selectedOption(0)
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
		for(MenuChoice choice: _choiceList)
		{
			string selectedLeft = Text::clearMods(), selectedRight = Text::clearMods();
			if(scanIndex == _selectedOption)
			{
				selectedLeft = Text::setMod(choice.getHighlight());//"<--	";
				//selectedRight = Text::clearMod(Text::BOLD);//"	-->";
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

		case 65:
		case 'w':
		case 'z':
		case 'u':
		case '-':
			selectDecr();
			break;

		case 66:
		case 's':
		case 'd':
		case '+':
			selectIncr();
			break;
		default:
			cout << "Unbinded key pressed"/* << " (" << key << ")"*/ << "." << endl << "Press any key to retry." << endl;
			_getch();
		}
		system(clearCommand.c_str());
	}while(key != 13 && key != '\n');

	return _selectedOption;
}

bool Menu::leaving() const
{
	for (MenuChoice choice : _choiceList)
		if(choice.leaves() && choice.getLabel() == _selectedOption && !choice.isLocked())
			return true;
	return false;
}

void Menu::selectIncr()
{
	if(_selectedOption < _choiceList.size() - 1) _selectedOption++;
}

void Menu::selectDecr()
{
	if(_selectedOption > 0) _selectedOption--;
}


void Menu::addChoice(const string &name, Text::Code highlight)
{
	_choiceList.push_back(MenuChoice(_choiceList.size(), name, false, highlight));
}

void Menu::addChoice(const string &name)
{
	_choiceList.push_back(MenuChoice(_choiceList.size(), name, false));
}

void Menu::addLocked(const string &name)
{
	_choiceList.push_back(
		MenuChoice(
			_choiceList.size(),
			Text::textEffect(
				Text::DIM,
				Text::textEffect(
					Text::SLASH,
					name
				)
			),
			false,
			true
		)
	);
}

void Menu::addExit(const string &name, Text::Code highlight)
{
	_choiceList.push_back(MenuChoice(_choiceList.size(), name, true, highlight));
}

bool Menu::deleteChoice(const unsigned int &labelIn)
{
	typename list<MenuChoice>::iterator it = _choiceList.begin();
	while (it != _choiceList.end())
		if (it++->getLabel() == labelIn)
		{
			_choiceList.erase(it);
			return true;
		}
	return false;
}

void Menu::clear()
{
    _choiceList.clear();
}
