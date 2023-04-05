#pragma once
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void createRandomMatrix(int x_limit, int y_limit, char matrix[][100], int type_limit, int store[100]);
void printMatrix(int x_limit, int y_limit, char matrix[][100], int store[100]);