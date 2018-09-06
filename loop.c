#include<stdio.h>
int loop();
int main()
{
	int a,b;
	printf("请输入一个整数：\n");
	scanf("%d",&a);
	b=loop(a);
	if(a==b)
	{
	printf("是回文数\n");
	}
	else
	printf("不是回文数\n");


	return 0;
}

int loop(int i)

{
	int j=0;
	while(i/10)
	{j=i%10+(j*10);
	i=i/10;
}
j=1%10+(j*10);

return j;
}
