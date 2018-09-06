#include<stdio.h>
union un
{
	int a;
	char s[4];
	short b;
};
int main()
{
union un abc;

abc.s[0]='a';
abc.s[1]='b';
abc.s[2]='c';
abc.s[3]='d';
printf("%d",abc.a);
	return 0;
}
