#define ROW 3
#define COL 3
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void Initboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);
//* 玩家赢
//# 电脑赢
//c 继续
//q 平局

char iswin(char board[ROW][COL], int row, int col);