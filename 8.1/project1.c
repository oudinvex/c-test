#include<stdio.h>
#include<string.h>
 int main()
{	int i=3;
	int j=4;
	char a[i][j];
	scanf("%s",a);
	printf("%s",a);
for (;i<3;i++)
for (j=4;j>0;j--)
printf("%d",a[i-1][j-1]);
printf("\n");


	return 0;
}
