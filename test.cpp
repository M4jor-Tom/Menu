#include "Headers/Menu.h"

int main()
{
	Menu m;
	m.addChoice("test");
	m.addExit();
	while(!m.leaving())
		m.display();
	return 0;
}
