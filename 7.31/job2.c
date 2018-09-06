#include <stdio.h>
 
    void putBinary(int n);
int main() {
    
    int a;
    printf("请输入一个整数:");
    scanf("%d",&a);
    putBinary(a);
	int j=15;
	j=(j<<8);
	j=~j;
    a=a&j;
	int i=11;
	i=(i<<8);
	a=(a|i);
	putBinary(a);
    return 0;
}
void putBinary(int n) {
    int bits = sizeof(n)*8;
    printf("bits %d\n",bits);
    while (bits-- > 0) {
        printf("%d",n>>bits&1);
        if (bits%4==0) {
            printf(" ");
        }
    }
    printf("\n");
}
