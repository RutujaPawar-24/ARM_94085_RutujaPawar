#include<stdio.h>
int main()
{
    int x,y,i;
    int z[10];
    printf("Enter a number:");
    scanf("%d",&x);
    for(i=0;x!=0;i++)
    {   y=x/2;
        z[i]=x%2;
        x=y;
    }
    do
    {
        printf("%d",z[i-1]);
        i--;
    }while(i!=0);
}