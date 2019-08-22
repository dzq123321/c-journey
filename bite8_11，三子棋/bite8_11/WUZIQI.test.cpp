#include"game.h"
void menu()
{
	printf("********三子棋游戏********\n");
	printf("********1 开始游戏********\n");
	printf("********0 退出游戏********\n");
	printf("**************************\n");
}
void game()
{
	char board[ROW][COL]={0};
	char ret=0;
	InitBoard(board,ROW,COL);
	DisplayBoard(board,ROW,COL);
	while(1)
	{
		playermove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		ret=Iswin(board,ROW,COL);
		if(ret !='C')
			break;
		Computermove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		ret=Iswin(board,ROW,COL);
		if(ret !='C')
		break;
	}
	if(ret=='#')
		printf("电脑赢\n");
	if(ret=='*')
		printf("玩家赢\n");
	if(ret=='p')
		printf("平局\n");
	
}
void  test()
{
	int input=0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择->\n");
		scanf("%d",&input);
		switch (input)
		{
		 case 1:
		     game();
			 break;
		 case 0:
			 break;
		 default:
			 printf("请输入合法数字\n");
			 break;
		}
	}while(input);
}
int main()
{
	test();
	return 0;
}