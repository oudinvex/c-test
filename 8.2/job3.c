#include<stdio.h>
#include"change.h"
int main()
{
	int i,j;
	printf("请输入两个数；\n");
	scanf("%d",&i);
	scanf("%d",&j);
	printf("i=%d j=%d\n ",i,j);
	change(&i,&j);
	
	printf("i=%d j=%d\n ",i,j);




	return 0;
}
