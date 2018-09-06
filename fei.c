#include<stdio.h>

int main()
{
	int i,j;
	i=j=1;
	while (j<100)
	{
		printf("%d %d ",i,j);
	i=i+j;
	j=j+i;

	}
printf("\n");
	return 0;
}
