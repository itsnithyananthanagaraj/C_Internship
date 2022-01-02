#include<stdio.h>
int main()
{
    char c;
    printf("\n Enter an Alphabet : ");
    scanf("%c", &c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        printf("\n It's a Vowel");
    else if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        printf("\n It's a Vowel \n\n");
    else
        printf("\n It's a Consonant \n\n");
    return 0;
}
