#include<stdio.h>
int main()
{
    char x;
    printf("Enter the character:");
    scanf("%c",&x);
    if((x>='A' && x<='Z') ||  ( x>='a' && x<='z'))
    {
        printf("Alphabets are present!!\n");
        //and
        int y=x^32;
        printf("%d",y);  
    }
    else
    {
        printf("Alphabets are not present!!");
    }
}