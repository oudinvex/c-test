#include<stdio.h>

int main()
{
	int a[3]={3,4,5};//栈区数组
	printf("%d\n",*a);
	printf("%p\n",&a[0]);
	printf("%p\n",&a[1]);
	int i=1;
	int j=2;
	int k=3;
	int* f[4]={&i,&j,&k,a};
	printf("%d %d %d",*f[0],*(*(f+1)),*f[2]);
	return 0;
}
