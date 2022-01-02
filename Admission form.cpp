#include<stdio.h>
#include<string.h>
struct patient
{
	char name[20],f_name[20],m_name[20],rp_name[20],gender[6],dis[50],state[15],occu[20],issue[50];
	int p_no[10],rp_no[10],d,m,y,age,pincode;
}pat_data;
int main()
{
	printf("\n\t    CURE AND CARE HOSPITAL \n\t         NAMAKKAL-01 \n\n\t       ADMISSION FORM\n\n\t");
	printf("\n\t  Name : ");
	scanf("%s",&pat_data.name);
	printf("\n\t  Father's Name : ");
	scanf("%s",&pat_data.f_name);
	printf("\n\t  Mother's Name : ");
	scanf("%s",&pat_data.m_name);
	printf("\n\t  Phone Number : +91 ");
	scanf("%d",&pat_data.p_no);
	printf("\n\t  Gender : ");
	scanf("%s",&pat_data.gender);
	printf("\n\t  Age : ");
	scanf("%d",&pat_data.age);
	printf("\n\t  Date of Birth (DD MM YYYY) : ");
	scanf("%d%d%d",&pat_data.d,&pat_data.m,&pat_data.y);
	printf("\n\t  What is your occupation : ");
	scanf("%s",&pat_data.occu);
	printf("\n\t  District : ");
	scanf("%s",&pat_data.dis);
	printf("\n\t  State : ");
	scanf("%s",&pat_data.state);
	printf("\n\t  Pincode : ");
	scanf("%d",&pat_data.pincode);
	printf("\n\t  Patient Relation's Name : ");
	scanf("%s",&pat_data.rp_name);
	printf("\n\t  Relation Phone Number : +91 ");
	scanf("%d",&pat_data.rp_no);
	printf("\n\t  Health issue : ");
	scanf("%s",&pat_data.issue);
	printf("\n\t  Your details has been recorded..!! \n\t  Thank You..!! \n\n\t");
	return 0;
}

