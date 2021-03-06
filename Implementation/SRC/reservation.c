#include "../function.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
char confirm;
void check_train_num(void)
{
    TEST_ASSERT_EQUAL('y',confirm);
}
void reservation(void)
{	
	int i=0;
	float charges;
	pd passdetails;
	FILE *fp;
	fp=fopen("seats_reserved.txt","a");
	printf("\e[1;1H\e[2J");
	printf("\nEnter Name: ");
	fflush(stdin);
	scanf("%s",passdetails.name);
	printf("\nEnter No of seats: ");
	scanf("%d",&passdetails.num_of_seats);
	printf("\n\nPress Enter To View Available Trains: ");
	getchar();
	getchar();
	printf("\e[1;1H\e[2J");
	viewdetails();
	printf("\n\nEnter train number: ");
	start1:
	scanf("%d",&passdetails.train_num);
	if(passdetails.train_num>=1001 && passdetails.train_num<=1010)
	{
		charges=charge(passdetails.train_num,passdetails.num_of_seats);
		printticket(passdetails.name,passdetails.num_of_seats,passdetails.train_num,charges);		
	}
	else
	{
		printf("\nTrain number is unvalid ! Enter again :  ");
		goto start1;
	}
	
	printf("\n\nConfirm Ticket (yes/no):");
	start:
	scanf(" %c",&confirm);
	UNITY_BEGIN();
    RUN_TEST(check_train_num);
    UNITY_END();
	if(confirm == 'yes')
	{
		fprintf(fp,"%s\t\t%d\t\t%d\t\t%.2f\n",passdetails.name,passdetails.num_of_seats,passdetails.train_num,charges);
 printf("===============================");
    printf("\n TICKET BOOKING IS DONE\n");
    printf("===============================");
    printf("\nPress any key to go back to Main menu_");

		getchar();
	}
	else
	{
		if(confirm=='no'){
 printf("===============================");
    printf("\n TICKET BOOKING IS FAILED\n");
    printf("===============================");
    printf("\nPress any key to go back to Main menu_");

			getchar();
		}
		else
		{
			printf("\nInvalid choice entered! Enter again : ");
			goto start;
		}
	}
	fclose(fp);
	getchar();
}
