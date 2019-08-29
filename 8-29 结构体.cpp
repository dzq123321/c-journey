#include<stdio.h>
// 位段  一个字节8个比特位
/* 位段(1)只作用于int unsigned int  char  
(2)位段以int(4个字节) ，char（一个字节）开辟空间 （3）位段(很多不确定因素)不能跨平台
比如在vs中当放下第一个类型占用6个比特位，而第二个参数要占用5个比特位，不确定是否占用第一个字节剩下的比特位*/
//struct S
//{
//	char a:3;//意思是a变量只占3个比特位
//	char b:4;//意思是b变量只占4个比特位
//	char c:5;
//	char d:4;
//};
//int main()
//{
//	struct S s={0};
//	s.a=10;
//	s.b=12;
//	s.c=3;
//	s.d=4;
//	printf("%d ",sizeof(s));//3
//}
//union un1
//{
//	char c[5];
//	int i;
//};
//union un2
//{
//	short  c[7];
//	int i;
//};
//int main()
//{
//	printf("%d\n",sizeof(union un1));//8
//	printf("%d\n",sizeof(union un2));//16
//}
/*(1)数组名的意义 sizeof(数组名)，表示整个数组，计算得是整个数组的大小
   (2) &数组名 这里的数组名表示整个数组，取出的是整个数组的地址
   （3） 除此之外所有的数组名都表示首元素的地址*/
//int main()
//{
//	int a[5]={1,2,3,4,5};
//	int* ptr =(int*)(&a+1);
//	printf("%d,%d",*(a+1),*(ptr-1));  //  2 5
//	return 0;
//}
//struct test
//{
//	int num;
//	char* pc;
//	short s;
//	char a[2];
//	short sb[4];   //20个字节，short sb[4] 因为是数组，所以不需要是8的倍数，只需要是2的倍数
//}*p;
//int main()  //p位0x   00 00 00 00  考察指针加1，取决于指针的类型
//{
//	struct test s={0};
//	p=(struct test*)0x100000;
//	printf("%d\n",sizeof(s)); 
//	printf("%p\n",p+0x1);  //00 10 00 00 14 （相当于加一个结构体，20转换为16进制=14）  0+20==0+14=00 00 00 14
//	printf("%p\n",(unsigned long)p+0x1);// 00 10 00 00 01 无符号长整型，整数+1(都是16进制，所以直接加)就是10000001
//	printf("%p\n",(unsigned int*)p+0xb);//00 10 00 00 04   整型指针+1就等于+4
//	return 0;
//}
//int main()
//{
//	int a[4]={1,2,3,4};
//	int* p1=(int*)(&a+1);
//	int* p2=(int*)((int)a+1);
//	printf("%d %x",p1[-1],*p2); //4  20000000
//}
/* 这里%x打印的是地址，a表示首元素地址
a[4]的地址   01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
（int）a将a的地址强制类型转换为整数，如上，(int)a+1，因为是（int*）加一个字节从指向 01 00 00 00 改为 00 00 00 02
所以打印出来为20 00 00 00*/
//int main()
//{
//	int a[3][2]={(0,1),(2,3),(4,5)};
//	int* p;
//	p=a[0];
//	printf("%d",p[0]);  //1   逗号表达式
//}
//int main()
//{
//	char* c[]={"ENTER","NEW","POINT","FIRST"};
//	char** cp[]={c+3,c+2,c+1,c};
//	char*** cpp=cp;
//	printf("%s\n",**++cpp);
//	printf("%s\n",*--*++cpp+3);
//	printf("%s\n",*cpp[-2]+3);
//	printf("%s\n",cpp[-1][-1]+1);
//}