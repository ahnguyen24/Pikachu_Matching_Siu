#include "Controller.h"
#include "textcolor.h"
#include "Menu.h"
#include <Windows.h>

void login() 
{
    system("cls");
    string name, ID;
    InputLoginScreen(name, ID);
    _getch();
}
void Guest()
{
    system("cls");
    
    _getch();
}
void startMenu()
{
    system("cls");
    Easy();
    Medium();
    _getch();
}
void Score()
{
    system("cls");
    cout << "Nothing!";
    _getch();
}

int cn = 1;
void menu() {
    system("cls");
    if (cn == 1)
    {
        TextColor(1);
        Login();
        TextColor(7);
        playAsGuest();
        Exit();
    }
    if (cn == 2)
    {
        TextColor(7);
        Login();
        TextColor(1);
        playAsGuest();
        TextColor(7);
        Exit();
    }
    if (cn == 3)
    {
        TextColor(7);
        Login();
        playAsGuest();
        TextColor(1);
        Exit();
    }
    cout << cn;
    int t = _getch();
    if (t == 13) {
        // nhan enter
        switch (cn) {
        case 1:
            login();
            break;
        case 2:
            Guest();
            break;
        case 3:
            exit(0);
            break;
        }
    }
    else if (t == 80) {
        cn++;
    }
    else if (t == 72) {
        cn--;
    }
    if (cn > 3) 
        cn = 1;
    else if (cn < 1)
        cn = 3;
}

void SelectMenu() {
    system("cls");
    Start();
    HighScore();
    Exit();
    cout << cn;
    int t = _getch();
    if (t == 13) {
        // nhan enter
        switch (cn) {
        case 1:
            startMenu();
            break;
        case 2:
            Score();
            break;
        case 3:
            exit(0);
            break;
        }
    }
    else if (t == 80) {
        cn++;
    }
    else if (t == 72) {
        cn--;
    }
    if (cn > 3)
        cn = 1;
    else if (cn < 1)
        cn = 3;
}