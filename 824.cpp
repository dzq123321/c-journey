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
	printf("%u\n",c);     //�ܴ����             129�Ĳ���  1000 0001-����ӡ%u,��������  11111111 11111111 1111111 10000001  %uԭ������ͬ
	printf("%u\n",b);   //129   �����ʱ����޷���
}
*/
//1.һ��������ֻ�����������ǳ���һ�Σ� 
//�����������ֶ����������Ρ� 
//�ҳ����������֣����ʵ�֡�
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
//	2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ�� ��20Ԫ�����Զ�����ˮ�� ���ʵ�֡�
/*�����˼·���Ƚ�������Ϊm����ǰһ���е�ƿ��������Ϊ�ʼ����Ǯ��Ϊm�����Թ�����mƿ��ˮ��������������ƿ��һƿ��ˮ��
����ÿ�λ�������ˮ��Ϊm/2���ٶ�������������һ��Ϊn����һ�εĻ�������ˮ����һ��Ϊs����һ�ζһ��������Ƿ��е���ʣ��Ŀ�ƿ��
��m����ǰһ���еĿ�ƿ����=n���ϴ��»���ƿ�ӣ�+s���ϴλ���ʣ��ĵľɿ�ƿ����whileѭ��������������»���ƿ�Ӳ�Ϊ��ʱ��
��������ÿ���»�����ˮ֮�͡�*/
//int drink(int money)
//{
//	int sum=money;  //�ܵ�������
//	int m=money;  //mλ�ܿ�ƿ����
//	int n=money;   
//	int s=0;
//	while(n)
//	{
//		n=m/2;  //nΪ��һ�εĻ�������ˮ
//		s=m%2;//n����ζһ���ơ��ƿ��s���ϴζһ�������ơ��ƿ
//		m=m/2+s; //��ǰһ���еĿ�ƿ��=n���ϴ��»���ƿ�ӣ�+s���ϴλ���ʣ��ĵľɿ�ƿ
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
//3.ģ��ʵ��strcpy 
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
//4.ģ��ʵ��my_strcat(strcat 
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
//��ƽ���� a b
// (a+b)/2     a+(b-a)/2    a+(b-a)>>1  a&b+(a^b)>>2
//int main()
//{
//	int a=5;
//	int b=7;
//	printf("%d\n",(a+b)/2);
//	printf("%d\n", a+(b-a)/2  );
//	printf("%d\n",a+((b-a)>>1));
//	printf("%d\n",(a&b)+((a^b)>>1 )        );  //��&��ȡ��ַ������ʱ�� &  ���� +   ���� >>
//}  
                                                    //��&��λ������ʱ��  +  ���� >>   ����&
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