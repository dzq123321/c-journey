#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stddef.h>
#include<math.h>
//int main()
//{
//	char a[]="qer,ete eter,zxc zc";
//	char src[20];
//	strcpy(src,a);
//	char* str=NULL;
//	char* s=",,  ";
//	for(str=strtok(src,s);str!=NULL;str=strtok(NULL,s))
//	{
//		printf("%s\n",str);
//	}
//}
//�ṹ����Ҫ�ֽڶ��룬vsĬ�ϵĶ�����λ8��linuxΪ4
/*�ֽڶ��룬�ӽṹ��ĵ�һ����Ա��ʼ��ÿ����Ԫ��Ҫ������ֽ�������Ҫ���뵽��������������
�������ǣ�������Ĵ�С��Ĭ�ϴ�С8�е���Сֵ���бȽϣ�
����ܴ�С��Ҫ������������������
struct S
{
char c1;  //������Ϊ1  ����Ϊ  0-��0   1
char c2;  //������Ϊ1  ƫ����Ϊ1 ����Ϊ  1-��1    1
int i;    //������Ϊ4��ƫ����Ϊ2��������ҪΪ4�ı�����1+1+2���ӵ��ĸ���ַ��ʼ  ����Ϊ  4-��7 �ܵ�ƫ����Ϊ8
}
*/
//offsetof  ����ṹ��Ԫ�ؾ��׵�ַ��ƫ����
//�Զ���offsetof������һ���꣩
//#define   Offsetof(s,m)   size_t (( &((S*)0)->m))  
//struct S
//{
//	char a;//0
//	char b;//1
//	int c;//4
//}stu;
//int main()
//{
//	printf("%d \n",Offsetof(struct S,a));
//	printf("%d \n",Offsetof(struct S,b));
//	printf("%d \n",Offsetof(struct S,c));
//}
//1.��д������ 
//unsigned int reverse_bit(unsigned int value); 
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ�� 
//�磺 
//��32λ������25���ֵ�������и�λ�� 
//00000000000000000000000000011001 
//��ת�󣺣�2550136832�� 
//10011000000000000000000000000000 
//���������أ� 
//2550136832
//unsigned int reverse_bit(unsigned int value)
//{
//    int i=0;
//	unsigned int n=0;
//	for (i = 0; i < 32; i++)
//	{
//		n<<=1;//n=n<<1   (1)
//		n|=((value>>i)&1);//n=n|((value>>i)&1)  (1)
//		//n+=((value>>i)&1)*pow(2.0,31-i);(2)
//		//n+=((value>>i)&1)*(1<<(31-i));  (3)
//	}
//	return n;
//}
//int main()
//{
//	int n=25;
//	int m=0;
//	m=reverse_bit(25);
//	printf("%u\n",m);
//}
//4. ��һ���ַ����������Ϊ:"student a am i", 
//���㽫��������ݸ�Ϊ"i am a student". 
//Ҫ�� 
//����ʹ�ÿ⺯���� 
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���  //�������������飬���������е�ÿ������
//int my_strlen(const char* a)
//{
//	int count=0;
//	assert(a);
//	while(*a++)
//	{
//		count++;
//	}
//	return count;
//}
//void inv(char* p,char* q)
//{
//	char t=0;
//	while(p<q)
//	{
//		t=*p;
//		*p=*q;
//		*q=t;
//		p++;
//		q--;
//	}
//}
//void reverse(char* a,int n)
//{
//  ���������ַ���
//	inv(a,a+n-1);
//	//������ÿ������
//	char* p=a;
//	char* q=a;
//	while(*q)
//	{
//		while(*q!=' '&&*q!='\0')
//		{
//			q++;
//		}
//		inv(p,q-1);
//		if(*q=='\0')
//		{
//			break;
//		}
//		p=q+1;
//		q++;
//	}
//}
//int main()
//{
//	char a[]="student a am i";
//	int n=my_strlen(a);
//	reverse(a,n);
//	puts(a);
//}
//1.һ��������ֻ�����������ǳ���һ�Σ� 
//�����������ֶ����������Ρ� 
//�ҳ����������֣����ʵ�֡� 
//void find_t (int arr[],int n)
//{
//	int i=0;
//	int num1=0;
//	int a=0,b=0;
//	for(i=0; i<n; i++)
//	{
//		num1=num1^arr[i];//�ҳ���������ͬ�������֮���ֵnum1
//	}
//	int flag=0;
//	for(i=0; i<32; i++)
//	{
//		if(((num1>>i)&1)==0)//�ҳ�num1��λ��һ��1��λ�ã����Դ�Ϊ��־����ԭ�����Ϊ������
//			flag++;
//		else 
//			break;
//	}
//	for(i=0; i<n; i++)
//	{
//		if(((arr[i]>>flag)&1)==1)//flagλ��1
//		{
//			a=a^arr[i];
//		}
//		else                //flagλ����1
//			b=b^arr[i];
//	}
//	printf("a=%d,b=%d\n",a,b);
//}
//int main()
//{
//	int arr[]={1,1,2,2,5,7};
//	int n=sizeof(arr)/sizeof(sizeof(arr[0]));
//	find_t(arr,n);
//}