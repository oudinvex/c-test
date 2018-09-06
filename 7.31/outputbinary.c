#include <stdio.h>
void putbinary(int n) 
{
    int bits = sizeof(n)*8;
    printf("bits %d\n",bits);
    while (bits-- > 0)
    {
        printf("%d",n>>bits&1);
        if (bits%4==0) {
            printf(" ");
        }
    }
    printf("\n");
}
