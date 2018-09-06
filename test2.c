#include<stdio.h>


	int main()
 {
	int a,b;
	printf("请输入两个数:\n");
	scanf("%d",&a);
	scanf("%d",&b);
     int buff[2] = { a, b };
     unsigned int z = a - b;
     z = z >> 31;
	printf("%d比较大\n",buff[z]);
     return 0;
 }
