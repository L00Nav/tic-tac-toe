#pragma once

#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class View
{
private:
	string menuItems[4];
	int menuSize;
public:
	View();
	~View();
	void drawMainMenu(int item);
	void drawMenuItem(string item, bool focus);
	void drawMenuItem(string item);
	void drawGrid(void);
	void clear(void);
};