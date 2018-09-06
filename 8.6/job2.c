#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int sum();
int main()
{	int j,k;
	int i=0;
	int a[1000];
	printf("请输入任意数，输入0结束：\n");
	while(1)
	{
		scanf("%d",&j);
		if(j==0)
			break;
		a[i]=j;
		i++;
	}
	i=sum(a,i);
	printf("和为%d\n",i);


	return 0;
}
int sum(int a[],int n)
{
	int c=0;
	for(;n>0;n--)
	{
		c=c+*(a+n-1);
	}
	return c;

}



