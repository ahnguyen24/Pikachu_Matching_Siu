#include "Menu.h"
void Login()
{
	cout << "        -----------------\n";
	cout << "        ||    LOGIN    ||\n";
	cout << "        -----------------\n";
	cout << endl;
}
void Exit()
{
	cout << "        -----------------\n";
	cout << "        ||    EXIT     ||\n";
	cout << "        -----------------\n";
	cout << endl;
}

void InputLoginScreen(string name, string ID)
{
	cout << "        ---------------------------------------------------\n";
	cout << "        ||   INPUT YOUR NAME AND ID:                     ||\n";
	cout << "        ---------------------------------------------------\n";
	cout << endl;
	cout << "        NAME: ";
	getline(cin, name);
	cout << endl;
	cout << "        ID: ";
	getline(cin, ID); 
	cout << endl;
}

void Start()
{
	cout << "        ----------------\n";
	cout << "        ||    START   ||\n";
	cout << "        ----------------\n";
	cout << endl;
}
void HighScore()
{
	cout << "        -----------------\n";
	cout << "        ||  HIGHSCORE  ||\n";
	cout << "        -----------------\n";
	cout << endl;
}
void playAsGuest()
{
	cout << "        -----------------\n";
	cout << "        ||PLAY AS GUEST||\n";
	cout << "        -----------------\n";
	cout << endl;
}
void Easy()
{
	cout << "        ----------------\n";
	cout << "        ||    EASY    ||\n";
	cout << "        ----------------\n";
	cout << endl;
}
void Medium()
{
	cout << "        ----------------\n";
	cout << "        ||   MEDIUM   ||\n";
	cout << "        ----------------\n";
	cout << endl;
}