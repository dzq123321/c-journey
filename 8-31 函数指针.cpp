#include<stdio.h>
/*
һ��ָ�룺�洢Ԫ�صĵ�ַ��ָ��ǰ��ַ����ʶ�Ŀռ�

i*m+j->  mΪ���� i��j��Ԫ�ؾ��׵�ַ��ƫ����
*/
#if 0
void main()
{
	int a[3][4] = {1,2,3,4,5,6,7,8,9,0,9,8};
	int *p = NULL;
	int i,j;
	p = &a[0][0];  //p = a[0]
	for(i = 0;i<3*4;i++)
		printf("%d ",*(p+i));
	printf("\n");
	for(p = a[0];p<a[0]+12;p++)
		printf("%d ",*p);
	printf("\n");
	p = a[0];
	for(i = 0;i<3;i++)
	{
		for(j = 0;j<4;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}

	for(i = 0;i<3;i++)
	{
		for(j = 0;j<4;j++)
		{
			printf("%d ",*(p+i*4+j));
		}
		printf("\n");
	}
}

#endif
/*
�ַ�����ָ��
�ַ�����ʾ----���飬ָ��
*/
#include<string.h>
#if 1
void fn1()
{
	char a[] = "12345";
	char b[] = "qwert";
	char t[10];
	strcpy(t,a);
	strcpy(a,b);
	strcpy(b,t);
	puts(a);
	puts(b);
}
void fn2()
{
	char *p = "12345";
	char *q = "qwert";
	char *t;
	t = p;
	p = q;
	q = t;
	puts(p);
	puts(q);
}
void fn3()
{
	char a[] = "12345";
	char b[] = "qwert";
	char *p = a;
	char *q = b;
	char c[10];
	strcpy(c,p);
	strcpy(p,q);
	strcpy(q,c);
	puts(a);
	puts(b);
}
void main()
{/*
	char str1[20];
	str1[20] = "dadfad"; //error
	str1 = "dadsfadf";   //error

	char *p;
	p = "123456";
	*/
/*	char str1[20] = "123456";  //���ַ���"123456"�洢��str1�����ٵĿռ���
	char *p = "123456";        //���ַ�������"123456"���׵�ַ�洢��p����->ָ�����pָ���ַ���������123456�����׵�ַ

	str1[2] = 'k';
	puts(str1);
	*/

	fn1();  //-��������
	fn2();  //-����ָ��
	fn3();  //����
}
#endif

#if 0
void main()
{
	char a[] = "123";
	char b[] = "123";
	const char aa[] = "123";
	const char bb[] = "123";
	char *p = "123";
	char *q = "123";
	const char *pp = "123";
	const char *qq = "123";
	if(a == b)
		printf("a == b\n");
	if(aa == bb)
		printf("aa == bb\n");
	if(p == q)
		printf("p == q\n");
	if(pp == qq)
		printf("pp == qq\n");
	if(p == pp)
		printf("p == pp\n");
}
#endif

//ָ�뱾��ָ��ָ��
#if 0
void main()
{
	int a = 6;
	const int *p = &a;   //*p
	int const *p1 = &a;  //*p1
	int *const p2 = &a; //p2
	const int *const p3 = &a;//p3,*p3
}
#endif

/*int (*p)[4];  --����ָ��
int *q[3];  --ָ������
����ָ��
ָ�뺯��
void test();
void test1(int);

����ָ��-->���������ͣ�����ֵ�Լ�������

3���÷���
1.ָ������ȥ��������
2.����ָ����Ϊ����һ����������
3.����ָ����Ϊ����һ����������ֵ

��չ��
����ָ������
*/
#if 0
int max(int a,int b)
{
	return a > b ? a : b;
}
int min(int a,int b)
{
	return a < b ? a : b;
}
int sum(int a,int b)
{
	return a + b;
}
int sub(int a,int b)
{
	return a - b;
}
int mul(int a,int b)
{
	return a * b;
}
int Div(int a,int b)
{
	if(b != 0)
		return a / b;
}
int Mod(int a,int b)
{
	return a % b;
}
void test(int a,int b,int (*p)(int,int))  //p = max
{
	printf("%d\n",p(a,b));
}

/*
int (*p)(int,int)��Ϊ����fn�ķ���ֵ  --����ָ��
����ָ�뺯��
ָ������
*/
//����ת�Ʊ�
void main()
{
	/*printf("%d\n",max(3,6));
	printf("%d\n",min(2,5));
	*/
	int (*p[])(int,int) = {max,min,sum,sub,mul,Div,Mod};  //����ָ������
	int n = sizeof(p)/sizeof(p[0]);
	for(int i = 0;i<n;i++)
		printf("%d\n",p[i](3,6));
}
#endif

#if 0
int (*fn(int n))(int,int) //fnΪ��������һ������int n��fn�����ķ���ֵ�Ǹ�ָ�루ָ��ָ��һ��������int xx(int,int)��
{
	printf("fn n = %d\n",n);
	return max;
}
void main()
{
	printf("%d\n",fn(100)(2,7));  //max(2,7)
}
#endif
#if 0
void main()
{
	test(3,6,max);
}
#endif
#if 0
void main()
{
	int (*p)(int,int);  //	����ָ��
	p = max;
	int n = p(4,6);  //max(4,6);
	printf("%d\n",n);
	p = min;
	printf("%d\n",p(3,6));  //min(3,6)
}
#endif

/*
ָ������
*/
#if 0
void main()
{
	int a[5] = {1,2,3,4,5};
	int *p[5]= {&a[0],&a[1],&a[2],&a[3],&a[4]};
	int i;
	for(i = 0;i<5;i++)
		p[i] = &a[i];

	for(i= 0;i<5;i++)
		printf("%d ",*p[i]); //**(p+i)    �൱�ڶ���ָ��
	printf("\n");
} 
#endif

#if 0
void main()
{
	//char name[10][30];//lili ->
	char *name[] = {"lili","lisi","asdfads","zhangsan","asdfasdfasdfasdfadsfads"};
	//char *name0 = "lili"
	int n = sizeof(name)/sizeof(name[0]);
	int i,j;
	char *t;
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<n-i-1;j++)
		{
			if(strcmp(name[j],name[j+1]) < 0)
			{
				//����
				t = name[j];
				name[j] = name[j+1];
				name[j+1] = t;
			}
		}
	}
	for(i = 0;i<5;i++)
		puts(name[i]);
}

#endif
#include<stdlib.h>
#if 0
void  main()
{
	char *name[5];
	int i,j;
	for(i = 0;i<5;i++)
	{
		name[i] = (char*)malloc(20);
		gets(name[i]);
	}
	char temp[20];
	for(i = 0;i<5;i++)
	{
		for(j = 0;j<5-i-1;j++)
		{
			if(strcmp(name[j],name[j+1]) < 0)
			{
				strcpy(temp,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],temp);
			}
		}
	}
	for(i = 0;i<5;i++)
	{
		puts(name[i]);
		free(name[i]);
		name[i] = NULL;
	}
}
#endif
#if 0
void main()
{
/*	int a[] = {1,13,5,8,34};
	int *p = a;
//	printf("%d\n",*p++); //*(p++)
	printf("%d\n",*(++p));
	printf("%d\n",*p);
*/

	int a = 6;
	printf("%d\n",a++);
	/*
	int i= 5;
	int j = i++;
	while(i<5)
	{
	i++;  ++i
	}
	*/
	
}
#endif