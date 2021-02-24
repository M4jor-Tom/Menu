package MenuPackage;

import java.util.ArrayList;

public class Menu
{
	private ArrayList<MenuChoice> _choiceList;
	private int _selectedOption;
	
	public Menu()
	{
		 _selectedOption = 0;
	}
	
	public int display(String summary)
	{
		char key = 0;
		do
		{
			//Summary display
			System.out.println(summary);

			//Cursor display
			int scanIndex = 0;
			for(MenuChoice choice: _choiceList)
			{
				String selectedLeft = "", selectedRight = "";
				if(scanIndex == _selectedOption)
				{
					selectedLeft = ">";
					selectedRight = "<";
				}
				System.out.println(selectedLeft + choice.getOptionName() + selectedRight);
				scanIndex++;
			}

			//User selection
			//key = _getch();[GETCH]
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
				System.out.println("Unbinded key pressed"/* + " (" << key << ")"*/ + ".\nPress any key to retry.");
				//_getch();[GETCH]
			}
			system(clearCommand.c_str());
		}while(key != 13 && key != '\n');

		return _selectedOption;
	}
	
	public boolean leaving()
	{
		for (MenuChoice choice : _choiceList)
			if(choice.leaves() && choice.getLabel() == _selectedOption && !choice.isLocked())
				return true;
		return false;
	}
	
	public void selectIncr()
	{
		if(_selectedOption < _choiceList.size() - 1) _selectedOption++;
	}
	
	public void selectDecr()
	{
		if(_selectedOption > 0) _selectedOption--;
	}
	
	public void addChoice(String name)
	{
		_choiceList.add(new MenuChoice(_choiceList.size(), name, false));
	}
	
	public void addLocked(String name)
	{
		_choiceList.add(
			new MenuChoice(
				_choiceList.size(),
				"[locked] " + name,
				false
			)
		);
	}
	
	public void addExit(String name)
	{
		_choiceList.add(new MenuChoice(_choiceList.size(), name, true));
	}
	
	public boolean deleteChoice(int label)
	{
		int i = 0;
		while (i != _choiceList.size())
			if (_choiceList.get(i++).getLabel() == label)
			{
				_choiceList.remove(i);
				return true;
			}
		return false;
	}
	
	public void clear()
	{
	    _choiceList.clear();
	}
}