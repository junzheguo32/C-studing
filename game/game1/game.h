#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3//row
#define COL 3//colume

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//���Ӯ�� - *
//����Ӯ�� - #
//ƽ�� - Q
//���� - C

char IsWin(char board[ROW][COL], int row, int col);

//������˾ͷ���1����������0
int IsFull(char board[ROW][COL], int row, int col);



