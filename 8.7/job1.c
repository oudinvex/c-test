#include<stdio.h>
#include<stdlib.h>
struct book
{
	int num;
	char name[20];
	char sex[6];
	float eye;
	char add[100];
};
int main()
{	int i,j;
	struct book s[4]={	
		{1,"赵","男",4.5,"湖北"},
		{2,"钱","男",6.5,"广州"},
		{3,"孙","男",1.5,"深圳"},
		{4,"李","男",2.5,"上海"}
	};
	for(i=0;i<4;i++)		
		printf("%d %s %s %.1f %s\n",s[i].num,s[i].name,s[i].sex,s[i].eye,s[i].add);
	struct book b[1];
	for(i=0;i<=4;i++)
	{
		for(j=i;j<3;j++)
			if(s[j].eye<s[j+1].eye)
			{
				b[0]=s[j];
				s[j]=s[j+1];
				s[j+1]=b[0];
			}
	}
	for(i=0;i<4;i++)		
		printf("%d %s %s %.1f %s\n",s[i].num,s[i].name,s[i].sex,s[i].eye,s[i].add);
	return 0;
}
