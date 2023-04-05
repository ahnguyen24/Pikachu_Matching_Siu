#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

#include "game.h"
#include "createMatrix.h"
#include "event.h"
#include "checkDirection.h"
#include "textcolor.h"
#include "Menu.h"
#include "Controller.h"
using namespace std;

int main()
{
	while (1) 
	{
		menu();
		SelectMenu();
	}
}