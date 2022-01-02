#include <stdio.h>
int main() 
{
   int year;
   printf("\n\n Enter a year : ");
   scanf("%d", &year);
   if (year % 400 == 0) 
   {
      printf("\n %d is a leap year. \n\n", year);
   }
   else if (year % 100 == 0) 
   {
      printf("\n %d is not a leap year. \n\n", year);
   }
   else if (year % 4 == 0) 
   {
      printf("\n %d is a leap year. \n\n", year);
   }
   else 
   {
      printf("\n %d is not a leap year. \n\n", year);
   }
   return 0;
}
