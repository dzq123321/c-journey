 #include<stdio.h>
#include<string.h>
#include<malloc.h>
/*
�ṹ�� -��һ���������ͣ��������ǹ������ͣ�Ҳ�й����壬����Ҳ�ǹ�����������
struct �ṹ����
{
��Ա        ���ͱ���ռ�ռ�
};

struct 
{
��Ա
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
//�ṹ���������ֱ�ӽ����������
void main()
{
//	STU a = {1,"lisi",'m',4};
	STU a;
//	a = {1,lisi,'m',4}; //error  ֻ�г�ʼ�����ܸ�ֵ
6	a.num = 6;
	strcpy(a.name,"lisi"); //name�����飬����ֱ�Ӹ�ֵ����strcpy  Ҳ����gets
	a.sex = 'm';
	a.age = 4;         

	STU b;
	b = a;             //��ͬ������ֱ�Ӹ�ֵ
	printf("%d,%s,%c,%d\n",a.num,a.name,a.sex,a.age);
}
#endif

//typedef int A;
/*
C�У��ṹ�岻��Ϊ�գ�Ҳ�����в���
�ڴ��ֽڶ���
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
	char b;        //4 4 4  char char int ����2 2 4 һ��8�ֽ�
	int c;
}Data;

void main()     //�ṹ������
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
��������ͷ��㣬����ͷ���   ���Ե�
*/

typedef struct node
{
	int num;
	struct node *next;  //���԰���ָ�����ͣ�����4���ֽ�
}Node;

Node *createTail()           //��ͷ�ڵ�
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
	//���ҵ�ǰp0��Ҫ�����λ��
	while(p != NULL && p->num < p0->num)
	{
		pf = p;   //pf��סҪ�����ǰһ��λ��
		p = p->next;
	}
	if(p == NULL)
	{
		pf->next = p0;
	}
	else if(p->num >= p0->num)
	{
		if(head == p) //ͷ��
		{
			p0->next = head;
			head = p0;
		}
		else  //�м����
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
		return head;       //������
	}
	Node *p = head,*pf = NULL;
	while(p != NULL && p->num != k)  //����Ҫɾ����λ��
	{
		pf = p;
		p = p->next;
	}
	if(p == NULL)
		return head;    //û��
	else if(p->num == k)
	{
		if(p == head) //ɾ��ͷ
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
���������������������м�Ԫ�أ���������k��Ԫ�أ��ϲ�
˫�����������룬ɾ��
ѭ������
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
