#pragma once
#include <iostream>

using namespace std;

void accessCoordinate(int &x1, int &x2, int &y1, int &y2);
bool checkCondition(int x1, int x2, int y1, int y2, char matrix[][100]);
bool check_win_condition(char matrix[][100], int store[100]);