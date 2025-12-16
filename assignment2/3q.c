#include<stdio.h>
int main()
{
    unsigned int reg = 0xABCD;
    unsigned int  value;
    value=(reg>>0)& 0X000F;
    printf("Lower bits of lower byte:%X",value);
    value=(reg>>4)& 0X000F;
    printf("\nUpper bits of lower byte:%X",value);
}