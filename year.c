#include<stdio.h>
	
	int main()
{
	int i;
	printf("请输入年份：\n");
	scanf("%d",&i);
	if((i%4)==0)
	{	if((i%100)==0)
		{
		if((i%400)==0)
			{
			printf("是闰年\n");
			}
		else
		printf("不是闰年\n");
		}
	else
	printf("是闰年\n");
	}		
	else
	{
	printf("不是闰年\n");
	}
}
