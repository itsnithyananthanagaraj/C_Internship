#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#define TRUE 1
int main()
{
	int slt,opt,ilaya,arr,uone,ani,a,b;
	long int ph_no,to_no;
	char message[50],com[50],sub[20];
	printf("\n MOBILE APPLICATION \n\n");
	printf("\n 1-CALL \n 2-TEXT \n 3-MUSIC \n 4-MAIL \n\n");
	printf("\n Select : ");
	scanf("%d",&slt);
	switch(slt)
	{
		case 1:
			printf("\n Phone Number : +91 ");
			scanf("%ld",&ph_no);
			printf("\n Call (1-yes / 2-no) : ");
			scanf("%d",&a);
			printf("\n");
			if(a==1)
			{
			   int m=00,s=10;
			   while(1)
			   {
			   	printf("    \r %d : %d",m,s);
			    Sleep(1000);
			    if(s!=0)
			    {
			    	s--;
				}
				if(s==0 && m!=0)
				{
					s=59;
					m--;
				}
				if(s==0 && m==0 && s==0)
				{
					exit(0);
				}
			   }
			}
			else
			{
				printf(" OK...!! \n\n ");
			}
	    case 2:
	    	printf("\n To : +91 ");
	    	scanf("%ld",&to_no);
	    	printf("\n Enter Message : ");
	    	scanf("%s",&message);
	    	printf("\n 1-Send / 2-Discard : ");
	    	scanf("%d",&b);
	    	if(b==1)
	    	{
	    		printf("\n The message is send...!! \n\n");
			}
			else if(b==2)
			{
				printf("\n The message is draft...!! \n\n");
			}
			else
			{
				printf("\n Invalid Option...!! \n\n");
			}
		case 3:
			printf("\n\n Select the Playlist : ");
			printf("\n\n 10-Ilaiyaraja \n 20-A.R.Rehman \n 30-Yuvan Shankar Raja \n 40-Aniruth \n\n");
		    printf("\n Which One : ");
	        scanf("%d",&opt);
	        switch(opt)
	        {
			case 10:
				printf("\n\n 1-Thendral Vandhu (Avathaaram) \n 2-Nee Partha (Hey Ram) \n 3-Mandram Vandha (Mounaragam) \n 4-Sundari Kannal (Thalapathy) \n\n");
		        printf("\n Which One : ");
	            scanf("%d",&ilaya);
	            switch(ilaya)
	            {
	            	case 1:
	            		printf("\n Thendral Vandhu (Avathaaram) song is playing...!! \n\n");
	            		break;
	            	case 2:
	            		printf("\n Nee Partha (Hey Ram) song is playing...!! \n\n");
	            		break;
	            	case 3:
	            		printf("\n Mandram Vandha (Mounaragam) song is playing...!! \n\n");
	            		break;
	            	case 4:
	            		printf("\n Sundari Kannal (Thalapathy) song is playing...!! \n\n");
	            		break;
	            	default:
	            		printf("\n Invalid Choice...!! \n\n");
	            		break;
				}break;
			case 20:
				printf("\n\n 1-Tum Tak (Raanjhanaa) \n 2-Snehidhane (Alaipayudhe) \n 3-Nenjae Yezhu (Mariyan) \n 4-Vennilavae (Minsara Kanavu) \n\n");
		        printf("\n Which One : ");
	            scanf("%d",&arr);
	            switch(arr)
	            {
	            	case 1:
	            		printf("\n Tum Tak (Raanjhanaa) song is playing...!! \n\n");
	            		break;
	            	case 2:
	            		printf("\n Snehidhane (Alaipayudhe) song is playing...!! \n\n");
	            		break;
	            	case 3:
	            		printf("\n Nenjae Yezhu (Mariyan) song is playing...!! \n\n");
	            		break;
	            	case 4:
	            		printf("\n Vennilavae (Minsara Kanavu) song is playing...!! \n\n");
	            		break;
	            	default:
	            		printf("\n Invalid Choice...!! \n\n");
	            		break;
				}break;
			case 30:
				printf("\n\n 1-Oru Naalil (Pudhupettai) \n 2-Kaadhal Aasai (Anjaan) \n 3-En Anbey (Mounam Pesiyadhe) \n 4-Nee illai Enral (Dheena) \n\n");
		        printf("\n Which One : ");
	            scanf("%d",&uone);
	            switch(uone)
	            {
	            	case 1:
	            		printf("\n Oru Naalil (Pudhupettai) song is playing...!! \n\n");
	            		break;
	            	case 2:
	            		printf("\n Kaadhal Aasai (Anjaan) song is playing...!! \n\n");
	            		break;
	            	case 3:
	            		printf("\n En Anbey (Mounam Pesiyadhe) song is playing...!! \n\n");
	            		break;
	            	case 4:
	            		printf("\n Nee illai Enral (Dheena) song is playing...!! \n\n");
	            		break;
	            	default:
	            		printf("\n Invalid Choice...!! \n\n");
	            		break;
				}break;
			case 40:
				printf("\n\n 1-Velicha Poove (Edhir Neechal) \n 2-Kannazhaga (Moonu) \n 3-So Baby (Doctor) \n 4-Donu Donu (Marri) \n\n");
		        printf("\n Which One : ");
	            scanf("%d",&ani);
	            switch(ani)
	            {
	            	case 1:
	            		printf("\n Velicha Poove (Edhir Neechal) song is playing...!! \n\n");
	            		break;
	            	case 2:
	            		printf("\n Kannazhaga (Moonu) song is playing...!! \n\n");
	            		break;
	            	case 3:
	            		printf("\n So Baby (Doctor) song is playing...!! \n\n");
	            		break;
	            	case 4:
	            		printf("\n Donu Donu (Marri) song is playing...!! \n\n");
	            		break;
	            	default:
	            		printf("\n Invalid Choice...!! \n\n");
	            		break;
		       }
		    default:
		    	printf("\n Invalid Choice...!! \n\n");
		    	break;
		}break;    
		case 4:
			printf("\n Compose the mail...!!");
			printf("\n\n From : ananthananth611@gmail.com ");
			printf("\n\n To : javith678@gmail.com ");
			printf("\n\n Subject : ");
	    	scanf("%s",&sub);
	    	printf("\n Compose Email : ");
	    	scanf("%s",&com);
	    	printf("\n 1-Send / 2-Discard : ");
	    	scanf("%d",&b);
	    	if(b==1)
	    	{
	    		printf("\n The message is send...!! \n\n");
			}
			else if(b==2)
			{
				printf("\n The message is draft...!! \n\n");
			}
			else
			{
				printf("\n Invalid Option...!! \n\n");
		    }		
	}
	return 0;
}
