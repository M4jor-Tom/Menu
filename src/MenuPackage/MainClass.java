package MenuPackage;

public class MainClass
{
	public static void main(String[] args)
	{
		Menu m = new Menu();
		m.addChoice("This");
		m.addChoice("is");
		m.addLocked("a (locked)");
		m.addChoice("test");
		m.addExit();
		while(!m.leaving())
			m.display("menu");
	}	
}
