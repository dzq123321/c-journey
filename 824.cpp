#include<stdio.h>
#include<assert.h>
#include<string.h>
/*
int main()
{
	unsigned char a=128;
	unsigned char b=129;
    char c=129;
	printf("%u\n",a);    
	printf("%d\n",b);      //129
	printf("%d\n",c);     //-127
	printf("%u\n",c);     //很大的数             129的补码  1000 0001-》打印%u,整型提升  11111111 11111111 1111111 10000001  %u原返补相同
	printf("%u\n",b);   //129   定义的时候的无符号
}
*/
//1.一个数组中只有两个数字是出现一次， 
//其他所有数字都出现了两次。 
//找出这两个数字，编程实现。
//void search (int arr[],int n)
//{
//	int i=0;
//	int j=0;
//	for(i=0; i<n; i++)
//	{
//		for(j=i+1; j<n; j++)
//		{
//			if((arr[i]^arr[j])==0)
//			{
//				arr[j]=0;
//				arr[i]=0;
//			}
//		}
//	}
//	for(i=0; i<n; i++)
//	{
//		if(arr[i]!=0)
//			printf("%d ",arr[i]);
//	}
//}
//int main()
//{
//	int arr[]={1,2,3,3,0,5,6};
//	int n=sizeof(arr)/sizeof(arr[0]);
//	search(arr,n);
//}
//	2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水， 给20元，可以多少汽水。 编程实现。
/*程序的思路：先将总数置为m（当前一共有的瓶子数）因为最开始给的钱数为m，所以购买了m瓶汽水，由于是两个空瓶换一瓶汽水，
所以每次换得新汽水都为m/2，再定义两个变量，一个为n（上一次的换的新汽水），一个为s（上一次兑换过程中是否有单独剩余的空瓶）
。m（当前一共有的空瓶数）=n（上次新换的瓶子）+s（上次换掉剩余的的旧空瓶）。while循环的条件是这次新换的瓶子不为零时，
总数等于每次新换的汽水之和。*/
//int drink(int money)
//{
//	int sum=money;  //总的饮料数
//	int m=money;  //m位总空瓶子数
//	int n=money;   
//	int s=0;
//	while(n)
//	{
//		n=m/2;  //n为上一次的换的新汽水
//		s=m%2;//n是这次兑换的啤酒瓶，s是上次兑换遗留的啤酒瓶
//		m=m/2+s; //当前一共有的空瓶数=n（上次新换的瓶子）+s（上次换掉剩余的的旧空瓶
//		sum=sum+n;
//	}
//	return sum;
//}
//int main()
//{
//	int n=0,money=0;
//	scanf("%d",&money);
//	n=drink(money);
//	printf("%d\n",n);
//}
//3.模拟实现strcpy 
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(src&&dest);
//	while(*dest++=*src++)
//	{
//		;
//	}
//	return dest;
//}
//int main()
//{
//	char a[]="qwrr";
//	char b[5]={0};
//	my_strcpy(b,a);
//	puts(b);
//}
//4.模拟实现my_strcat(strcat 
//char* my_strcat(char* dest,const char*src)
//{
//	while(*dest)
//	{
//		dest++;
//	}
//	while(*dest++=*src++)
//	{
//		;
//	}
//	return dest;
//}
//int main()
//{
//	char a[20]="qwer";
//	char b[]="asdf";
//	my_strcat(a,b);
//	puts(a);
//}
//int main()
//{
//	char a[10000];
//	int i;
//	for(i=0; i<10000; i++)
//	{
//		a[i]=-1-i;
//	}
//	printf("%d ",strlen(a));
//}
//求平均数 a b
// (a+b)/2     a+(b-a)/2    a+(b-a)>>1  a&b+(a^b)>>2
//int main()
//{
//	int a=5;
//	int b=7;
//	printf("%d\n",(a+b)/2);
//	printf("%d\n", a+(b-a)/2  );
//	printf("%d\n",a+((b-a)>>1));
//	printf("%d\n",(a&b)+((a^b)>>1 )        );  //当&是取地址操作符时， &  大于 +   大于 >>
//}  
                                                    //当&是位操作符时，  +  大于 >>   大于&
//int main()
//{
//	int n=0x11223344;
//	char* pc=(char*)&n;
//	int* pi=&n;
//	*pc=0;
//	*pi=0;
//}
void test(int** arr)
{}
int main()
{
	int* arr[10]={0};
	test(arr);

}