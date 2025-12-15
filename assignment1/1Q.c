#include<stdio.h>
int main()
{
    char x[10];
    printf("Enter a binary no.");
    scanf("%s",x);
    int count=0;
    for(int i=0;x[i]!='\0';i++)
    {
        if(x[i]=='1')
            count++;
    }
    printf("count=%d",count);
    return 0;
}