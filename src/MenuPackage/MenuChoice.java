package MenuPackage;

public class MenuChoice
{
	private int _label;
	private String _optionName;
	private boolean
		_leaver,
		_locked;
	
	public MenuChoice(int label, String optionName, boolean leaver)
	{
		_label = label;
		_optionName = optionName;
		_leaver = leaver;
		_locked = false;
	}

	public MenuChoice(int label, String optionName, boolean leaver, boolean locked)
	{
		_label = label;
		_optionName = optionName;
		_leaver = leaver;
		_locked = locked;
	}

	public int getLabel()
	{
		return _label;
	}

	public String getOptionName()
	{
		return _optionName;
	}
	
	public boolean isLocked()
	{
		return _locked;
	}
	
	public boolean leaves()
	{
		return _leaver;
	}
	
	public void setLabel(int labelIn)
	{
		_label = labelIn;
	}
	
	public void setOptionName(String nameIn)
	{
		_optionName = nameIn;
	}
}