#include<stdio.h>
#include<string.h>
int main()
{
	int slt;
	printf("\n");
	printf("\n 2022 EVENTS \n\n");
	printf("\n 1-JANUARY \n 2-FEBUARY \n 3-MARCH \n 4-APRIL \n 5-MAY \n 6-JUNE \n 7-JULY \n 8-AUGEST \n 9-SEPTEMBER \n 10-OCTOBER \n 11- NOVEMBER \n 12-DECEMBER \n");
	printf("\n Select The Month : ");
	scanf("%d",&slt);
	switch(slt)
	{
		case 1:
			printf("\n 01 - New Year's Day");
     	    printf("\n 14 - Thai Pongal / My Friend Kishore's Birthday");
		    printf("\n 15 - Mattu Pongal / Thiruvalluvar Dhinam");
		    printf("\n 16 - Uzhavar Thirunal");
		    printf("\n 18 - Thai Pusam");
		    printf("\n 26 - Republic Day \n\n");
		    break;
		case 2:
		    printf("\n 05 - Cristiano Ronaldo's (1985) Birthday \n\n");
		    break;
		case 3:
		    printf("\n 07 - My Friend Balaji's (2002) Birthday");
			printf("\n 19 - Holi \n\n");
		    break;
		case 4:
			printf("\n 02 - Telugu New Year");
     	    printf("\n 14 - Tamil New Year");
		    printf("\n 15 - Good Friday");
		    printf("\n 17 - Easter Day \n\n");
		    break; 
		case 5:
			printf("\n 01 - Labour Day");
     	    printf("\n 03 - Ramzan \n\n");
		    break;   
		case 6:
		    printf("\n 23 - My Brother's Birthday (1998) \n\n");
		    break;
		case 7:
			printf("\n 10 - Bakr Id");
			printf("\n 28 - Actor Dhanush's Birthday (1983) \n\n");
		    break; 
		case 8:
			printf("\n 08 - Muharram");
     	    printf("\n 15 - Independence Day");
		    printf("\n 19 - Gokulastami");
		    printf("\n 31 - Vinayaka Chaturthi \n\n");
		    break;
		case 9:
		    printf("\n No Events...!! \n\n");
		    break;
		case 10:
			printf("\n 02 - Mahatma Gandhi Jayanti");
     	    printf("\n 04 - Saraswathi Pooja / Ayudha Pooja");
		    printf("\n 05 - Vijaya Dhasami");
		    printf("\n 09 - Milad un Nabi");
		    printf("\n 24 - Deepavali / My Sister's Birthday (2000) \n\n");
		    break;
		case 11:
		    printf("\n 06 - My Birthday (2002) ");
		    printf("\n 16 - My Friend Hariharan's Birthday (2001) ");
		    printf("\n 30 - My Friend Anandhakrishnan's Birthday (2001) \n\n");
		    break;
		case 12:
		    printf("\n 04 - My Mom's Birthday (1971) ");
		    printf("\n 09 - My Father's Day (2005) ");
		    printf("\n 12 - Actor SUPERSTAR Rajinikanth's Birthday (1950) / My Friend Aravinth's Birthday (2000) ");
		    printf("\n 17 - My Friend Javith's Birthday (2001) ");
		    printf("\n 19 - My Friend Guna's Birthday (2001) ");
		    printf("\n 24 - My Grand Father's Day (2003) ");
		    printf("\n 25 - Christmas Day \n\n");
		    break;
		default:
			printf("\n Please select valid option...!! \n\n");
	}
	return 0;
}
