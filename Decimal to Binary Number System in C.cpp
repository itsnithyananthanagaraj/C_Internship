//Decimal to Binary Number System in C

#include<stdio.h>
int main()
{
    int n,c,k;
    printf("\n Enter an integer in decimal number system : ");
    scanf("%d",&n);
    printf("\n %d in binary number system is : ",n);
    for(c=7;c>=0;c--)
    {
        k=n>>c;
        if(k&1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    return 0;
}
