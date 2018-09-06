#include<stdio.h>
void bubble();
int main()
{
	int a[10];
	int i;
	printf("请输入十个数：\n");
	for(i=0;i<10;i++)
{
	scanf("%d",&a[i]);
}
;
	bubble(a);
for(i=0;i<10;i++)
{
printf("%d ",a[i]);
}
printf("\n");
	return 0;
}
void bubble(int* a)
	{int o,j,temp;
while(o<10000)
{	for(j=0;j<10;j++)
{if(a[j]>a[j+1])
{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;

}
;
	}
o++;
}
}
