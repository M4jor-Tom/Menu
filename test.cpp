#include "Headers/Menu.h"

int main()
{
	Menu m;
	m.addChoice("bold");
	m.addChoice("blink", Text::BLINK);
	m.addLocked("locked");
	m.addChoice("blue", Text::FG_BLUE);
	m.addExit();
	while(!m.leaving())
		m.display();
	return 0;
}
