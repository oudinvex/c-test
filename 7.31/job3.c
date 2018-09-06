#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[53875];
	printf("瞎几把敲吧您那\n");
	scanf("%s",&a);
	i=strlen(a);
	for(;i>0;i--)
{
	printf("%c",a[i-1]);

}
	
printf("\n");
	return 0;
}

