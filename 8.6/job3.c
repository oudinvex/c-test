#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("请输入一个字符串：\n");
	scanf("%s",&a);
	int i,j,k;
	j=k=0;
	char b[100];
	char c[100];
	i=strlen(a)+1;
	while(i>=0)
	{
		if((a[i]>='a')&&(a[i]<='z'))
		{
			b[j]=a[i];
			j++;
		}
		else if((a[i]>='A')&&(a[i]<='Z'))
		{
			c[k]=a[i];
			k++;
		}
		i--;
	}
	printf("%s",b);
	printf("%s\n",c);

	return 0;
}
