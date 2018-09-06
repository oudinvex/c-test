#include<stdio.h>
#include<time.h>

int main()
{
	int i;
	srand(time(NULL));
	i=(rand())%26+1;
	
	printf("%d号同学\n",i);
	return 0;

}
