#include<stdio.h>
//  编程，计算2*3和3*2的矩阵相乘
/*
1 2 3    1 2        22  28
      *  3 4   =  
4 5 6    5 6        49  64
*/
#if 0
void main()
{
	int a[2][3] = {1,2,3,4,5,6};
	int b[3][2] = {1,2,3,4,5,6};
	int c[2][2] = {0};

	int i,j,k;
	for(i = 0;i<2;i++)
	{
		for(j = 0;j<2;j++)
		{
			for(k = 0;k<3;k++)
			{
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
	}
	for(i = 0;i<2;i++)
	{
		for(j = 0;j<2;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
}
#endif
/*
给定一个4*4的二维数组，行列递增，查找给定值k
1 3 4 6
2 5 6 7
8 9 12 45
10 15 34 56

思路：k和右上角值进行比较，k > 6,i++  k < 6 j--

*/
/*
void mystrcpy(char* a,char* b);
1.不能实现链式表达式 
2.有歧义
char *strcpy(char*dest,const char*source); --健壮性
字符数组
字符串
gets,puts
strcpy,strcmp,strlen,strcat,strncpy,strncmp
strtok
memcpy,memcmp,memset
*/
#include<string.h>

#if 0
void main()
{
	char str[] = "i,am.a student ";
	char b[] = ",. ";
	char *tok = NULL;
	char maxlen[20] = "";
	for(tok = strtok(str,b);tok != NULL; tok = strtok(NULL,b))
	{
		puts(tok);
		if(strlen(maxlen) < strlen(tok))
			strcpy(maxlen,tok);
	}
	puts(maxlen);
}
#endif
#if 0
void main()
{
	int a[5] = {1,2,3,4,5};
	int b[5];
	char c[20];
	memcpy(b,a+1,12);  //void 
	memset(b,1,6);
	memset(c,0,20);
	
}
#endif

#if 0
void main()
{
	char a[20] = "123asdf";
	char b[20] = "1234";
	strncpy(a,b,6);
//	int n = strncmp(a,b,6);
//	printf("%d\n",n);
	puts(a);
}
#endif
#if 0
void main()
{
	char a[20] = "123";
	char b[20] = "456";
//	strcat(a,b);
	int i = 0,j = 0;
	while(a[i] != '\0')
		i++;
	while((a[i+j] = b[j]) != '\0')
		j++;
	puts(a);
}
#endif
/*
strcmp相对应的两两进行比较，直到找到不相等为止
*/
#if 0
void main()
{
	char a[] = "1234";
	char b[] = "12";
	int i = 0;
	while(a[i] != '\0' && b[i] != '\0' && a[i] == b[i])
		i++;
	int n = a[i] - b[i];
	if(n > 0)
		n = 1;
	else if(n == 0)
		n = 0;
	else
		n = -1;
	//printf("%d\n",n);
	//int n = strcmp(a,b);
	printf("%d\n",n);
}
#endif
#if 0
void main()
{
	char a[20] = "1234567890";
	char b[20] = "qwert";
//	strcpy(a,b);
	int i = 0;
	while((a[i] = b[i]) != '\0')
		i++;
	puts(a);
}
#endif


//strlen,sizeof
#if 1
void main()
{
	char a[10] = {'1','2','3','4','5','6','7','8','9','0'};
	char b[10] = "123456780";

	int n = strlen(a); //>10   strlen字符串的长度 以/0结束
	int m = strlen(b);
	printf("%d,%d\n",n,m);

//	int i = 0;
//	int n = 0;
//	while(b[i] != '\0')
//	{
//		i++;
//		n++;
//	}
//	printf("%d\n",n);
}
#endif
/*
输入3行80列的文字，并计算里面的字母个数，数字个数，空格个数，其他字符个数
asfdasdf
asdf
qwertwertwert
*/
#if 0
void main()
{
	char str[3][80];
	int i,j;
	for(i = 0;i<3;i++)
	{
		gets(str[i]);
	}
	for(i = 0;i<3;i++)
	{
		for(j = 0;str[i][j] != '\0';j++)  //j < 80
		{
			//...
		}
	}
}
#endif

//编程：输出字符串A和字符串B的最长公共单词
//strtok(不能嵌套),strcmp,strlen
#if 0
void main()
{
	char str1[] = "i am a student";
	char str2[] = "you are a student and asdf";
	char aa[10][10];  //存储str1的单词
	char bb[10][10];
	char *tok;
	int i = 0,j = 0;
	for(tok = strtok(str1," ");tok != NULL; tok = strtok(NULL," "))
	{
		strcpy(aa[i],tok);
		puts(aa[i]);
		i++;
	}
	for(tok = strtok(str2," ");tok != NULL; tok = strtok(NULL," "))
	{
		strcpy(bb[j],tok);
		j++;
	}
	char maxlen[10] = "";
	for(i--;i>=0;i--)
	{
		for(int k = 0;k<j;k++)
		{
			if(strcmp(aa[i],bb[k]) == 0)
			{
			//	puts(aa[i]);
				if(strlen(maxlen) < strlen(aa[i]))
					strcpy(maxlen,aa[i]);
			}
		}
	}
	puts(maxlen);
}
#endif

/*
编程：给定一个字符串例如："asfd12ert45sf67sfg45sfds90asd8ads"里面包括数字字符，
要求，将相邻的连续数字字符变成整数，并分别存储在整数数组中，例如：int a[] = {12,45,67,45,90,8,...}

*/
#if 0
void main()
{
	char a[] = "asfd12ert45sf67sfg45sfds90asd8ads6zsd7";
	int num[10];
	int s = 0;
	int i,j = 0;
	
	for(i = 0;i <= strlen(a);i++)
	{
		if(a[i] >='0' && a[i] <='9')
		{
			s = s * 10 + a[i] - '0';
			
		}
		else 
		{
			num[j] = s;
			j++;
			s = 0;
			
		}
	}

	for(i = 0;i < j;i++)
	{
		printf("%d ",num[i]);
	}
	printf("\n");
}
#endif
#if 1
//编程：判断给定的字符串是否是回文字符串
//例如：12321 abcba
void main()
{
	char a[20];
	char b[20];
	gets(a);
	int i = 0,j=0;
/*	for(i = strlen(a)-1;i>=0;i--)
		b[j++] = a[i];
	b[j] = '\0';
	if(strcmp(a,b) == 0)
		printf("yes\n");
	else
		printf("no\n");
		*/
	int n = strlen(a);
	int flag = 1;
	for(i = 0;i<n/2;i++)
	{
		if(a[i] != a[n-i-1])
		{
			flag = 0;
			break;
		}
	}
	if(flag == 0)
		printf("no\n");
	else
		printf("yes\n");
	/*if(i == n/2)
		printf("yes\n");
	else
		printf("no\n");
		*/
}
#endif