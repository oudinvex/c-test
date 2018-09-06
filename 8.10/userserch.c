#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
 *cheater oudinvex
press 1 or 2 to use username or id to serch
press str a to serch
a[] should be larger tan 100bit;
success return0
else return1
 *
 * */
int userserch(int d,char* a)
{
	FILE* fp=fopen("/etc/passwd","r");
	if(fp==NULL)
{
	printf("no file,press any key to exit!\n");
	getchar();
	exit(1);
}
if(1==d)
{	char b[200];
while(1)
{
	if(feof(fp))
{
printf("id no found!\n");
fclose(fp);
return 1;
}
;
	fgets(b,sizeof(b),fp);
	char* c=strtok(b,":");
	strtok(NULL,":");
	strtok(NULL,":");
	if(atoi(strtok(NULL,":"))==atoi(a))
{	fclose(fp);
	printf("%s",b);
	return 0;
}
	else if(feof(fp))
{
printf("id no found!\n");
fclose(fp);
return 1;
}
}
}
else if(2==d)
{
	char b[200];
	int g;
	char e[100];
while(1)
{
	fgets(b,sizeof(b),fp);
	char* c=strtok(b,":");
	if(strcmp(a,c)==0)
{
	strtok(NULL,":");
	g=atoi(strtok(NULL,":"));
	printf("%d",g);
	fclose(fp);
	return 0;
}
	else if(feof(fp))
{
	fclose(fp);
	printf("user no found!\n");
	return 1;
}
}
}
printf("please press right command!\n");
return 1;
}
int main()
{
	char m[100];
	scanf("%s",&m);
	userserch(1,m);
	return 0;
}
