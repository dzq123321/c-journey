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
//结构体需要字节对齐，vs默认的对齐数位8，linux为4
/*字节对齐，从结构体的第一个成员开始，每个成元需要对齐的字节数都是要对齐到对齐数的整数倍
对齐数是（它自身的大小和默认大小8中的最小值进行比较）
最后总大小需要是最大对齐数的整数倍
struct S
{
char c1;  //对齐数为1  所以为  0-》0   1
char c2;  //对齐数为1  偏移量为1 所以为  1-》1    1
int i;    //对齐数为4，偏移量为2，便宜量要为4的倍数，1+1+2，从第四个地址开始  所以为  4-》7 总的偏移量为8
}
*/
//offsetof  计算结构体元素距首地址的偏移量
//自定义offsetof（他是一个宏）
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
//1.编写函数： 
//unsigned int reverse_bit(unsigned int value); 
//这个函数的返回值value的二进制位模式从左到右翻转后的值。 
//如： 
//在32位机器上25这个值包含下列各位： 
//00000000000000000000000000011001 
//翻转后：（2550136832） 
//10011000000000000000000000000000 
//程序结果返回： 
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
//4. 有一个字符数组的内容为:"student a am i", 
//请你将数组的内容改为"i am a student". 
//要求： 
//不能使用库函数。 
//只能开辟有限个空间（空间个数和字符串的长度无关）。  //先逆序整个数组，在逆序其中的每个单词
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
//  逆序整个字符串
//	inv(a,a+n-1);
//	//在逆序每个单词
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
//1.一个数组中只有两个数字是出现一次， 
//其他所有数字都出现了两次。 
//找出这两个数字，编程实现。 
//void find_t (int arr[],int n)
//{
//	int i=0;
//	int num1=0;
//	int a=0,b=0;
//	for(i=0; i<n; i++)
//	{
//		num1=num1^arr[i];//找出那两个不同数的异或之后的值num1
//	}
//	int flag=0;
//	for(i=0; i<32; i++)
//	{
//		if(((num1>>i)&1)==0)//找出num1低位第一个1的位置，并以此为标志，将原数组分为两部分
//			flag++;
//		else 
//			break;
//	}
//	for(i=0; i<n; i++)
//	{
//		if(((arr[i]>>flag)&1)==1)//flag位是1
//		{
//			a=a^arr[i];
//		}
//		else                //flag位不是1
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