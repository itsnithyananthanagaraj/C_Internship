#include<stdio.h>
int main()
{
    int marks,a,b,c,d,e,f;
    printf("      Kongunadu College Of Engineering Technology \n                 (Autonomous)\n       Electronics and Communication Engineering\n                 5th Semester\n\n");
    printf("\n                Communication Networking - ");
    scanf("%d",&a);
    printf("  Computer Architecture and Organization - ");
    scanf("%d",&b);
    printf("                   Digital Communication - ");
    scanf("%d",&c);
    printf("                     Medical Electronics - ");
    scanf("%d",&d);
    printf("         Discrete Time Signal Processing - ");
    scanf("%d",&e);
    printf("   Basics of Bio-Medical Instrumentation - ");
    scanf("%d",&f);
    marks=(a+b+c+d+e+f)/(6);
    printf("\n   Average Mark - %d",marks);
    if(marks<0 || marks>100)
    {
        printf("\n   Wrong Entry");
    }
    else if(marks<50)
    {
        printf("\n   Grade U");
    }
    else if(marks>=50 && marks<=60)
    {
        printf("\n   Grade B");
    }
    else if(marks>=61 && marks<=70)
    {
        printf("\n   Grade B+");
    }
    else if(marks>=71 && marks<=80)
    {
        printf("\n   Grade A");
    }
    else if(marks>=81 && marks<=90)
    {
        printf("\n   Grade A+");
    }
    else
    {
        printf("   Grade O \n   Keep it up..!! ");
    } 
    printf("\n\n   Thank You... !!\n\n");
    return 0;
}
