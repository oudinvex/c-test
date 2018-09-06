#include <stdio.h>
#include <stdlib.h>
 
int main()
{	int k,j;
	printf("请输入十个数\n");
	int array[10];
	for(k=0;k<=9;k++)
{	
	printf("请输入一个数\n");
	scanf("%d",&j);
	array[k]=j;

}	
	int max=array[0];
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}
	}
	printf("最大值为:%d\n",max);
	return 0;
}
