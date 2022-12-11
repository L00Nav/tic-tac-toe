#include "View.h";

View::View()
{
	menuSize = 4;
	menuItems[0] = "Single Player";
	menuItems[1] = "Multi Player";
	menuItems[2] = "Options";
	menuItems[3] = "Quit";
}

View::~View()
{

}

void View::drawMainMenu(int item)
{
	for (int i = 0; i < menuSize; i++)
	{
		drawMenuItem(View::menuItems[i], (item == i));
	}
}

void View::drawMenuItem(string item, bool focus)
{
	if (focus)
		cout << " > ";
	else
		cout << "  ";
	cout << item << endl;
}

void View::drawMenuItem(string item)
{
	cout << "  ";
	cout << item << endl;
}

void View::drawGrid(void)
{
	cout << endl << "  ";
	for (int i = 0; i < 121; i++)
	{
		if (i > 32 && i < 44) // first horizontal line
			cout << " H";
		else if (i > 76 && i < 88) // second horizontal line
			cout << " H";
		else if (!(((i % 11)+1) % 4)) // vertical lines. The if math is basically "every 4 symbols in THIS LINE, do the thing"
			cout << " H";
		// it might've been smarter to use 2 loops or something at this point...
		else 
			cout << "  ";

		if (!((i+1) % 11) && i > 2) // add new line
			cout << endl << "  ";
	}
}

void View::clear(void)
{
	system("cls");
}