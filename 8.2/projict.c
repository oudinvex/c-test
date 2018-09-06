#include<stdio.h>
int main()
{
	int p,j;
	j=0;
	while(p=(int*)malloc(sizeof(int)*1000000))
{
	j++;

printf("%d  ",j);
}


	return 0;
}
