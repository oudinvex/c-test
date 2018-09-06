#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"lib.h"
struct s{
	int id;
	char name[40]; 
}m[10000],n;
void file_in();
void file_cat();
int main()
{	
	char a[100];
	printf("查询/添加：\n");
	scanf("%s",&a);
	if(strcmp(a,"查询")==0)
		file_cat();
	else if(strcmp(a,"添加")==0)
	{
		file_in();
	}
	else
	{
		printf("请输入正确命令\n");
	}
	;
	cpucat();
	return 0;
}

void file_in()
{	FILE* fp=fopen("./studentdata","a+");
	if(fp==NULL)
	{
		printf("文件不存在\n");
		exit(1);
	}
	int i=0;
	int j;
	char q[40];
	printf("请按下列格式输入信息，输入0结束：\nid 姓名\n");
	for(;i<10000;i++)
	{	
		scanf("%d %s",&m[i].id,&m[i].name);
		rewind(fp);
		while(feof(fp)==0)
		{
			fscanf(fp,"%d %s ",&j,&q);
			if(m[i].id==j)
			{
				printf("该学号已存在！\n");
				exit(1);
			}
		}
		if(m[i].id==0)
		{
			fclose(fp);
			printf("添加成功\n");
			exit(1);	
		}
		fprintf(fp,"%d %s ",m[i].id,m[i].name);		
	}
}
void file_cat()
{	int i;
	FILE* fp=fopen("./studentdata","r");
	if(fp==NULL)
	{printf("文件不存在\n");
		exit(1);}
	printf("请输入学号：\n");
	scanf("%d",&i);
	while(n.id!=i)
	{
		fscanf(fp,"%d %s ",&n.id,&n.name);
		if(feof(fp)==0)
		{
			break;
		}
	}
	printf("学号%d 姓名%s\n",n.id,n.name);
	fclose(fp);
}
