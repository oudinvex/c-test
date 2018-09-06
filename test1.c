#include<stdio.h>
int main()
{
	FILE* FP= fopen("./file","r");
	if(FP==NULL)
	{		printf("文件不存在\n");
		return 0;
	}
	int i;
	for(i=0;i<20;i++)
	{  
		fprintf(FP,"%d ",i);  
	}
	fclose(FP);  
	return 0;
}
