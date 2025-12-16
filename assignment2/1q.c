#include<stdio.h>
void print_bin(void *vp,int size);
#define bv(n) (1<<(n))
int main()
{
    unsigned char reg1=0x2A;
    //to set a bit
    reg1=(reg1|bv(4));
    printf("Afer bit set=%x",reg1);
    printf("\nBinary form:");
    print_bin(&reg1,sizeof(reg1));
    // to clear a bit
    unsigned char reg2=0x2A; 
    reg2=(reg2 & ~(bv(1)));
    printf("\nAfter clear bit=%x",reg2);
    printf("\nBinary form:");
    print_bin(&reg2,sizeof(reg2));
    //to toggle a bit-
    unsigned char reg3=0x2A;
    reg3=(reg3 ^(bv(5)));
    printf("\nAfter toggle=%x",reg3);
    printf("\nBinary form:");
    print_bin(&reg3,sizeof(reg3));
}
void print_bin(void *vp,int size)
{
    int i;
    for(i=size-1;i>=0;i--)
    {
        unsigned char mask=0X80;
        while(mask)
        {
            if(((*(char *)vp)+i) & mask)
                printf("1");
            else
                printf("0");
            mask>>=1;
        }
        printf(" ");
    }
    printf("\n");
}