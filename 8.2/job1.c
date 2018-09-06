#include<stdio.h>
int main()
{
	int i;
	printf("请输入一个数字：\n");
	scanf("%d",&i);
	char* pp1=(char*)&i;
	printf("四个字节单元内容为：%x %x %x %x\n",*pp1,*(pp1+1),*(pp1+2),*(pp1+3));




	return 0;
}
