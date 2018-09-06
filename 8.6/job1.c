#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,j,k,l,t1,t2;
	srand(time(NULL));
	int a[1000000];
	printf("你想生成多少个随机数？\n");
	scanf("%d",&i);
	t1=time(NULL);
	for(j=0;j<i;j++)
	{
		a[j]=rand()%100000;
	}
	k=0;
	printf("这是排序前的数字:\n");
	while(k<i)
	{
		printf("%d ",a[k]);
		k++;
	}
	printf("\n");
	for(j=0;j<i;j++)
	{
		for(l=0;l<i-1;l++)
		{
			if(a[l]>a[l+1])
			{
				a[l]=a[l]+a[l+1];
				a[l+1]=a[l]-a[l+1];
				a[l]=a[l]-a[l+1];
			}
		}	
	}
	k=0;
	printf("这是排序后的数字：\n");
	while(k<j)
	{
		printf("%d ",a[k]);
		k++;
	}
	printf("\n");
	t2=time(NULL);
	printf("总共用时%d秒\n",t2-t1);
	return 0;
}























