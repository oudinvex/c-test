#include<stdio.h>
#include<stdlib.h>
void sum();
int main()
{
	int i;
	printf("请输入数字：\n");
	scanf("%d",&i);
	sum(i);
	printf("\n");
	return 0;
	
}
void sum(int a)
{	

if(a>0)
{	
	sum(a/2);
	printf("%d",a%2);
}
}
