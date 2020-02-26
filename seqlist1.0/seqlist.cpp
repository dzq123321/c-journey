#include "seqlist.h"
bool Seqlistisfull (Seqlist *psl)
{
	return ((psl->size) <(psl->capacity));
}
//void youroper (bool x)
//{
//	if(x==1)
//		printf("操作成功\n");
//	else
//		printf("操作失败\n");
//}
void Inint (Seqlist *psl)
{
	psl->base=(int*) malloc(sizeof(int*)*DEFAULT_SIZE);
	psl->capacity=DEFAULT_SIZE;
	psl->size=0;
}
int SEQLISTpush_back(Seqlist *psl)
{
	if(!Seqlistisfull (psl))
	{
		printf("顺序表已满，请重新选择\n");
		return 0;
	}
	else
	{
		printf("请输入->\n");
		int x=0;
		while(psl->size<psl->capacity)
		{
			scanf("%d",&x);
			psl->base[psl->size++]=x;
			if(!Seqlistisfull(psl))
			{
				printf("顺序表已满，请重新选择\n");
				return 0;
			}
			if (x=-1)
				break;
		}
		return 1;
	}
}
int Seqlistshow_list(Seqlist *psl)
{
	if(psl->size)
	{
		printf("顺序表为空\n");
		return 0;
	}
	else
	{
		int i=0;
		while(i++<(psl->size))
		{
			printf("%d ",psl->base[i]);
		}
		return 1;
	}
}