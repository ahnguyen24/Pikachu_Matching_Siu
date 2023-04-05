#include "game.h"

void playGame()
{
	system("cls");
	int x_limit = 8, y_limit = 8, type_limit = 8, store[100], x1, x2, y1, y2; //Khởi tạo giới hạn - toạ độ
	char matrix[100][100]; //Khởi tạo mảng

	createRandomMatrix(x_limit, y_limit, matrix, type_limit, store); //Tạo bảng game
	printMatrix(x_limit, y_limit, matrix, store); //In bảng game lần đầu
	while (check_win_condition(matrix, store) == 0) //Kiểm tra điều kiện thắng
	{
		accessCoordinate(x1, x2, y1, y2); //Đưa toạ độ p1 p2
		if (checkCondition(x1, x2, y1, y2, matrix) == 1) //Kiểm tra toạ độ có hợp lệ
		{
			if (accessing_Matrix(x1, x2, y1, y2, matrix, store) != -1) //Kiểm tra nước đi có hợp lệ
			{
				matrix[x1][y1] = ' ';
				matrix[x2][y2] = ' ';
				store[int(matrix[x1][y1])] -= 2;
				printMatrix(x_limit, y_limit, matrix, store); //In lại tiến trình chơi
			}
		}
	}
	cout << "You win!";
	_getch();
}