#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
//8_10  ��ҵ
//1����ӡ100-200֮�������
/*
int main()
{
	int i;
	int j;
	int flag=2;   //��¼i��������������
	for(i=100;i<200;i++)
	{
		for(j=2;j<=sqrt(i);j++)    // ���Ի���Ϊj<=sqrt(i)
	  {	
		if(i%j!=0)
				{
	                 flag++;    //ֻ�ܱ�1��������������������
		        }
	   }
		if(flag==j)
			printf("%d ",i);
		flag=2;
	}
}
*/


//2������˷��ھ���
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
//3���ж�1000-2000��֮�������
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


//8_11��ҵ
//  1 ��������
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
// 2����������������������
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
//3����10�������е����ֵ
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
//3�����������Ӵ�С���
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
//5���������������Լ��
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
	printf("%d��%d���Լ����%d\n",a,b,t);
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
a   Դ�� 00000000   00000000   00000000   00000000   ~��λȡ��
~a  Դ�� 11111111   11111111   11111111   11111111   
    ���� 10000000   00000000   00000000   00000000 
	���� 10000000   00000000   00000000   00000001   ��һλΪ����λ 1 ��ʾ�����������Ƿ����1  
*/
//8��12  
// ������A�����ݺ�����B�����ݽ��н���
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
//����1/1-1/2+1/3-1/4+1/5....+1/99-1/100
/*
int main()
{
	float i=1;
	float sum=0;
	for(i=1; i<=100; i++)
	{
		sum=sum+(1/i)*pow((double)-1,(double)(i-1));//pow���ص���double���ͣ���������Ҳ��double���ͣ�intҪǿ��ת��Ϊdouble
	}
	printf("%f\n",sum);
	return 0;
}
*/
//3����һ��1-100�����������г��ֶ��ٴ�����9
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
	printf("��%d ��9\n",count);
	return 0;
}
*/
//��������Ϸ
/*
void meaul ()
{
	printf("*******��ʼ��Ϸ*******\n");
	printf("*******��������*******\n");
	printf("*******1 play 0  �˳�*******\n");
}
void game()
{
	int n=rand()%100+1;
	int x=0;
	while(1)
	{
		printf("������Ҫ�µ�����\n");
		scanf("%d",&x);
		if(x>n)
			printf("����\n");
		else if(x<n)
			printf("С��\n");
		else
		{
			printf("��ϲ��¶���\n");
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
		//printf("��ѡ��\n");
		scanf("%d",&i);
		switch(i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		dafault:
			printf("�������������Ϸ�����\n");
			break;
		}
	}while(i);
	return 0;
}
*/
//8��14
//1����ɲ�������Ϸ
/*
void menu()
{
	printf("��������Ϸ\n");
	printf("   1 ����  \n");
	printf("   0 �˳�  \n");
}
void game()
{
	int rand_num=rand()%100+1;
	int n=0;
	while(1)
	{
	  scanf("%d",&n);
	  if(n<rand_num)
		  printf("��С��\n");
	  else if(n>rand_num)
		  printf("�´���\n");
	  else
	  {
		  printf("��ϲ��¶���\n");
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
		printf("������:>");
		scanf("%d",&i);
		switch(i)
		{
		case(1):
			game();
			break;
		case(0):
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������Ϸ�����\n");
			break;
		}
	}while(i);
	return 0;
}
*/
//�����������в������֣������±꣬�Ҳ�������-1
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
	    mid=left+(right-left)/2;    //��仰Ҫ�ŵ�ѭ���ڲ�
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
// ��дģ��������������ĳ��� �����������
/*
int main()
{
	int i=1;
	char a[5]="0000";
	char input[20]="0";
	while(i<4)
	{
		printf("������\n");
		scanf("%s",input);
		if(0==strcmp(input,a))
		{
			printf("������ȷ\n");
			break;
		}
		i++;
	}
	if(i==4)
		printf("�˳�����\n");
	return 0;
}
*/
// ���ܼ����ַ��������Сд���������д����д�����Сд�����������
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

//8-16   ���� ����
// ð��
/*
void bubble_sort(int a[],int n)
{
	int i=0;
	int t=0;
	int flag=0;
	for(i=0; i<n-1; i++)  //�Ƚ�n-1��   0��>n-2  ���м�����Ԫ�أ�n��Ԫ�رȽ�n-1�ˣ������һ�β��ñ�
	{
		int j=0;
		for(j=0; j<n-i-1; j++)   //ÿ�˱Ƚ�n-i-1�Σ���ʣ�¼���Ԫ��û�ţ�ʣ��n-i��Ԫ�رȽ�n-i-1�Σ�i=0)��������ʣ�¼���
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				flag=1;
			}
			if(flag==0)
				break;           //����������������>��ʾ��������˽�����flag�ı䣬��û�з���������flag���䣬ֱ���˳�����ʡ����Դ
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
//ѡ������
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
	    for(j=k+1; j<n-i; j++)         //ѡ��������ѡ������ķ��ڵ�һ��λ�ã���a[k]�����a[k]��֮�������Ԫ�رȽϣ����е�
	     {                              //��Ԫ��a[i]����a[k],��סi��λ�ã�k=i,���������λ�ý��н�����
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
//Ͱ��
/*
int main()
{
	int a[]={2,5,4,6,1,7,8,9,4,5,4};
	int n=sizeof(a)/sizeof(a[0]);
	int i=0;
	int b[10]={0};   //������b[9]={0},��Ϊ��b[9]�Ļ�ֻ����0��8��Ͱ��û�е�9��Ͱ��Ҳ�Ͳ���װ��9
	for(i=0; i<n;i++)
	{
		b[a[i]]++;
	}
	for(i=0; i<10; i++)
	{
		printf("��%d��%d\n",b[i],i);
	}
	return 0;
}
*/
//�ڲ巨
/*
void insert (int arr[],int n)
{
	int k=arr[n];
	while(k<arr[n-1])
	{
		arr[n]=arr[n-1];               //������ô�壬��ѡ��һ����k������֮ǰ�����Ƚϣ����k<ǰһ�������ͽ�ǰһ�����Ƶ�k���ڵ�λ�ã�
		n--;                            //һֱ��������ȥ���ҵ���һ����Ϊֹ
		if(n==0)
			break;
	}
	arr[n]=k;
}
void insert_sort(int arr[],int n)    
{
	int i=0;
	for(i=1; i<n; i++)      //��i=1��ʼʱ��Ϊ����ӵ����λ�ÿ�ʼ��ֻ��һ���Ļ���û�б�Ҫ����
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
// 8-18��ҵ    ���õݹ�ͷǵݹ�ķ�����쳲�������  1 1 2 3 5 8 13 21 34 
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
//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ�� 
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
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� 
//���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
/*
int digitsum(int n)
{
	static int sum=0;   //ÿ�εݹ��ʱ��sum�����Ϊ0�����һ��sum=0,sum=0+9=9; �ݹ��ʱ��Ҫ�ǵ�����static
	if(n>9)
	{
		digitsum(n/10);
	}
	sum=sum+n%10;  //���ﻹ��n,����n/10
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
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� ʵ�֣��������ַ����е��ַ��������С� 
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
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
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 
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
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� ʵ�֣��������ַ����е��ַ��������С� Ҫ�󣺲���ʹ��C�������е��ַ�������������
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
		a[n-1]='\0';  //���һ��Ԫ�ظ�ֵΪ\0���Ѿ������Ͳ��ڴ�����
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
 