//1.用pi/4 ~ = 1-1/3+1/5-1/7+...公式求pi的近似值，直到某一项的绝对值小于1e-6为止。
#if 0
#include <stdio.h>
int main ()
{
	double sum=0;
	double a,n=0;
	int b=1;
	while((1/(2*n+1))>1e-6)
	{
		a=1/(2*n+1);
		sum=sum+b*a;
		b=-b;
			n++;
	}
	printf("sum=%e",sum);
	return 0;
}
#endif
#if 0
#include <stdio.h>                         //double类型不能用取余符号%
int main ()             
{
	double sum=0;
	double b,a;
    double n=0;
	while(double (1/(2*n+1))>1e-6)
	{
		a =1/(2*n+1);
		if (double(n)%2==0)
			b=-1;
		else
			b=1;
		sum=sum+b*a;
			n++;
	}
	printf("sum=%e",sum);
	return 0;
}
#endif
//2.编程求Fibonacci数列前40个数，这个数列有如下特点:第1，2两个数为1，1，从第3个数开始，该数
  
 // 是其前面两个数之和。即：F1 = 1(n=1) F2 = 1(n=2) Fn = Fn-1 + Fn-2(n>=3)。
#if 0
#include<stdio.h>
int main()
{
	int m[40];
	int i;
	m[0]=m[1]=1;
	for(i=2;i<40;i++)
	{
		m[i]=m[i-1]+m[i-2];
	}
	i=0;
	while(i<40)
	{
		printf("%-10d\n",m[i]);
		i++;
	}
	return 0;
}
#endif
#if 0
//3.判断所输入的数字是否为素数。
#include <stdio.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	if (a==1||a==0)
		printf("a不是素数\n");
	for(i=2;i<=a-1;++i)
	{
		 if(a%i!=0)
			printf("a是素数\n");
		 break;
	}
	for(i=2;i<=a-1;++i)
	{
		 if(a%i==0)
			printf("a不是素数\n");
		 break;
	}
	return 0;
}
#endif
#if 0
//4.输入两个整数m和n，求其最大公约数和最小公倍数
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d%d",&a,&b)==2;
			e=a*b;
		if(a<b)
		{
			c=a;
		   a=b;
		   b=c;
		}
		if (a%b==0)
			d=b;
		while(a%b!=0)
		{
			f=a%b;
			a=b;
			b=f;
         if (a%b==0)
			{d=b;
		   break;
		 }
		}
	printf("a,b的最大公约数是%d,最小公倍数%d",d,e/d);
	return 0;
}
#endif
//5.输入一行字符，分别统计其中英文字母，空格，数字和其他字符的个数。
#if 0
#include<stdio.h>             
int main()
{
	int a=0,b=0,c=0,d=0;
	char ch;
	while((ch=getchar())!='\n')
	{
		
		if(ch>='a'&&ch<='z'||ch>='A'&&ch<='B')                  //getchar()的情况
			a++;
		else if(ch==' ')
			b++;
		else if(ch>='0'&&ch<='9')
			c++;
		else
			d++;
	}
	
	printf("字母%d，空格%d，数字%d，其他%d",a,b,c,d);
    return 0;
}
#endif
//6.编程：Sn = a+aa+aaa+aaaa+...aa..a(n个a)之和，其中a是一个数字，n由键盘输入。
#if 0
#include<stdio.h>
int cing(int i,int n);
int main()
{
	int a=2,i,sum,n;
	scanf("%d",&n);
	for(i=1,sum=0;i<=n;i++)
	{
		sum=sum+cing(i,2);
	}
	printf("sn=%d\n",sum);
	return 0;
}
int cing(int i,int n)
{
   int q=1,m;
   for(m=1;m<=i;m++)
          q=q*n;
   return q;
}
#endif
#if 0
#include<stdio.h>
int cing(int i,int n);
int main()
{
	int a,i,sum,n;
	while(scanf("%d%d",&n,&a)==2)
	{
	for(i=1,sum=0;i<=n;i++)
	{
		sum=sum+cing(a,n);
	}
	}
	printf("sn=%d\n",sum);
	return 0;
}
int cing(int i,int n)
{
   int q=1,m;
   for(m=1;m<=i;m++)
          q=q*n;
   return q;
}
#endif
//7.编程：Sn = 1! + 2! + 3! + ...+ 20!;
#include<stdio.h>
#if 0
int main()
{
	int i,sum;
	int m[20];
	m[0]=1;
	for(i=1;i<20;++i)
	{
	m[i]=(i+1)*m[i-1];
	}
	i=0;
	for(sum=0;i<20;++i)
	{
		sum=sum+m[i];
	}
	printf("sn=%d",sum);
	return 0;
}
#endif
//8.打印所有的水仙花数，所谓水仙花数是指一个3位数，其各位数字立方和等于该数本身。

 // 例如：153 = 1*1*1 + 5*5*5 + 3*3*3
#if 0
int main()
{
	int a,b,c,sum;
	int x;
	for(x=100;x<=999;x++)
	{
		a=x/100;
		b=x%100/10;
		c=x%10;
		sum=a*a*a+b*b*b+c*c*c;
		if(x==sum)
			printf("%d\n",x);
	}
	return 0;
}
#endif
//9.一个数如果恰好等于它的因子之和，这个数就称为“完数”，编程找出1000之内的所有完数，并输出  完数 6 因子 1 2 3  1+2+3=6
#if 0
int main()
{
	int i,sum,x;
	for(x=1;x<=1000;++x)
	{
		for(i=1,sum=0;i<=x-1;++i)
		{
			if (x%i==0)
			sum=sum+i;
		}
		if(sum==x)
		printf("%d\n",x);
	}
    return 0;
}
#endif
//10.用迭代法求x = sqrt(a),迭代公式为：xn+1 = 1/2(xn + a / xn),要求前后两次求出的x的差的绝对
 // 值小于1e-5。
#if 0
#include<math.h>
int main()
{
	float a,b,c;
	scanf("%f",&c);
	a=c/2;
	b=(a + c / a)/2;
	do 
	{
		a=b;
		b=(a + c / a)/2;	
	}
	printf("%f",b);
	return 0;
}
#endif
/*
11.打印出下面图案：
       A
      BBB
     CCCCC
    DDDDDDD               //for(i=0;i<=3,i++)
     EEEEE                       for(j=0;j<3-i;j++)
      FFF                        for(ch='A'+i，k=0;k<2*i+1,k++)                        
      G 
	                              
						  for(i=4;i<=6,i++)
                         for(j=0;j<(i-3);j++)
                           for(ch='A'+i,p=0;p<13-2*i,p++) 

       A
      ABA
     ABCBA
    ABCDCBA
 */ 
#if 0
int main()
	{
		int i,j,k,p;
		char ch;
		for(i=0;i<=3;i++)
		{
			for(j=0;j<3-i;j++)
				printf(" ");
			for(ch='A'+i,k=0;k<2*i+1;k++) 
				printf("%c",ch);
			printf("\n");
		}
		for(i=4;i<=6;i++)
		{
			for(j=0;j<(i-3);j++)
				printf(" ");
            for(ch='A'+i,p=0;p<13-2*i;p++) 
               printf("%c",ch);
			printf("\n");
		}
         return 0;
}
#endif
#if 0
int main()
{
	int i,j;
	char ch;
	for(i=0;i<4;i++)
	{
	  for(j=0;j<(3-i);j++)
		  printf(" ");
	  for(ch='A';ch<('A'+i);ch++)
	     printf("%c",ch);
	  for(ch=('A'+i);ch>=('A'+0);ch--)
		  printf("%c",ch);
	  printf("\n");

	}
       return 0;              
}
#endif
//12.有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
#if 0
int main()
{
	float a,b,sum,t,q;
	int i;
	a=2;
	b=1;
	for(sum=0,i=0;i<20;i++)
	{
		t=a/b;
		sum=sum+t;
		q=a;
		a=(a+b);
		b=q;
	}
	printf("和是%f",sum);
	return 0;
}
#endif


