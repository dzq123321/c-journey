#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define ROW 5
#define COL 5
void  InitBoard(char board[ROW][COL],int row,int col);
void  DisplayBoard(char board[ROW][COL],int row,int col);
void  playermove(char board[ROW][COL],int row,int col);
void Computermove(char board[ROW][COL],int row,int col);
char Iswin(char board[ROW][COL],int row,int col);

