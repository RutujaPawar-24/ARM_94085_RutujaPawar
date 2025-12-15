#include<stdio.h>
int main()
{
    char x[10];
    int i;
    printf("Enter a number:");
    scanf("%s",x);
    int count=0;
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]=='1')
        count++;
    }
    printf("%d",count,"\n");
    if(count%2==0)
        printf("Even parity!!");
    else
        {
            printf("\nOdd parity!!\n");
            i=0;
            if(x[i]=='0')
                x[i]='1';
            else
                x[i]='0';
            printf("MSB bit is changed\n");
            for(i=0;x[i]!='\0';i++)
            {
                printf("%c",x[i]);
            }
        }
    
}