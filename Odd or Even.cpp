#include <stdio.h>
int main() 
{
    int num;
    printf("\n Enter an integer: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("\n %d is Even Number. \n\n", num);
    else
        printf("\n %d is Odd Number. \n\n", num);
    return 0;
}
