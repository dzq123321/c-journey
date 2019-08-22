#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
//8_10  作业
//1、打印100-200之间的素数
/*
int main()
{
	int i;
	int j;
	int flag=2;   //记录i不能整除几个数
	for(i=100;i<200;i++)
	{
		for(j=2;j<=sqrt(i);j++)    // 可以换成为j<=sqrt(i)
	  {	
		if(i%j!=0)
				{
	                 flag++;    //只能被1和他本身整除的是素数
		        }
	   }
		if(flag==j)
			printf("%d ",i);
		flag=2;
	}
}
*/


//2、输出乘法口诀表
/*
int main()
{
	int i=1;
	int j=1;
	for(i=1;i<10;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d x %d=%-2d  " ,j,i,j*i);
		}
		j--;
		if(i==j)
			printf("\n");
	}
}
*/
//3、判断1000-2000年之间的闰年
/*
int main()
{
	int i=1000;
	for(i=1000;i<=2000;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
			printf("%d ",i);
	}
	return 0;
}
*/


//8_11作业
//  1 交换数字
/*
void swap (int a,int b)
{
	int c=0;
	c=a;
	a=b;
	b=c;
	printf("%d %d\n",a,b);
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	swap(a,b);
}
*/
// 2、不创建变量，交换数字
/*
int main()
{
	int a=5;
	int b=2;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d\n",a,b);
}
*/
//3、求10个整数中的最大值
/*
int main()
{
	int a[10]={5,0,3,2,1,6,4,8,9,7};
	int i=0;
	int max=0;
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("max=%d\n",max);
	return 0;
}
*/
//3、将三个数从大到小输出
/*
int main()
{
	int a[3]={0,5,3};
	int i=0,j=0,t=0;
	for(i=0;i<3;i++)
	{
		if(a[i]<a[i+1])
		{
			   t=a[i];
			   a[i]=a[i+1];
			   a[i+1]=t;
		}
	}
	for(i=0;i<3;i++)
	{
	   printf("%d ",a[i]);
	}
	return 0;
}
*/
//5、求两个数的最大公约数
/*
int main()
{
	int a,b,c;
	int t=0;
	int i=1;
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		c=a;
		a=b;
		b=c;
	}
	while(i<=b)
	{
		if(a%i==0&&b%i==0)
		{
			t=i;
		}
		i++;
	}
	printf("%d和%d最大公约数是%d\n",a,b,t);
	return 0;
}
*/
//int main()
//{
//	char a[]="sq8000";
//	char b[]={'s','q','8','0'};
//	char c[]={'s','q','8',0};
//	char d[]={'s','q','8','\0'};
//	char e[]={'s','q','8'};
//	printf("%d\n",strlen(a)); //6
//	printf("%d\n",strlen(b));//18
//	printf("%d\n",strlen(c));//3
//	printf("%d\n",strlen(d));//3
//	printf("%d\n",strlen(e));//15
//	printf("%d\n",sizeof(a));//7
//	printf("%d\n",sizeof(b));//4
//	printf("%d\n",sizeof(c));//4
//	printf("%d\n",sizeof(d));//4
//	printf("%d\n",sizeof(e));//3
//}
//int main()
//{
//	int a=0;
//	char b=2;
//	int c=7;
//	printf("%d ",~a);  //-1
//	printf("%d ",~b);   //-3
//	printf("%d ",~c); 
//}
/*
a   源码 00000000   00000000   00000000   00000000   ~按位取反
~a  源码 11111111   11111111   11111111   11111111   
    反码 10000000   00000000   00000000   00000000 
	补码 10000000   00000000   00000000   00000001   第一位为符号位 1 表示负数，补码是反码加1  
*/
//8—12  
// 将数组A的内容和数组B的内容进行交换
/*
int main()
{
	int A[5]={1,2,3,4,5};
	int B[5]={6,7,8,9,10};
	int i=0,t=0;
	for(i=0; i<5; i++)
	{
		t=A[i];
		A[i]=B[i];
		B[i]=t;
	}
	for(i=0; i<5; i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
	for(i=0; i<5; i++)
	{
		printf("%d ",B[i]);
	}
	return 0;
}
*/
//计算1/1-1/2+1/3-1/4+1/5....+1/99-1/100
/*
int main()
{
	float i=1;
	float sum=0;
	for(i=1; i<=100; i++)
	{
		sum=sum+(1/i)*pow((double)-1,(double)(i-1));//pow返回的是double类型，两个参数也是double类型，int要强制转换为double
	}
	printf("%f\n",sum);
	return 0;
}
*/
//3、数一下1-100的所有整数中出现多少次数字9
/*
int main()
{
	int i=0,j=0,count=0,sum=0;
	for(i=0; i<10; i++)
	{
		for(j=0; j<10; j++)
		{
			sum=10*i+j;
			if(i==9||j==9)
				count++;
		}
	}
	printf("有%d 个9\n",count);
	return 0;
}
*/
//猜数字游戏
/*
void meaul ()
{
	printf("*******开始游戏*******\n");
	printf("*******输入数字*******\n");
	printf("*******1 play 0  退出*******\n");
}
void game()
{
	int n=rand()%100+1;
	int x=0;
	while(1)
	{
		printf("请输入要猜的数字\n");
		scanf("%d",&x);
		if(x>n)
			printf("大了\n");
		else if(x<n)
			printf("小了\n");
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}
int main()
{
	int i=0;
	srand((unsigned) time(NULL));
	do
	{
		meaul();
		//printf("请选择\n");
		scanf("%d",&i);
		switch(i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		dafault:
			printf("输入错误，请输入合法数字\n");
			break;
		}
	}while(i);
	return 0;
}
*/
//8—14
//1、完成猜数字游戏
/*
void menu()
{
	printf("猜数字游戏\n");
	printf("   1 进入  \n");
	printf("   0 退出  \n");
}
void game()
{
	int rand_num=rand()%100+1;
	int n=0;
	while(1)
	{
	  scanf("%d",&n);
	  if(n<rand_num)
		  printf("猜小了\n");
	  else if(n>rand_num)
		  printf("猜大了\n");
	  else
	  {
		  printf("恭喜你猜对了\n");
		  break;
	  }
	}
}
int main()
{
	int i=0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d",&i);
		switch(i)
		{
		case(1):
			game();
			break;
		case(0):
			printf("退出游戏\n");
			break;
		default:
			printf("请输入合法数字\n");
			break;
		}
	}while(i);
	return 0;
}
*/
//在有序数组中查找数字，返回下标，找不到返回-1
/*
int main()
{
	char a[20]="123456789";
	int left=0;
	int right=strlen(a)-1;
	char n='6';
	int mid=0;
	while(left<=right)
	{
	    mid=left+(right-left)/2;    //这句话要放到循环内部
		if(a[mid]>n)
			right=mid-1;
		else if(a[mid]<n)
			left=mid+1;
		else
		{
			printf("%d\n", mid);
			break;
		}
	}
	if(left>right)
	printf("%d",-1);
}
*/
// 编写模拟三次密码输入的场景 最多输入三次
/*
int main()
{
	int i=1;
	char a[5]="0000";
	char input[20]="0";
	while(i<4)
	{
		printf("请输入\n");
		scanf("%s",input);
		if(0==strcmp(input,a))
		{
			printf("密码正确\n");
			break;
		}
		i++;
	}
	if(i==4)
		printf("退出程序\n");
	return 0;
}
*/
// 接受键盘字符，如果是小写，则输出大写；大写则输出小写，数字则不输出
/*
int main()
{
	char a[20]="0";
	char b[20]={0};
	int i=0,j=0;
	gets(a);
	for(i=0; a[i]!='\0'; i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			a[i]=a[i]+32;
			b[j]=a[i];
			j++;
		}
		else if(a[i]>='a'&&a[i]<='z')
		{
			a[i]=a[i]-32;
			b[j]=a[i];
			j++;
		}
	}
	puts(b);
}
*/

//int main()
//{
//	
//		int a=0;
//			char b[20]={0};
//		int c=0;
//	c=scanf("%d %s",&a,b);
//	printf("%d %s\n",a,b);
//	printf("%d\n",c);
//}

//8-16   数组 排序
// 冒泡
/*
void bubble_sort(int a[],int n)
{
	int i=0;
	int t=0;
	int flag=0;
	for(i=0; i<n-1; i++)  //比较n-1趟   0—>n-2  看有几个个元素，n个元素比较n-1趟，最后有一次不用比
	{
		int j=0;
		for(j=0; j<n-i-1; j++)   //每趟比较n-i-1次，看剩下几个元素没排，剩下n-i个元素比较n-i-1次（i=0)，看的是剩下几对
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				flag=1;
			}
			if(flag==0)
				break;           //————————>表示如果发生了交换，flag改变，若没有发生交换，flag不变，直接退出，节省了资源
		}
	}
}
int main()
{
	int a[10]={1,5,3,2,4,8,6,7,9};
	int n=0,i=0;
	n=sizeof(a)/sizeof(a[0]);
	bubble_sort(a,n);
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
*/
//选择排序
/*
void select_sort(int a[],int n)
{
	int i=0;
	int k=0;
	int t=0;
	int j=0;
	for(i=0; i<n-1; i++)
	{
		k=i; 
	    for(j=k+1; j<n-i; j++)         //选择排序是选择出最大的放在第一个位置，设a[k]最大，则a[k]与之后的所有元素比较，若有的
	     {                              //的元素a[i]大于a[k],记住i的位置，k=i,最后将这两个位置进行交换。
		      if (a[k]<a[j]) 
		       k=j;
	     }
		if(k!=i)
		{
			t=a[k];
			a[k]=a[i];
			a[i]=t;
		}
	}
}
int main()
{
	int a[10]={1,5,3,2,4,8,6,7,9,0};
	int n=0,i=0;
	n=sizeof(a)/sizeof(a[0]);
	select_sort(a,n);
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
*/
//桶排
/*
int main()
{
	int a[]={2,5,4,6,1,7,8,9,4,5,4};
	int n=sizeof(a)/sizeof(a[0]);
	int i=0;
	int b[10]={0};   //不能是b[9]={0},因为是b[9]的话只能有0—8个桶，没有第9个桶，也就不能装下9
	for(i=0; i<n;i++)
	{
		b[a[i]]++;
	}
	for(i=0; i<10; i++)
	{
		printf("有%d个%d\n",b[i],i);
	}
	return 0;
}
*/
//内插法
/*
void insert (int arr[],int n)
{
	int k=arr[n];
	while(k<arr[n-1])
	{
		arr[n]=arr[n-1];               //定义怎么插，先选择一个数k，和它之前的数比较，如果k<前一个数，就将前一个数移到k所在的位置，
		n--;                            //一直这样找下去，找到第一个数为止
		if(n==0)
			break;
	}
	arr[n]=k;
}
void insert_sort(int arr[],int n)    
{
	int i=0;
	for(i=1; i<n; i++)      //从i=1开始时因为如果从第零个位置开始，只有一个的话就没有必要排序
	{
		insert(arr,i);
	}
}
int main()
{
	int i=0;
	int arr[10]={2,1,5,4,9,7,8,3,6,0};
	insert_sort(arr,10);
	for(i=0; i<10; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
*/
// 8-18作业    运用递归和非递归的方法求斐波那契数  1 1 2 3 5 8 13 21 34 
/*
int fiber(int i)
{
    if(i<=2)
		return 1;
	else
	{
		return fiber(i-1)+fiber(i-2);
	}
}
int main()
{
   int n=0;
   int i=0;
   scanf("%d",&i);
   n=fiber(i);
   printf("%d \n",n);
   return 0;
}
*/
/*
int fiber(int i)
{
	int a=1,b=1,c=0,n=2;
    if(i<=2)
		return 1;
	while(n!=i)
	{
		c=a+b;
		a=b;
		b=c;
		n++;
	}
	return c;
}
int main()
{
   int n=0;
   int i=0;
   scanf("%d",&i);
   n=fiber(i);
   printf("%d \n",n);
   return 0;
}
*/
//2.编写一个函数实现n^k，使用递归实现 
/*
int mul(int n,int k)
{
	if(k==1)
		return n;
	 return mul(n,k-1)*n;
}
int main()
{
	int n=0,k=0,r=0;
	scanf("%d %d",&n,&k);
	r= mul(n,k);
	printf("%d\n",r);
	return 0;
}
*/
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
//例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
/*
int digitsum(int n)
{
	static int sum=0;   //每次递归的时候sum都会变为0；最后一步sum=0,sum=0+9=9; 递归的时候要记得利用static
	if(n>9)
	{
		digitsum(n/10);
	}
	sum=sum+n%10;  //这里还是n,不是n/10
	return sum;
}
int main()
{
	int n=0;
	int sum=0;
	scanf("%d",&n);
	sum=digitsum(n);
	printf("%d\n",sum);
}
*/
//4. 编写一个函数 reverse_string(char * string)（递归实现） 实现：将参数字符串中的字符反向排列。 
//要求：不能使用C函数库中的字符串操作函数。
/*
void reverse(char* a)
{
	if(*a!='\0')
	{
		reverse(a+1);
		printf("%c ",*a);
	}
}
int main()
{
	char a[20]={0};
	gets(a);
	reverse(a);
}
*/
//5.递归和非递归分别实现strlen
/*
int my_strlen(char a[])
{
	if(a=='\0')
		return 0;
	return 1+strlen(a+1);
}
int main()
{
	int n=0;
	char a[7]="asdasf";
    n=my_strlen(a);
	printf("%d\n",n);	
}
*/
/*
int my_strlen(const char* a)
{
	int i=0;
	while(*a!='\0')
	{
		i++;
		a++;
	}
		return i;
}
int main()
{
	int n=0;
	char* p="asdweasf";
    n=my_strlen(p);
	printf("%d\n",n);	
}
*/
//6.递归和非递归分别实现求n的阶乘
/*
int mul(int n)
{
	if(n<=1)
		return 1;
	return n*mul(n-1);
}
int main()
{
	int n=0,r=0;
	scanf("%d",&n);
	r=mul(n);
	printf("%d\n",r);
}
*/
/*
int mul(int n)
{
	int sum=1;
	while(n)
	{
		sum=sum*n;
		n--;
	}
	return sum;
}
int main()
{
	int n=0,r=0;
	scanf("%d",&n);
	r=mul(n);
	printf("%d\n",r);
}
*/
//7.递归方式实现打印一个整数的每一位 
/*
void print(int n)
{
	if(n>9)
		print(n/10);
	printf("%d\n",n%10);
}
int main()
{
	int n=0;
	scanf("%d",&n);
	print(n);
	return 0;
}
*/
//编写一个函数 reverse_string(char * string)（递归实现） 实现：将参数字符串中的字符反向排列。 要求：不能使用C函数库中的字符串操作函数。
/*
char* reverse(char* a)
{
	char t;
	int n=strlen(a);
	if(*a=='\0')
		return NULL;
	if(n>1)
	{
		t=a[0];
		a[0]=a[n-1];
		a[n-1]='\0';  //最后一个元素赋值为\0，已经交换就不在处理了
		reverse(a+1);
		a[n-1]=t;
	}
}
int main()
{
	char a[20]={0};
	gets(a);
	reverse(a);
	puts(a);
}
*/
 