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
	printf("这是排序前的程序:\n");
	while(k<i)
	{
		printf("%d ",a[k]);
		k++;
	}
	printf("\n");
	int min=0;
	int b;
	for(j=0;j<i-1;j++)
	{
		min=j;
		for(l=j;l<i;l++)
		{
			if(a[min]>a[l])
			{
				min=l;
			}
		}
		if(min!=j)
		{
			b=a[min];
			a[min]=a[j];	
			a[j]=b;
		}



	}
	k=0;
	printf("下面是排序后的数组：\n");
	while(k<i)
	{
		printf("%d ",a[k]);
		k++;
	}
	printf("\n");
	t2=time(NULL);
	printf("总共用时%d秒\n",t2-t1);
	return 0;
}

