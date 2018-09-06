#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void roll();
int main()
{
	int j;
printf("请输入游戏难度：1? 2? 3? nt a,int b)
{
        int i,m,n,k;
        srand(time(NULL));
        i=rand();
        i=i%a;
\n自定义难度请输入4\n");
scanf("%d",&j);
if (j==1)
{
	printf("您有三次机会，数字范围为0-10");
	roll(10,3);
}
else if (j==2)
{
	printf("您有六次机会，数字范围为0-50");
	roll(51,6);
}
else if (j==3)
{
	printf("您有九次机会，数字范围为0-100");
	roll(101,9);
}
else if(j==4)
{
	int q,t;
	printf("请输入您所希望的数字范围\n");
	scanf("%d",&q);
	q=q+1;
	printf("请输入您所希望的猜测次数\n");
	scanf("%d",&t);
	roll(q,t);
}
else 
oointf("请输入正确的难度选项\n");
void roll (int a,int b)
{
        int i,m,n,k;
        srand(time(NULL));
        i=rand();
        i=i%a;
void roll (int a,int b)
{
        int i,m,n,k;
        srand(time(NULL));
        i=rand();
        i=i%a;

return 0;
}

void roll (int a,int b)
{
	int i,m,n,k;
	srand(time(NULL));
	i=rand();
	i=i%a;
for(n=0;n<b;n++)
{ 
	printf("请输入您猜的数字：\n");
	scanf("%d",&m);
	if (m==i)
{	printf("您猜对了！\n");
	goto end;
}
	else if(m<i)
	printf("数字小了！\n");
	else if(m>i)
	printf("数字大了！\n");

}
printf("您输了！答案是%d\n",i);
end:;
}
