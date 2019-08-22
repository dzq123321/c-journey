#include<stdio.h>
#if 0
void swap (int arr[],int j,int i)
{
	int t=arr[i];
	arr[i]=arr[j];
	arr[j]=t;
}
void heapify (int tree[],int n,int i)
{
		if (i>=n)
			return;
	int c1=2*i+1;
	int c2=2*i+2;
	int max=i;
	if(c1<n && tree[c1]>tree[max])         //执行的是根节点不稳定，其他底下的节点都是稳定的，底层是稳定的堆
		max=c1;
    if(c2<n && tree[c2]>tree[max])
		max=c2;
	if(max!=i)
	{
		swap(tree,max,i);
	heapify(tree,n,max);
	}
}
//若节点是完全乱了
void build_heap(int tree[],int n)
{
	int last_node=n-1;
	int parent=(last_node-1)/2;
	int i;
	for(i=parent;i>=0;i--)
	{
		heapify(tree,n,i);
	}
}
//排序
void heap_sort(int tree[],int n)
{
	build_heap(tree,n);
	int i;
	for(i=n-1;i>=0;i--)
	{
		swap(tree,i,0);
		heapify(tree,i,0);
	}
}
int main()
{
	int tree[]={2,5,3,1,10,4};
    int n=6;   //6个节点,6个数
	build_heap(tree,n);
	heap_sort(tree,n);
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",tree[i]);
	}
	return 0;
}

#endif
