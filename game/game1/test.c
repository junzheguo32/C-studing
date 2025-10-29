#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()
{
	printf("*****************************\n");
	printf("****  1. start  0. exit  ****\n");
	printf("*****************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//板子，棋盘
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		
		PlayerMove(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int choice = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (choice);

	return 0;
}