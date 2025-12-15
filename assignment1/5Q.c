#include<stdio.h>
int main()
{
    char x;
    printf("Enter the character:");
    scanf("%c",&x);
    if((x>=65 && x<=90) ||  ( x>=97 && x<=122))
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
