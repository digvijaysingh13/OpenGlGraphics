
#include "Display.h"
int main()
{
	Display display(800, 600, "this is sdl");
	while (!display.IsClosed())
	{
		display.Clear(0, 0.1f, 0.3f, 0.1f);
		display.Update();
	}
	return 0;
}
