#include "event.h"
#include "checkDirection.h"

void accessCoordinate(int &x1, int &x2, int &y1, int &y2)
{
	cout << "obj 1 (x1, y1): ";
	cin >> x1 >> y1;
	cout << "obj 2 (x2, y2): ";
	cin >> x2 >> y2;
	if ((x1 == 0 && y1 == 0) || (x2 == 0 && y2 == 0))
	{
		exit(0);
	}
}

bool checkCondition(int x1, int x2, int y1, int y2, char matrix[][100])
{
	if (matrix[x1][y1] == matrix[x2][y2])
		return true;
	else
		return false;
}

bool check_win_condition(char matrix[][100], int store[100])
{
	for (int i = 65; i <= 72; i++)
	{
		if (store[i] != 0)
		{
			for (int j = 1; j <= 8; j++)
			{
				for (int k = 1; k <= 8; k++)
				{
					for (int l = 1; l <= 8; l++)
					{
						for (int m = 1; m <= 8; m++)
						{
							if (checkCondition(j, k, l, m, matrix) == 1 && accessing_Matrix(j, k, l, m, matrix, store) == 0)
							{
								return false;
							}
						}
					}
					
				}
			}
			return false;
		}
	}
	return true;
	
}