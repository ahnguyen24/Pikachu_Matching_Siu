#pragma once
#include <iostream>

using namespace std;

bool check_I_directionX(int y1, int y2, int x, char matrix[][100]);
bool check_I_directionY(int x1, int x2, int y, char matrix[][100]);
int check_L_Z_directionX(int x1, int x2, int y1, int y2, char matrix[][100]);
int check_L_Z_directionY(int x1, int x2, int y1, int y2, char matrix[][100]);
int check_U_directionX(int x1, int x2, int y1, int y2, char matrix[][100]);
int check_U_directionY(int x1, int x2, int y1, int y2, char matrix[][100]);
bool accessing_Matrix(int x1, int x2, int y1, int y2, char matrix[][100], int store[100]);