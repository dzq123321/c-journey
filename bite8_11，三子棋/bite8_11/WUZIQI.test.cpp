#include"game.h"
void menu()
{
	printf("********��������Ϸ********\n");
	printf("********1 ��ʼ��Ϸ********\n");
	printf("********0 �˳���Ϸ********\n");
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
		printf("����Ӯ\n");
	if(ret=='*')
		printf("���Ӯ\n");
	if(ret=='p')
		printf("ƽ��\n");
	
}
void  test()
{
	int input=0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��->\n");
		scanf("%d",&input);
		switch (input)
		{
		 case 1:
		     game();
			 break;
		 case 0:
			 break;
		 default:
			 printf("������Ϸ�����\n");
			 break;
		}
	}while(input);
}
int main()
{
	test();
	return 0;
}