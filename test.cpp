#include "menu.h"

int main()
{
	menu m;

	m.addChoice("Test");
	m.addChoice("of");
	m.addChoice("class");
	m.addChoice("menu");

	cout << m.display() << endl;
	return 0;
}
