#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3//row
#define COL 3//colume

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//玩家赢了 - *
//电脑赢了 - #
//平局 - Q
//继续 - C

char IsWin(char board[ROW][COL], int row, int col);

//如果满了就返回1，不满返回0
int IsFull(char board[ROW][COL], int row, int col);



