#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"md5.h"
int main(int argc,char** argv)
{
	int filesize;
	char* buffer=NULL;
	FILE* fp=fopen(argv[1],"rb");
	fseek(fp,0L,SEEK_END);
	filesize=ftell(fp);
	rewind(fp);
	buffer=(char*)malloc(filesize);
	if(buffer==NULL)
	{
		fputs("memory error",stderr);
		return 0;
	}
	fread(buffer,1,filesize,fp);
	printf("%s\n",md5_encrypt(buffer,filesize));
	free(buffer);
	fclose(fp);
	return 0;
}
