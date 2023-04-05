#include "checkDirection.h"

bool check_I_directionX(int y1, int y2, int x, char matrix[][100])
{
	int min = y1;
	int max = y2; 
	if (y2 < min)
	{
		min = y2;
		max = y1;
	}
	for (int y = min+1; y < max; y++)
	{
		if (matrix[x][y] != ' ')
		{
			return false;
		}
	}
	return true;
}

bool check_I_directionY(int x1, int x2, int y, char matrix[][100])
{
	int min = x1;
	int max = x2;
	if (x2 < min)
	{
		min = x2;
		max = x1;
	}
	for (int x = min+1; x < max; x++)
	{
		if (matrix[x][y] != ' ')
		{
			return false;
		}
	}
	return true;
}

int check_L_Z_directionX(int x1, int x2, int y1, int y2, char matrix[][100])
{
	if (abs(x1 - x2) == 1)
	{
		if (abs(y1 - y2) == 1)
		{
			if (matrix[x1 + 1][y1] == ' ' || matrix[x1 - 1][y1] == ' ' || matrix[x1][y1 + 1] == ' ' || matrix[x1][y1 - 1] == ' ')
			{
				return 1;
			}
			else return -1;
		}
		else
		{
			if (check_I_directionX(y1, y2, x1, matrix) == 1 || check_I_directionX(y1, y2, x2, matrix) == 1)
			{
				return 1;
			}
			else if (check_I_directionX(y2, y1, x2, matrix) == 1 || check_I_directionX(y2, y1, x1, matrix) == 1)
			{
				return 1;
			}
			else return -1;
		}
	}
	else
	{
		if (y1 > y2)
		{
			for (int y = y2 + 1; y < y1; y++)
			{
				if (check_I_directionX(y2, y, x2, matrix) == 1 && check_I_directionY(x2, x1, y, matrix) == 1 && check_I_directionX(y, y1, x1, matrix) == 1)
				{
					return y;
				}
			}
		}
		else
		{
			{
				for (int y = y1 + 1; y < y2; y++)
				{
					if (check_I_directionX(y1, y, x1, matrix) == 1 && check_I_directionY(x1, x2, y, matrix) == 1 && check_I_directionX(y, y2, x2, matrix) == 1)
					{
						return y;
					}
				}
			}
		}
	}
	return -1;
}

int check_L_Z_directionY(int x1, int x2, int y1, int y2, char matrix[][100])
{
	if (abs(y1 - y2) == 1)
	{
		if (abs(x1 - x2) == 1)
		{
			if (matrix[x1 + 1][y1] == ' ' || matrix[x1 - 1][y1] == ' ' || matrix[x1][y1 + 1] == ' ' || matrix[x1][y1 - 1] == ' ')
			{
				return 1;
			}
			else return -1;
		}
		else
		{
			if (check_I_directionY(x1, x2, y1, matrix) == 1 || check_I_directionX(x1, x2, y2, matrix) == 1)
			{
				return 1;
			}
			else if (check_I_directionY(x2, x1, y2, matrix) == 1 || check_I_directionX(x2, x1, y1, matrix) == 1)
			{
				return 1;
			}
			else return -1;
		}
	}
	else
	{
		if (x1 > x2)
		{
			for (int x = x2 + 1; x < x1; x++)
			{
				if (check_I_directionY(x2, x, y2, matrix) == 1 && check_I_directionX(y2, y1, x, matrix) == 1 && check_I_directionY(x, x1, y1, matrix) == 1)
				{
					return x;
				}
			}
		}
		else
		{
			for (int x = x1 + 1; x < x2; x++)
			{
				if (check_I_directionY(x1, x, y1, matrix) == 1 && check_I_directionX(y1, y2, x, matrix) == 1 && check_I_directionY(x, x2, y2, matrix) == 1)
				{
					return x;
				}
			}
		}
	}
	return -1;
}

int check_U_directionX(int x1, int x2, int y1, int y2, char matrix[][100])
{
	if (y1 == y2)
	{
		for (int p = -1; p < y1; p++)
		{
			if (check_I_directionX(p, y1, x1, matrix) == 1 && check_I_directionX(p, y1, x2, matrix) == 1 && check_I_directionY(x1, x2, p, matrix) == 1)
			{
				return p;
			}
		}
		for (int p = y2; p < 10; p++)
		{
			if (check_I_directionX(y1, p, x1, matrix) == 1 && check_I_directionX(p, y2, x2, matrix) == 1 && check_I_directionY(x1, x2, p, matrix) == 1)
			{
				return p;
			}
		}
		return -1;
	}
	else if (y1 > y2)
	{
		for (int p = -1; p < y1; p++)
		{
			if (check_I_directionX(p, y1, x1, matrix) == 1 && check_I_directionX(p, y2, x2, matrix) == 1 && check_I_directionY(x1, x2, p, matrix) == 1)
			{
				return p;
			}
		}
		for (int p = y2; p < 10; p++)
		{
			if (check_I_directionX(y1, p, x1, matrix) == 1 && check_I_directionX(p, y2, x2, matrix) == 1 && check_I_directionY(x1, x2, p, matrix) == 1)
			{
				return p;
			}
		}
		return -1;
	}
	else 
	{
		for (int p = -1; p < y2; p++)
		{
			if (check_I_directionX(p, y1, x1, matrix) == 1 && check_I_directionX(p, y2, x2, matrix) == 1 && check_I_directionY(x1, x2, p, matrix) == 1)
			{
				return p;
			}
		}
		for (int p = y1; p < 10; p++)
			if (check_I_directionX(y1, p, x1, matrix) == 1 && check_I_directionX(p, y2, x2, matrix) == 1 && check_I_directionY(x1, x2, p, matrix) == 1)
			{
				return p;
			}
		return -1;
	}
}

int check_U_directionY(int x1, int x2, int y1, int y2, char matrix[][100])
{
	if (x1 == x2)
	{
		for (int p = -1; p < x1; p++)
		{
			if (check_I_directionY(p, x1, y1, matrix) == 1 && check_I_directionY(p, x2, y2, matrix) == 1 && check_I_directionX(y1, y2, p, matrix) == 1)
			{
				return p;
			}
		}
		for (int p = x2; p < 10; p++)
		{
			if (check_I_directionY(x1, p, y1, matrix) == 1 && check_I_directionY(p, x2, y2, matrix) == 1 && check_I_directionX(y1, y2, p, matrix) == 1)
			{
				return p;
			}
		}
		return -1;
	}
	else if (x1 > x2)
	{
		for (int p = -1; p < x1; p++)
		{
			if (check_I_directionY(p, x1, y1, matrix) == 1 && check_I_directionY(p, x2, y2, matrix) == 1 && check_I_directionX(y1, y2, p, matrix) == 1)
			{
				return p;
			}
		}
		for (int p = x2; p < 10; p++)
		{
			if (check_I_directionY(x1, p, y1, matrix) == 1 && check_I_directionY(p, x2, y2, matrix) == 1 && check_I_directionX(y1, y2, p, matrix) == 1)
			{
				return p;
			}
		}
		return -1;
	}
	else
	{
		for (int p = -1; p < x2; p++)
		{
			if (check_I_directionY(p, x1, y1, matrix) == 1 && check_I_directionY(p, x2, y2, matrix) == 1 && check_I_directionX(y1, y2, p, matrix) == 1)
			{
				return p;
			}
		}
		for (int p = x1; p < 10; p++)
		{
			if (check_I_directionY(x1, p, y1, matrix) == 1 && check_I_directionY(p, x2, y2, matrix) == 1 && check_I_directionX(y1, y2, p, matrix) == 1)
			{
				return p;
			}
		}
		return -1;
	}
}
bool accessing_Matrix(int x1, int x2, int y1, int y2, char matrix[][100], int store[100])
{
	if (x1 == x2)
	{
		if (check_I_directionX(y1, y2, x1, matrix) == 1)
		{
			return true;
		}
		else if (check_U_directionY(x1, x2, y1, y2, matrix) != -1)
		{
			return true;
		}
		else return false;
	}
	else if (y1 == y2)
	{
		if (check_I_directionY(x1, x2, y1, matrix) == 1)
		{
			return true;
		}
		else if (check_U_directionX(x1, x2, y1, y2, matrix) != -1)
		{
			return true;
		}
		else return false;
	}
	else if (check_L_Z_directionX(x1, x2, y1, y2, matrix) != -1)
	{
		return true;
	}
	else if (check_L_Z_directionY(x1, x2, y1, y2, matrix) != -1)
	{
		return true;
	}
	else if (check_U_directionX(x1, x2, y1, y2, matrix) != -1)
	{
		return true;
	}
	else if (check_U_directionY(x1, x2, y1, y2, matrix) != -1)
	{
		return true;
	}
	else return false;
}