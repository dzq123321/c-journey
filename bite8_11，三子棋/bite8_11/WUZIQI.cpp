#include"game.h"
void InitBoard(char board[ROW][COL],int row,int col)
{
	memset(board,' ',row*col);
}
void  DisplayBoard(char board[ROW][COL],int row,int col)
{
	int i=0,j=0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf(" %c ",board[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");
		if(i<row-1)
		{
			for(j=0; j<col; j++)
			{
				printf("---");
				if(j<col-1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void Computermove(char board[ROW][COL],int row,int col)
{
	int i=0,j=0;
	printf("电脑输入坐标\n");
	while(1)
	{
		i=rand()%ROW;
		j=rand()%COL;
		if(board[i][j]==' ')     //电脑不会下错
		{
			board[i][j]='#';
			break;
		}
	}

}
void playermove(char board[ROW][COL],int row,int col)
{
	int i=0,j=0;
	while(1)
	{
		printf("用户走\n");
		scanf("%d%d",&i,&j);
		i--;
		j--;
		if(i>=0&&i<ROW&&j>=0&&j<COL)
		{
			if(board[i][j]==' ')
			{
				board[i][j]='*';
				break;
			}
			else
				printf("坐标被占用\n");
		}
		else
		{
			printf("请输入正确坐标\n");
		}
		getchar();
	}
}
int is_full(char board[ROW][COL],int row,int col)
{
	int i=0,j=0;
	for(i=0; i<ROW; i++)
	{
		for(j=0; j<COL; j++)
		{
			if(board[i][j]==' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char Iswin(char board[ROW][COL],int row,int col)
{
	int i=0,j=0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(board[i][j]==board[i][j+1]&&board[i][j+2]==board[i][j+1]&&board[i][j]!=' ')
			{	
				return board[i][j];
			}
		}	
	}
	for(j=0; j<COL; j++)
	{
		for(i=0; i<row; i++)
		{
			if(board[i][j]==board[i+1][j]&&board[i+2][j]==board[i+1][j]&&board[i][j]!=' ')
			{
				return board[i][j];
			}
		}
	}
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(board[i][j]==board[i+1][j+1]&&board[i][j]==board[i-1][j-1]&&board[i][j]!=' ')  //判断右斜的是否成立
			{	
				return board[i][j];
			}
			else
				if(board[i][j]==board[i-1][j+1]&&board[i][j]==board[i+1][j-1]&&board[i][j]!=' ')//判断左斜的是否成立
			{	
				return board[i][j];
			}
		}	
	}
	if(is_full( board, row, col)==1)
		return 'p';
	else
		return 'C';
}


