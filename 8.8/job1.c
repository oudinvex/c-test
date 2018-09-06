#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,a[10]={3,2,4,1,5,10,7,9,6,8};
	for(i=0;i<=9;i++)
	{	k=a[i];
		for(j=i;a[j-1]<k&&j!=0;j--)
		{
			a[j]=a[j-1];
		}
		a[j]=k;
	}	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}

	return 0;
}
