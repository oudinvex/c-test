#include<stdio.h>
int main()
{
	int i,j;
	printf("请输入一个数：\n");
	scanf("%d",&i);
	printf("请输入一个数：\n");
	scanf("%d",&j);
	printf("i=%d,j=%d\n",i,j);
	int k;
	k=(i+j+abs(i-j))/2;
	printf("较大的数%d\n",k);
	return 0;
}
