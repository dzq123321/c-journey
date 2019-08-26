#include<stdio.h>
#include<string.h>
#include<assert.h>
//strlen
//int main()
//{
//	char*str1="qwer";
//	char*str2="as";
//	 if(strlen(str2)-strlen(str1)>0)  //strlen返回的是无符号数，因为无符号数恒大于等于0，所以
//		printf("strlen(str2)-strlen(str1)>0\n");//strlen(str2)-strlen(str1)恒大于0，所以得到strlen(str2)-strlen(str1)>0
//	 else
//		 printf("hehe\n");
// }
//int my_strlen(const char* a)
//{
//	assert(a);
//	int count=0;
//	while(*a++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char a[]="qwer";
//	int n=strlen(a);
//	printf("%d\n",n);
//}
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(src&&dest);
//	char* ret=dest;
//	while(*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char a[]="qwer";
//	char b[5]={0};
//	my_strcpy(b,a);
//	printf("%s\n",b);
//}
//char* my_strcat(char* dest,const char* src)
//{
//	assert(src&&dest);
//	char* ret=dest;
//	while(*dest++)
//	{
//		;
//	}
//	dest--;
//	while(*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char a[10]="qwer";
//	char b[10]="asdf";
//	my_strcat(b,a);
//	printf("%s\n",b);
//}
//int my_strcmp(const char* dest,const char*src)
//{
//	assert(dest&&src);
//	int n=0;
//	while(*dest==*src)
//	{
//		if(*dest=='\0')
//			return 0;
//		*dest++;
//		*src++;
//	}
//	if(*dest>*src)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	char a[10]="awer";
//	char b[10]="asdf";
//	int n=0;
//	n=my_strcmp(b,a);
//	printf("%d\n",n);
//}
//char* my_strncpy1(char* dest,const char* src,int n)
//{
//	assert(src&&dest);
//	char* ret=dest;
//	while(n)
//	{
//		if(*src)
//		{
//			*dest=*src;
//			*src++;
//		}
//		else
//			*dest=0;
//		*dest++;
//		n--;
//	}
//	return ret;
//}
//char* my_strncpy2(char* dest,const char* src,int n)
//{
//	assert(src&&dest);
//	char* ret=dest;
//	while(*dest++=*src++)//先让*dest=*src，在src++,dest++,最后判断while(*dest++=*src++）
//	{
//		n--;
//	}
//	if(n)
//	{
//		while(n--)
//		{
//			*dest++='\0';
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char a[20]="qwe";
//	char b[20]="xxxxxxxx";
//	my_strncpy2(b,a,5);     //拷贝n个字符串到目标字符串，如果源字符串的长度小于n,
//	printf("%s\n",b);          //则将源字符串拷贝完后在其后面追加0，直到n个
//}
//char* my_strncat(char* dest,const char* src,int n)
//{
//	assert(dest&&src);
//	char* ret=dest;
//	while(*dest)
//	{
//		dest++;
//	}
//	while((*dest++=*src++)&&(n--))
//	{
//		;
//	}
//	*(--dest)='\0';
//	return ret;
//}
//int main()
//{
//	char a[20]="qwe";
//	char b[20]="xx\0xxxxx";
//	my_strncat(b,a,2);     
//	printf("%s\n",b);         //则将源字符串拷贝完后在其后面追加0，直到n个
//}
//实现strstr（字符查找函数）
//char* my_strstr(const char*str1,const char* str2)
//{
//	if(str2==NULL)
//		return (char*)str1;
//	char* start=(char*)str1;
//	char* p=(char*)str1;
//	char* q=(char*)str2;
//	while(*start)
//	{
//		p=start;
//		q=(char*)str2;
//		while(*p==*q)
//		{
//			p++;
//			q++;
//		}
//		if(*q=='\0')
//			return start;
//		start++;
//	}
//	if(*start=='\0')
//		return NULL;
//}
//int main()
//{
//	char str1[]="qwerttrtyu";
//	char str2[]="rty";
//	char* str3;
//	str3=my_strstr(str1,str2);
//	puts(str3);
//}
//4.实现strchr 
//char* my_strchr(const char*str,int c)
//{
//	assert(str);
//	char* p=(char*)str;
//	while(*p)
//	{
//		if(*p==c)
//			return p;
//		p++;
//	}
//	return NULL;
//}
//int main()
//{
//	char str1[]="qwerttrtyu";
//	int c='e';
//	char* str3=NULL;
//	str3=my_strchr(str1,c);
//	if(str3==NULL)
//		printf("找不到\n");
//	else
//		puts(str3);
//}
//6.实现memcpy 
//void* my_memcpy(void* dest,void* src,size_t num)
//{
//	assert(dest&&src);
//	char* p1=(char*)dest;
//	char* q1=(char*)src;
//	while(num--)
//	{
//		*p1++=*q1++;
//	}
//	return dest;
//}
//int main()
//{
//	char a[10]="qwert";
//	char b[10]="asdf";
//	my_memcpy(a,b,2);
//	puts(a);
//}
//7.实现memmove 
