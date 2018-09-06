#include<stdio.h>
#include<time.h>
int main()
{
while (1<2)
{
	int i,j,k,m,n,p,z,y;
	k=time(NULL);
	j=(k+28800)%86400;
	i=j/3600;
	printf("%d:",i);
	j=j%3600;
	m=j/60;
	n=(j+1)%60;
	printf("%d:%d ",m,n);
	p=k%604800;
	p=p/86400;

if (p==4)
{printf("星期一 ");}
else if (p==5)
{printf("星期二 ");}
else if(p==6)
{printf("星期三 ");}
else if(p==0)
{printf("星期四 ");}
else if(p==1)
{printf("星期五 ");}
else if(p==2)
{printf("星期六 ");}
else if(p==3)
{printf("星期天 ");}
	printf("\n");
	y=time(NULL);
	for (z=time(NULL);z==y;y=time(NULL))
	;
	system("clear");
	}
	return 0;
}
