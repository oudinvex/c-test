#include<stdio.h>
#include<stdlib.h>
struct list
{
	int num;
	char name[10];
	char sex[6];
	float eye;
	char add[100];
}list;
	struct list b[5]={
		{1001,"张三","男",2.0,"湖北"},
		{1002,"李四","女",4.4,"南昌"},
		{1003,"王五","男",5.2,"海口"},
		{1004,"钱六","男",3.1,"济南"},
		{1005,"孙子","女",2.6,"北京"}	
			};
void filework();
int main()
{
	char data;
	filework();
	return 0;
}
void filework()
{	

	FILE* a=fopen("data","w+");

	int i=0;
	for(;i<5;i++)
{
	fprintf(a,"%d,%s,%s,%2f,%s",b[i].num,b[i].name,b[i].sex,b[i].eye,b[i].add);
	}
struct list c[5];
rewind(a);
while(!feof(a)) 
{ 
    fscanf(a,"%d,%s,%s,%2f,%s",c[i].num,&c[i].name,&c[i].sex,c[i].eye,&c[i].add);
    i++;}
	for(i=0;i<5;i++)
	printf(a,"%d,%s,%s,%2f,%s",c[i].num,c[i].name,c[i].sex,c[i].eye,c[i].add);
}
