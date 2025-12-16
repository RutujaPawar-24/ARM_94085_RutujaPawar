#include<stdio.h>
#define bv(n) (1<<n)
int main()
{
    unsigned char reg =0X08;
    if(reg & bv(3))
        printf("Bit is set");
    else
        printf("Bit is not set");

}