
//String Lower, Upper, Length, Reverse Operation
#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	printf("\n Enter the string : ");
	gets(a);
	printf("\n\n Lower case of string : %s",strlwr(a));
	printf("\n\n Upper case of string : %s",strupr(a));
	printf("\n\n Reverse of string : %s",strrev(a));
	printf("\n\n Length of string : %d\n",strlen(a));
    return 0;
}


/*
//String Copy Operation
#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	printf("\n Enter the string : ");
	gets(a);
	strcpy(b,a);
	printf("\n The Copied string is : %s\n",b);
    return 0;
}
*/

/*
//String Compare Operation
#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50],c;
	printf("\n Enter the string 1 : ");
	gets(a);
	printf("\n Enter the string 2 : ");
	gets(b);
	c=strcmp(a,b);
	if(c==0)
	   printf("\n Both strings are equal.\n");
    else
       printf("\n Both strings are not equal.\n");
    return 0;
}
*/

/*
//String Concatenated Operation
#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	printf("\n Enter the string 1 : ");
	gets(a);
	printf("\n Enter the string 2 : ");
	gets(b);
	strcat(a,b);
	printf("\n The Concatenated string is : %s\n",a);
    return 0;
}
*/
