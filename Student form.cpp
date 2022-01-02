#include<stdio.h>
#include<string.h>
struct student
{
	char name[20],f_name[20],m_name[20],rp_name[20],gender[6],dis[50],state[15],foccu[20],moccu[20],sec;
	int p_no[10],rp_no[10],d,m,y,age,pincode,stan;
	long int a_no[12];
}stu_data;
int main()
{
	printf("\n\t    ROCKSTAR HIGHER SECONDARY SCHOOL \n\t            NAMAKKAL-01 \n\n\t           STUDENT FORM\n\n\t");
	printf("\n\t  Name : ");
	scanf("%s",&stu_data.name);
    printf("\n\t  Standard and Section : ");
	scanf("%d%s",&stu_data.stan,&stu_data.sec);
	/*printf("\n\t  Standard : %dth Standard - %s Section",stu_data.stan,stu_data.sec);*/
	printf("\n\t  Aadhar Number : ");
	scanf("%ld",&stu_data.a_no);
	printf("\n\t  Father's Name : ");
	scanf("%s",&stu_data.f_name);
	printf("\n\t  Mother's Name : ");
	scanf("%s",&stu_data.m_name);
	printf("\n\t  Parent Phone Number : +91 ");
	scanf("%d",&stu_data.p_no);
	printf("\n\t  Gender : ");
	scanf("%s",&stu_data.gender);
	printf("\n\t  Age : ");
	scanf("%d",&stu_data.age);
	printf("\n\t  Date of Birth (DD MM YYYY) : ");
	scanf("%d%d%d",&stu_data.d,&stu_data.m,&stu_data.y);
	printf("\n\t  What is your Father's occupation : ");
	scanf("%s",&stu_data.foccu);
	printf("\n\t  What is your Mother's occupation : ");
	scanf("%s",&stu_data.moccu);
	printf("\n\t  District : ");
	scanf("%s",&stu_data.dis);
	printf("\n\t  State : ");
	scanf("%s",&stu_data.state);
	printf("\n\t  Pincode : ");
	scanf("%d",&stu_data.pincode);
	printf("\n\t  Your details has been recorded...!! \n\t  Thank You..!! \n\n\t");
	return 0;
}

