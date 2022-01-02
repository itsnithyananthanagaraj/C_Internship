#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,A,B,C;
  printf("\n\t Enter the Value of A B : ");
  scanf("%d%d",&a,&b);
  A=(pow(a,3))+(pow(b,3))+(3*(pow(a,2))*b)+(3*a*(pow(b,2)));
  printf("\n\n\t (A+B)^3 is %d\n",A);
  B=(pow(a,3))-(3*pow(a,2)*b)+(3*a*pow(b,2))-(pow(b,3));
  printf("\n\t (A-B)^3 is %d\n",B);
  C=(pow(a,2))+(pow(b,2));
  printf("\n\t (A^2+B^2) is %d\n\n",C);
  return 0;
}
