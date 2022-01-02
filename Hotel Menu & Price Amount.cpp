#include <stdio.h>
int main()
{
 int a,qty,rate,total;
 printf("\n MENU CARD \n\n\n Select your food \n\n 1.Noodle \n 2.Rice  \n 3.Grill / Tandori \n 4.Briyani \n\n");
 scanf("\t%d",&a);
 switch(a)
 {
  case 1:
    printf("\n You have selected noodle.\n\n Enter the quantity :");
    scanf("%d",&qty);
    rate=30;
    total=qty*rate;
    printf("\n Total amount :%d",total);
    printf("\n\n");
    break;
  case 2:
    printf("\n You have selected rice.\n\n Enter the quantity :");
    scanf("%d",&qty);
    rate=20;
    total=qty*rate;
    printf("\n Total amount :%d",total);
    printf("\n\n");
    break;
  case 3:
    printf("\n You have selected Grill / Tandori.\n\n Enter the quantity :");
    scanf("%d",&qty);
    rate=65;
    total=qty*rate;
    printf("\n Total amount :%d",total);
    printf("\n\n");
    break;
  case 4:
    printf("\n You have selected briyani.\n\n Enter the quantity :");
    scanf("%d",&qty);
    rate=80;
    total=qty*rate;
    printf("\n Total amount :%d",total);
    printf("\n\n");
    break;
  default:
    printf("\n Invalid Option...!!");
    printf("\n\n");
    break;
 }
return 0;
}
