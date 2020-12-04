#include "Headers/menu.h"

int main()
{
	menu m;
	m.addChoice("test");
	m.addExit();
	while(!m.leaving())
		m.display();
	return 0;
}
