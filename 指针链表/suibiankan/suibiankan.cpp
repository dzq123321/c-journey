//1������ָ��   

#include<stdio.h>
#if 0
int max(int a,int b)
{
	return a>b?a:b;
}
int min (int a,int b)
{
	return a<b?a:b;
}
int add (int a,int b)
{
	return a+b;
}
int mod (int a,int b)
{
	return a%b;
}
#endif
#if 0
int main()
{
	int (*p[])(int,int)={max,min,add,mod};       //����ָ������,ע���ʽ
	int n=sizeof(p)/sizeof(p[0]);
	for (int i=0;i<n;i++)
	{
		printf("%d ",p[i](6,2));
	}
}
#endif
#if 0
void test(int(*p)(int,int),int a,int b)       //����ָ����Ϊ�β�
{
	printf("%d ",p(a,b));
}
int main()
{
	test(max,3,9);
}
#endif
#if 0
int main()
{
	int(*p)(int,int);

	 p=max;                     //����ָ��
	 int n=p(6,3);
	 printf("%d",n);
	
}
#endif
//ָ������   �������ŵ���ָ�룬�������ַ�������
#if 0
int main()
{
	int a[]={1,2,3};
	int *p[]={&a[0],&a[1],&a[2]};   //�����ָ��ֵ�ĵ�ַ
	for(int i=0;i<3;i++)
		printf("%d ",a[i]);
	for(int i=0;i<3;i++)
		printf("%d ",**(p+i));   //����ָ��=*p[i]
}
#endif
//����3�����20���ֽڵ��ַ�������������
#if 0
#include<stdlib.h>
#include<string.h>
int main()
{
	char *num[3];
	int i=0;
	while(i<3)
	{
		num[i]=(char*)malloc(20);
		gets(num[i]);
		i++;
	}
	char *t;
	for(i=0;i<3;i++)
	{
		for(int j=0;j<3-i-1;j++)          
		{
			int n=strcmp(num[j],num[j+1]);
			if(n>0)
			{
				t=num[j];         //����char t[20],����ʱӦ��strcpy,strcpy(t,name[j]);strcpy(num[j],num[j+1])������
				num[j]=num[j+1];
				num[j+1]=t;                  //�Ժ�������ָ����ʱ������֮�������strcpy

			}                              ////û���ٿռ䣬������strcpy,ֻ�ܽ�����ַ,���ٿռ䣬������ַ��strcpy����
		}
	}
	for(i=0;i<3;i++)
	{
		printf("%s",num[i]);
			printf("\n");
			free(num[i]);
			num[i]=NULL;
	}
}
#endif
//����ָ��--�ɵ�����ָ��
#if 0
int main()
{
	int a[2][3]={1,2,3,4,5,6};
	int (*p)[3];
	p=a;
	for(p=a;p<a+2;p++)
	{	for(int i=0;i<3;i++)
		{
			printf("%d",*(*p+i));     //�൱��*(*(a+i)+j) a����Ԫ�صĵ�ַ
		}
		printf("\n");
	}
}
#endif
#if 0
int main()
{
	int a[]={1,2,3};
	int *p[]={&a[0],&a[1],&a[2]}; //ָ�������������൱�ڶ���ָ��
	int **q=NULL;
	q=p;
	for(int i=0;i<3;i++)
		printf("%d ",*p[i]);
	printf("\n");
	for(q=p;q<p+3;q++)
		printf("%d ",**q);
}
#endif
//����ָ�� a p=&a  *p=a    q=&p **q=a   p=(int*)malloc(int)
#if 0
int **p=NULL;
*p=(int*)malloc(sizeof(int))    *p��ָ�����ͣ���int���ٿռ�
p=(int**)malloc(sizeof(int*))       p��ָ��ָ�����ͣ���int*���ٿռ�
#endif
#if 0
//�ö���ָ�봴����ά����  ��ָ����������
#include<stdlib.h>
int main()
{
	//int *p[5]�൱���������У��Ҿ��ÿ���ȥָ������ȶ���ָ���һ�㣬��Ҫ��⡣��������
	int **p=NULL;
	p=(int**)(malloc(sizeof(int*)*3));
	for(int i=0;i<3;i++)
	{
		p[i]=(int*)(malloc(sizeof(int)*3));
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			p[i][j]=j;
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<3;i++)
	{
		free(p[i]);
		p[i]=NULL;
	}
	free(p);
	p=NULL;
}
#endif
#if 0
char *c[] = { "ENTER", "NEW", "POINT", "FIRST" }; 
char **cp[] = { c+3, c+2, c+1, c }; 
char ***cpp = cp; 


int main(void)
{ 
	printf("%s\n", **++cpp); //point
	printf("%s\n", *--*++cpp+3); //ER    CPP����cpp+2��λ��
	printf("%s\n", *cpp[-2]+3); //ST
	printf("%s\n", cpp[-1][-1]+1); //EW
	return 0;
}

#endif
#include<string.h>
#include<stdlib.h>
#if 0
void mymalloc1(char *p)
{
	p = (char*)malloc(100);     //û���ٺÿռ䣬strʵ�Σ�p���βΣ�������ַ��ͬ��ֵ��ͬ
}


void mymalloc2(char **p)//p = &str  //��Ҫ�ı�str��Ҫ��str�ĵ�ַ����*p���ٿռ��൱�ڸı�str��ַ
{
	*p = (char*)malloc(100);
}

char *mymalloc3()  //����ָ��̬ջ�ڴ��ָ��,����ȡ       *ָ���Ƿ���������ָ������
{
	char p[100];      //����p��ջ�ϵĿռ�  �����Ǹ�mymalloc���ٿռ䣬����free
	return p;
}
char *mymalloc4()
{
	static char p[100];
	return p;
}
char *mymalloc5()
{
	char *p = (char*)malloc(100);     //���ϵĿռ䣬û�ͷž�һֱ�� malloc���ٿռ䣬�Ƕ��ϵĿռ�
	return p;              //Ҫfree
}
#endif
#if 0
void main()
{
	char *str = NULL;
	//mymalloc1(str);
	//mymalloc2(&str);
	//str = mymalloc3();
	//str = mymalloc4();
	str = mymalloc5();
	strcpy(str,"123456");
	puts(str);
	free(str);
	str = NULL;
}
#endif
#if 0
typedef struct node
{
	int  num;
	struct node *next;  //���԰���ָ�����ͣ���4���ֽ�
}Node;
#endif
#if 0
Node *createtail()  //β��    ����ͷ�ڵ�
{
	Node *head=NULL;
	Node *pnew=NULL,*ptail=NULL;
	pnew=(Node*)malloc(sizeof(Node));
	pnew->next=NULL;
	while(scanf("%d",&pnew->num)==1)
	{
		if(head==NULL)
			head=pnew;
		else
			ptail->next=pnew;
		ptail=pnew;
		pnew=(Node*)malloc(sizeof(Node));
		pnew->next=NULL;
	}
	free(pnew);
		pnew=NULL;
		return head;
}
void print (Node *head)
{
	Node *p=head;
	while(head!=NULL)
	{
		printf("%d ",p->num);
		p=p->next;
	}
}
void main()
{
	Node *head=createtail();      //����һ�������ͷ���ݹ�ȥ6
	print(head);
}
#endif
#if 0
//��ͷ�ڵ� ͷ�巨
Node *createhead()
{
	Node *head=NULL;
	Node *pnew=NULL;
	pnew=(Node *)malloc(sizeof(Node));
	while(scanf("%d",&pnew->num)==1)
	{
		pnew->next=head;
		head=pnew;
        pnew=(Node *)malloc(sizeof(Node));
	}
	free(pnew);
	pnew=NULL;
	return head;
}
void print(Node *head)
{
	Node *p=head;
	while(p!=NULL)
	{
		printf("%d ",p->num);
		p=p->next;
	}
}
void main()
{
	Node *head=createhead();
	print(head);
}
#endif
#if 0
typedef struct node 
{
	int num;
	struct node *next;
}Node;
//�ȴ���һ�������ڲ���ɾ��
Node *createtail()
{
	Node *head=NULL;
	Node *pnew=NULL,*ptail=NULL;
	pnew=(Node*)malloc(sizeof(Node));
	pnew->next=NULL;
	while((scanf("%d",&pnew->num)==1))
	{
		if (head==NULL)
			head=pnew;
		else
			ptail->next=pnew;
		 ptail=pnew;
         pnew=(Node*)malloc(sizeof(Node));
	     pnew->next=NULL;
	}
	free(pnew);
	pnew=NULL;
	return head;
}
void print(Node *head)
{
	Node *p=head;
	while(p!=NULL)
	{
		printf("%d ",p->num);
		p=p->next;
	}
}
//����
Node *insert(int k,Node *head)
{
	Node *p=head;
	Node *pf=NULL;
	Node *p0=(Node*)malloc(sizeof(Node));
	p0->num =k;
	if(head==NULL)
		{
			head=p0;
			return head;
	}
	while(p!=NULL&&p->num<p0->num)
	{
		pf=p;
		p=p->next;
	}
     if(p==NULL)
		pf->next=p0;
	 else if(p->num>p0->num)
	 {
	    if(p==head)
	    {
	    	p0->next=head;
		    head=p0;
	     }

		else
	    {
		   pf->next=p0;
	       p0->next=p;
	    }
	 }
	return head;
}
Node *Delete(int n,Node*head)
{
	Node*p=head;
	Node*pf=NULL,*p0=NULL;
	if(head==NULL)
		return head;
	while(p!=NULL&&p->num!=n)
	{
		pf=p;
		p=p->next;
	}
	if(p==NULL)
		return head;
	else if (p->num=n)
		if(p=head)
		{
			head=p->next;
		}
		else
		{
			pf->next=p->next;
		}
		return head;
}

void main()
{
    Node *head=createtail();
	print(head);
	printf("\n");
	head=insert(5,head);
	print(head);	
	printf("\n");
	head=Delete(3,head);
	print(head);

}
#endif
#if 0
#include<stdio.h>
struct BBB
{
	long num;
	char *name;
	short int data;
	char ha;
	
}*p;
int main()
{
	printf("%d\n",sizeof(*p));
	printf("%d\n",sizeof(long ));
	printf("%p\n",p);
    printf("%p\n",p+0x200);
	printf("%d\n",(unsigned long)p+0x200);
	printf("%p\n",(char*)p+0x200);


}
#endif
//������
#if 0
void matrix_multiply(int *m1,int *m2,int *r,int x,int y,int z)
{
	int i=0;
	int j=0;
	int k;
	for(i=0;i<x;r++)
	{
		for(j=0;j<z;j++)
		{
			for( k=0;k<y;k++)
			{
				*(r+i*z+j)= *(r+i*z+j)+*(m1+i*y+k)* *(m2+k*z+j);
			}
		}
	}
		printf("asda");
}
int main()
{
	int i,j;
	int a[3][2]={2,-6,3,5,1,-1};
	int b[2][4]={4,-2,-4,-5,-7,-3,6,7};
	int c[3][4]={0};
	matrix_multiply(a[0],b[0],c[0],3,2,4);
	printf("asda");
	for(i=0;i<3;i++)
	{	for(j=0;j<4;j++)
		{
			printf("%d ",c[i][j]);
		}
	printf("\n");
	}
		return 0;
}
#endif
void matrix_multiply(int *m1, int *m2, int *r, int x, int y, int z)
{
	int i, j, k;
	for (i = 0; i < x; ++i)
	{
		for (j = 0; j < z; ++j)
			for (k = 0; k < y; ++k)
				*(r+i*z+j) += *(m1+i*y+k) * *(m2+z*k+j);
	}
}

int main()
{
	int i, j;
	int a[3][2] = {2, -6,
	               3, 5,
	               1, -1};
	int b[2][4] = {4, -2, -4, -5,
	               -7, -3, 6, 7};
	int c[3][4] = {0};
	matrix_multiply(a[0], b[0], c[0], 3, 2, 4);
	for (i = 0; i < 3; ++i)
	{
		for(j = 0; j < 4; ++j)
		{
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}