#include<stdio.h>
#include<string.h>

void main()
{
    char cc[17];
    printf("Enter the Credit card number");
    gets(cc);
    int length, p, sum=0;
    length=strlen(cc);
    for (int i=length-1;i>0;i-=2)
        {
        p=cc[i]*2;
        sum=sum+(p%10)+(p/10);
        }
    for (int i=length;i>0;i-=2)
        sum=sum+cc[i];
    if(sum%10==0)
        printf("credit card is valid");
    else
        printf("card is invalid");
}