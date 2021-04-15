#include "../function.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void compute(){
	system("cls || clear");
	printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|          RAILWAY RESERVATION SYSTEM           |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");
		
	    
	printf(" \n Press any key to continue:");
	
	getchar();	
	printf("\e[1;1H\e[2J");
	login();

	int menu_choice,choice_return;
	start:
	printf("\e[1;1H\e[2J");
	printf("\n=================================\n");
	printf("    RAILWAY RESERVATION SYSTEM");
	printf("\n=================================");
  printf("\n(1) Book A Ticket");
  printf("\n------------------------");
  printf("\n(2) Display Booked Tickets");
  printf("\n------------------------");
  printf("\n(3) All Available Trains");
  printf("\n------------------------");
  printf("\n(4) validate Booked Tickets");
  printf("\n------------------------");
  printf("\n(5) Cancel Tickets");
  printf("\n------------------------");
  printf("\n(6) Exit");
  printf("\n------------------------");
  printf("\n\nEnter Your Choice: \n\n\n");

	scanf("%d",&menu_choice);
	switch(menu_choice)
	{
		case 1:
			reservation();
			break;
		case 2:
		display();
			break;
		case 3:
			viewdetails();
			printf("\n\nPress any key to go to Main Menu..");
			getchar();
			getchar();
			break;
			
		case 4:
			validate();
			break;

		case 5:
		cancel();
			break;
		case 6:
			exit(0);
		default:
			printf("\nInvalid choice");
	}
	goto start;
}



