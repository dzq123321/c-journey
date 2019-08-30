#include "contact.h"
void menu2()
{
	printf("*****************************\n");
	printf("****1、name     2、sex   ****\n");
	printf("****3、age      4、tele******\n");
	printf("****5、addre    0、nothing***\n");
}
void initicontact (contact* pcon)
{
	assert(pcon);
	pcon->sz=0;
	pcon->data=(pepleinfo*)calloc(3,sizeof(pepleinfo));
	if(pcon->data==NULL)
	{
		printf("%s",strerror(errno));
		return;
	}
	pcon->capacity=3;
	
	//pcon->sz=0;
	//memset(pcon->data,0,sizeof(pcon->data));
}
int findcontact(contact* pcon,char name[])
{
	assert(pcon);
	int i=0;
	for(i=0; i<pcon->sz; i++)
	{
		if(0==strcmp(name,pcon->data[i].name))
			return i;
	}
	return -1;
}
void checkcontact(contact* pcon)
{
	assert(pcon);
	if(pcon->capacity==pcon->sz)
	{
		pepleinfo* ptr=(pepleinfo*)realloc(pcon->data,(pcon->capacity+2)*sizeof(pepleinfo));
		if(ptr!=NULL)
		{
			pcon->data=ptr;
			pcon->capacity+=2;
			printf("增容成功\n");
		}
	}

}
void showcontact (contact* pcon)
{
	assert(pcon);
	int i=0;
	if(pcon->sz==0)
	{
		printf("通讯录已空，请重新输入\n");
	}
	printf("%15s %5s %5s %15s %15s\n","name","sex","age","tele","addre");
	for(i=0; i<pcon->sz; i++)
	{
		printf("%15s %5s %5d %15s %15s\n",pcon->data[i].name,pcon->data[i].sex,
			pcon->data[i].age,pcon->data[i].num,pcon->data[i].addre);
	}
}
void addcontact(contact* pcon)
{
	assert(pcon);
	int i=0;
	checkcontact(pcon);
	if(pcon->sz==MAX_NUM)
	{
		printf("通讯录已满\n");
	}
	printf("请输入名字\n");
	scanf("%s",pcon->data[pcon->sz].name);
	printf("请输入性别\n");
	scanf("%s",pcon->data[pcon->sz].sex);
	printf("请输入年龄\n");
	scanf("%d",&pcon->data[pcon->sz].age);
	printf("请输入电话\n");
	scanf("%s",pcon->data[pcon->sz].num);
	printf("请输入地址\n");
	scanf("%s",pcon->data[pcon->sz].addre);
	pcon->sz++;
	printf("添加成功\n");
}
void delecontact(contact* pcon)
{
	assert(pcon);
	int pos=0,i=0;
	char name[20];
	printf("请输入要删除的名字\n");
	scanf("%s",name);
	pos=findcontact(pcon,name);
	if(pos==-1)
	{
		printf("删除失败\n");
		return;
	}
	for(i=pos; i<pcon->sz; i++)
	{
		pcon->data[i]=pcon->data[i+1];
	}
	pcon->sz--;
	printf("删除成功\n");
	return;
}
void searchcontact(contact* pcon)
{
	int pos=0;
	char name[20];
	printf("请输入要查找的名字\n");
	scanf("%s",name);
	pos=findcontact(pcon,name);
	if(pos==-1)
	{
		printf("不存在\n");
		return;
	}
	printf("%15s %5s %5d %15s %15s\n",pcon->data[pos].name,pcon->data[pos].sex,
		pcon->data[pos].age,pcon->data[pos].num,pcon->data[pos].addre);
}
void modifycontact(contact* pcon)
{
	int pos=0;
	char name[20];
	char buff_str[20]={0};
	int buff_num=0;
	printf("请输入要修改人的名字\n");
	scanf("%s",name);
	pos=findcontact(pcon,name);
	if(pos==-1)
	{
		printf("不存在\n");
		return;
	}
	int input=1;
	do
	{
		menu2();
		printf("请输入要修改的选择\n");
		scanf("%d",&input);
		switch(input)
		{
			case 0:
				printf("退出修改\n");
				break;
			case 1:
				printf("请输入你要修改的名字\n");
				scanf("%s",buff_str);
				strcpy(pcon->data[pos].name,buff_str);
				break;
			case 2:
				printf("请输入你要修改的性别\n");
				scanf("%s",buff_str);
				strcpy(pcon->data[pos].sex,buff_str);
				break;
			case 3:
				printf("请输入你要修改的年龄\n");
				scanf("%d",&buff_num);
				//scanf("%d",&buff_num);
				(pcon->data[pos].age)=buff_num;
				break;
			case 4:
				printf("请输入你要修改的电话\n");
				scanf("%s",buff_str);
				strcpy(pcon->data[pos].num,buff_str);
				break;
			case 5:
				printf("请输入你要修改的地址\n");
				scanf("%s",buff_str);
				strcpy(pcon->data[pos].addre,buff_str);
				break;
			default:
				printf("请重新输入\n");
				break;
		}
	}while(input);
	printf("修改成功\n");
	printf("%15s %5s %5d %15s %15s\n",pcon->data[pos].name,pcon->data[pos].sex,
		pcon->data[pos].age,pcon->data[pos].num,pcon->data[pos].addre);
}
void clearallcontact(contact* pcon)
{
	assert(pcon);
	if(pcon->sz==0)
	{
		printf("通讯录没有信息\n");
		return ;
	}
	pcon->sz=0;
	memset(pcon->data,0,sizeof(pcon->data));
	free(pcon->data);
	pcon->data=NULL;
	pcon->capacity=0;
	pcon->sz=0;
	printf("删除成功\n");
}
void sortcontact(contact* pcon)
{
	assert(pcon);
	int i=0;
	int j=0;
	pepleinfo t;
	for(i=0; i<pcon->sz-1; i++)
	{
		for(j=0; j<pcon->sz-i-1; j++)
		{
			if(strcmp(pcon->data[j].name,pcon->data[j+1].name)>0)
			{
				t=pcon->data[j];
				pcon->data[j]=pcon->data[j+1];
				pcon->data[j+1]=t;
			}
		}
	}
	printf("修改成功\n");
	showcontact (pcon);
}

