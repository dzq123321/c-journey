 #include<stdio.h>
#include<string.h>
#include<malloc.h>
/*
结构体 -是一种数组类型，更具体是构造类型，也叫构造体，数组也是构造数组类型
struct 结构体名
{
成员        类型本身不占空间
};

struct 
{
成员
}a;
*/
#if 0
typedef struct student
{
	int num;
	char name[20];
	char sex;
	int age;
}STU;
#endif
#if 0
struct student
{
	int num;  //4
	char name[20]; //20
	char sex; //4
	int age; //4
};
typedef struct student STU;
//结构体变量不能直接进行输入输出
void main()
{
//	STU a = {1,"lisi",'m',4};
	STU a;
//	a = {1,lisi,'m',4}; //error  只有初始化才能赋值
6	a.num = 6;
	strcpy(a.name,"lisi"); //name是数组，不能直接赋值，有strcpy  也可以gets
	a.sex = 'm';
	a.age = 4;         

	STU b;
	b = a;             //相同变量可直接赋值
	printf("%d,%s,%c,%d\n",a.num,a.name,a.sex,a.age);
}
#endif

//typedef int A;
/*
C中，结构体不能为空，也不能有操作
内存字节对齐
*/
#if 0
typedef struct data
{
	int a; //8
	double c;//8
	char b[5]; //8
}Data;

void main()
{
//	A a = 6;
	struct student stu;
	STU stu1;
	printf("%d\n",sizeof(Data));
}
#endif

#if 1
typedef struct data
{
	int a;
	char b;        //4 4 4  char char int 则是2 2 4 一共8字节
	int c;
}Data;

void main()     //结构体数组
{
	Data aa[5] = {{1,1,1},{2,2,2},{3,3,3},{4,4,4},{5,5,5}};
	int i;
	Data *p = aa;
	for(i = 0;i<5;i++)
	{
		aa[i].a = i;
		aa[i].b = i;
		aa[i].c = i;
	}
	for(p = aa;p<aa+5;p++)
	{
		printf("%d %d %d\n",(*p).a,p->b,p->c);
	}
}
#endif
#if 0
/*
单链表：带头结点，不带头结点   线性的
*/

typedef struct node
{
	int num;
	struct node *next;  //可以包括指针类型，都是4个字节
}Node;

Node *createTail()           //带头节点
{
	Node *head = NULL;
	Node *pnew = NULL,*ptail = NULL;
	pnew = (Node*)malloc(sizeof(Node));
	pnew->next = NULL;
	while(1 == scanf("%d",&pnew->num))
	{
		if(head == NULL)
			head = pnew;
		else
			ptail->next = pnew;
		ptail = pnew;
		pnew = (Node*)malloc(sizeof(Node));
		pnew->next = NULL;
	}
	free(pnew);
	pnew = NULL;
	return head;
}
void print(Node *head)
{
	Node *p = head;
	while(p != NULL)
	{
		printf("%d ",p->num);
		p = p->next;
	}
	printf("\n");
}
Node *createHead()
{
	Node *head = NULL;
	Node *pnew = NULL;
	pnew = (Node*)malloc(sizeof(Node));
	while(1 == scanf("%d",&pnew->num))
	{
		pnew->next = head;
		head = pnew;
		pnew = (Node*)malloc(sizeof(Node));
	}
	free(pnew);
	pnew = NULL;
	return head;
}
Node *insert(Node *head,int k)
{
	Node *p = head;
	Node *p0 = (Node*)malloc(sizeof(Node));
	p0->num = k;
	p0->next = NULL;
	Node *pf = NULL;
	if(head == NULL)
	{
		head = p0;
		return head;
	}
	//查找当前p0所要插入的位置
	while(p != NULL && p->num < p0->num)
	{
		pf = p;   //pf记住要插入的前一个位置
		p = p->next;
	}
	if(p == NULL)
	{
		pf->next = p0;
	}
	else if(p->num >= p0->num)
	{
		if(head == p) //头插
		{
			p0->next = head;
			head = p0;
		}
		else  //中间插入
		{
			pf->next = p0;
			p0->next = p;
		}
	}
	return head;
}
Node *Delete(Node *head,int k)
{
	if(head == NULL)
	{
		return head;       //空链表
	}
	Node *p = head,*pf = NULL;
	while(p != NULL && p->num != k)  //查找要删除的位置
	{
		pf = p;
		p = p->next;
	}
	if(p == NULL)
		return head;    //没有
	else if(p->num == k)
	{
		if(p == head) //删除头
		{
			head = p->next;
		
		}
		else
		{
			pf->next = p->next;
		}
		free(p);
		p = NULL;
	}
	return head;
}
/*
链表排序，链表逆序，链表中间元素，链表倒数第k个元素，合并
双链表创建，插入，删除
循环链表
*/
void main()
{
	Node *head= createTail();
	print(head);
//	getchar();
//	head = createHead();
//	print(head);
	head = insert(head,10);
	print(head);
	head = Delete(head,20);
	print(head);
}
#endif
