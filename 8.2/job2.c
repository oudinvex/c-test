#include<stdio.h>
void change(char *a,char*b);
int main()
{	
	char a[10000];
	char b[10000];
	printf("瞎几把敲吧您那\n");
	scanf("%s",&a);
	printf("字符串一为：%s",a);
	change(b,a);

	printf("字符串二为：%s\n",b);

	return 0;
}


void change(char* d, char* e)
{
	int c=0;
		for(;c<10;d++)
		{
			*d=*e;
			e++;
			if(*d=='\0')
c++;	
			}
		
	
}
