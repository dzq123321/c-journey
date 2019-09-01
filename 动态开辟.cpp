#include<stdio.h>
#include<malloc.h>

#if 0
void main()
{
	int a[2][3] = {1,2,3,4,5,6};
	int (*p)[3];  //数组指针
	int *q[2];   //指针数组
	p = a;
	int i,j;
	for(i = 0;i<2;i++)
	{
		for(j = 0;j<3;j++)
			printf("%d ",*(*(a+i)+j));//a[i][j]
		printf("\n");
	}
	for(p = a;p < a + 2;p++)
	{
		for(j = 0;j<3;j++)
			printf("%d ",*(*p+j));
		printf("\n");

	}
}

#endif
#if 0
void main()
{
	int a[5] = {1,2,3,4,5};
	int *p[5] = {&a[0],&a[1],&a[2],&a[3],&a[4]};
	int i;
	int **q = NULL;
	q = p;
	for(i = 0;i<5;i++)
	{
		printf("%d ",**(p+i));
	}
	printf("\n");
	for(q = p;q < p+5;q++)
	{
		printf("%d ",**q);
	}
	printf("\n");
}
#endif

#if 0
void main()
{
/*	int a = 6;
	int *p = &a;
	int **q = &p;
	printf("%d,%d\n",**q,*p);
	*/
/*
	int *p = NULL;
	p = (int*)malloc(sizeof(int));
	*p = 6;
	free(p);
	p = NULL;
	*/
	int **p = NULL;
	p = (int**)malloc(sizeof(int*));
	*p = (int*)malloc(sizeof(int));
	**p = 7;
	printf("%d\n",**p);
	free(*p);
	free(p);
}
#endif
#if 0
void main()
{
	//int *p[5];
	int **p = NULL;
	p = (int**)malloc(sizeof(int*) * 5);
	//*p = (int*)malloc(sizeof(int));
	//*p = (int*)malloc(sizeof(int)*5)
	int i;
	for(i = 0;i<5;i++)
	{
		p[i] = (int*)malloc(sizeof(int)*5);
	}
	int j;
	for(i = 0;i<5;i++)
	{
		for(j = 0;j<5;j++)
		{
			p[i][j] = i;
		}
	}
	for(i = 0;i<5;i++)
	{
		for(j = 0;j<5;j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}
	for(i = 0;i<5;i++)
		free(p[i]);
	free(p);
	p = NULL;
}
#endif

/*
int *p
int (*p1)[3] ->
int *p2[3];
int **p3
int (*p4)(int,int)
*/

#if 0
char *c[] = { "ENTER", "NEW", "POINT", "FIRST" }; 
char **cp[] = { c+3, c+2, c+1, c }; 
char ***cpp = cp; 


int main0(void)
{ 
	printf("%s\n", **++cpp); 
	printf("%s\n", *--*++cpp+3); 
	printf("%s\n", *cpp[-2]+3); 
	printf("%s\n", cpp[-1][-1]+1); 
	return 0;
}

#endif

#if 0
void main()
{
	int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

	printf("%d,%d,%d,%d\n",**a,*(*a+2),*(*(a+1)+1),*(*(a+2)));    //1 3 6 9
}

#endif
/*
1 2 3 4
5 6 7 8
9 10 11 12
*/
#if 0
int main()  
{  
    char *str[]={"welcome","to","Fortemedia","Nanjing"};  
    char **p=str+1;  
    str[0]=(*p++)+2;    //\n  nanjing jing (temedia错)是g 
    str[1]=*(p+1);  
    str[2]=p[1]+3;  
    str[3]=p[0]+(str[2]-str[1]); //str[2]-str[1]  是指针相减=3，p在Fortemedia的首地址，
    printf("%s\n",str[0]);            // 因为指针已经发生变化; 所以p[0]是*p,指向jing的首地址
	printf("%s\n",str[1]);
	printf("%s\n",str[2]);
	printf("%s\n",str[3]);
    return 0;  
}
#endif

#include<string.h>
#if 0
void mymalloc1(char *p)
{
	p = (char*)malloc(100);
}
void mymalloc2(char **p)//p = &str
{
	*p = (char*)malloc(100);
}

char *mymalloc3()  //返回指向动态栈内存的指针,不可取
{
	char p[100];
	return p;
}
char *mymalloc4()
{
	static char p[100];
	return p;
}
char *mymalloc5()
{
	char *p = (char*)malloc(100);
	return p;
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
void main()
{
	char a[] = "123456";
	char *p = "123456";
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(p));

	printf("%d\n",strlen(a));
	printf("%d\n",strlen(p));
}
#endif

/*
int a;
int b[10];
int c[3][10];
int max(int,int);
int *p; 
int **q;
int (*m)[10];
int *n[3];
int (*fn)(int,int);
p = &a;========= -> a---*p
p = b;p = &b[0] ======== b[i],*(b+i),*(p+i),p[i],*p++

*/
#include<string.h>
#if 0
void mymalloc1(char *p)
{
	p = (char*)malloc(100);     //没开辟好空间，str实参，p是形参，两个地址不同，值相同
}
#endif

void mymalloc2(char **p)//p = &str  //想要改变str，要传str的地址，给*p开辟空间相当于改变str地址
{
	*p = (char*)malloc(100);
}

char *mymalloc3()  //返回指向动态栈内存的指针,不可取
{
	char p[100];      //数组p是栈上的空间  ，不是给mymalloc开辟空间，不用free
	return p;
}
char *mymalloc4()
{
	static char p[100];
	return p;
}
char *mymalloc5()
{
	char *p = (char*)malloc(100);     //堆上的空间，没释放就一直在 malloc开辟空间，是堆上的空间
	return p;              //要free
}
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









