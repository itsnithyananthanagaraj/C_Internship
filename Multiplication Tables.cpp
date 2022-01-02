#include<stdio.h>
int main()
{
  int k;
  printf("\n 1-Normal Multiplication 2-Reverse Multiplication : ");
  scanf("%d",&k);
  if(k==1)
  {
  	int i=1,j,k,n;
    printf("\n\n Enter the limit : ");
    scanf("%d",&n);
    printf("\n Enter the table's : ");
    scanf("%d",&j);
  	for(i;i<=n;i++)
    {
	  printf("\n %d * %d = %d\n\n",i,j,i*j);
    }
    return 0;
  }
  else if(k==2)
  {
  	int i,j,n=1;
    printf("\n\n Enter the limit : ");
    scanf("%d",&i);
    printf("\n Enter the table's : ");
    scanf("%d",&j);
  	for(i;i>=n;i--)
    {
	  printf("\n %d * %d = %d\n\n",i,j,i*j);
    }
    return 0; 
  }
  else
  {
  	printf("\n Please Enter your valid Option..!! \n\n");
  }
}
