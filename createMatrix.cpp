#include "createMatrix.h"

void createRandomMatrix(int x_limit, int y_limit, char matrix[][100], int type_limit, int store[100])
{
	int temp = 0;
	for (int i = 0; i < x_limit + 2; i++)
	{
		for (int j = 0; j < y_limit + 2; j++)
		{
			matrix[i][j] = ' ';
		}
	}
	for (int i = 1; i < x_limit + 1; i++)
	{
		for (int j = 1; j < y_limit + 1; j++)
		{
			temp = rand() % (x_limit - 1 + 1) + 1;
			if (store[temp] < type_limit)
			{
				matrix[i][j] = static_cast<char>(temp + 64) ;
				store[temp]++;
			}
			else
				j--;
		}
	}
}

void printMatrix(int x_limit, int y_limit, char matrix[][100], int store[100])
{
	for (int i = 0; i < x_limit+2; i++)
	{
		cout << "--------------------------------------" << endl;
		for (int j = 0; j < y_limit+2; j++)
		{
			cout << matrix[i][j] << " | ";
		}
		cout << endl;
	}
	char txt;
	for (int i = 65; i <= 72; i++)
	{
		txt = static_cast<char>(i);
		cout << "Pokemon " << txt << ": " << store[i] << endl;
	}
}