#include<stdio.h>
#include<string.h>
int main()
{
    char username[10],password[10],suggestions[10],feedback[10],a[10],name[20],dept[10],college;
    int rate,mobile,year;
    printf("\n LOGIN FORM \n\n");
    printf(" Please Enter Your UserName : ");
    scanf("%s",username);
    printf("\n Please Enter Your Password : ");
    scanf("%s",password);
    if(strcmp(username,"cprogram")==0)
    {
        if(strcmp(password,"internship")==0)
        {
            printf("\n Login Successfully...!!\n Welcome...!!");
            printf("\n\n FEEDBACK FORM ");
              printf("\n\n Enter your Mobile Number : +91 ");
              scanf("%d",&mobile);
              printf("\n Enter your Name : ");
              scanf("%s",name);
              printf("\n Enter your College : ");
              scanf("%d",&college);
              printf("\n Enter your Branch / Department : ");
              scanf("%s",dept);
              printf("\n Enter your Year of Study : ");
              scanf("%d",&year);
              printf("\n How will you rate the speaker (1-Very Dissatisfied to 5-Very Satisfied) : ");
              scanf("%d",&rate);
              printf("\n Enter your Valuable Feedback : ");
              scanf("%s",feedback);
              printf("\n Do you have any suggestions to improve our session : ");
              scanf("%s",suggestions);
              printf("\n Check Your Details & Enter the Submit : ");
              scanf("%s",a);
               if(a&&"submit"||"Submit")
               {
                   printf("\n Your response has been recorded...!! \n Thank you...!! ");
               }
        }
        else
        {
            printf("\n Password is incorrect...!!");
        }
    }
    else
    {
        printf("\n UserName is invalid...!!");
    }
    return 0;
}
