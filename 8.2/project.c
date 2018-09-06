#include<stdio.h>
int main()
{
	int i=100;
	char* j=&i; 
	printf("%f\n",*(float*)&i);
	int* p=&i;
	printf("%d\n",*p);


	return 0;
}
