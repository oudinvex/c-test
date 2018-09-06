#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct mess{
char name[100];
int mamery;
float hz;
}mess1;
int main()
{	char a[1000];
	char b[100];
	char c[100];
	char d[100];
	char e[100];
	char f[100];
	FILE* x=fopen("/proc/cpuinfo","r");
	FILE* y=fopen("/proc/meminfo","r");
	if( x == NULL || y==NULL)
	{
		printf("Cannot open file, press any key to exit!\n");
		getchar();
		return 1;
	}
	while(strcmp(a,"MHz"))
	{
		fscanf(x,"%s",&a);
		if(strcmp(a,"name")==0)
		{
			fscanf(x,"%s",&a);       
			fscanf(x,"%s",&b);       
			fscanf(x,"%s",&c);       
			fscanf(x,"%s",&d);       
			fscanf(x,"%s",&e);       
			fscanf(x,"%s",&f);       
		}
	}
	fscanf(x,"%s",&a);	
	fscanf(x,"%s",&a);
	strcpy(mess1.name,b);
	strcpy(mess1.name,c);
	strcpy(mess1.name,d);
	strcpy(mess1.name,e);
	strcpy(mess1.name,f);
	printf("%s %s",mess1.name,a);
	fclose(x);
	fclose(y);
	return 0;
}
