#include "contact.h"
void menu()
{
	printf("*****************************\n");
	printf("****1、add        2、dele****\n");
	printf("****3、search   4、modify****\n");
	printf("****5、clear all  6、sort****\n");
	printf("****7、show       0、exit****\n");
}
int main()
{
	int input=0;
	 contact con;
	initicontact(&con);
	do
	{
		menu();
		printf("请输入你的选择\n");
		scanf("%d",&input);
		switch (input)
		{
		case add:
			addcontact(&con);
			break;
		case dele:
			delecontact(&con);
			break;
		case search:
			searchcontact(&con);
			break;
		case modify:
			modifycontact(&con);
			break;
		case show:
			showcontact(&con);
			break;
		case sort:
			sortcontact(&con);
			break;
		case clearall:
			clearallcontact(&con);
			break;
		case EXIT:
			printf("游戏退出\n");
			break;
		default:
			printf("请输入正确数字\n");
			break;
		}
	}while(input);
	return 0;
}
