#include "../function.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void viewdetails(void)
{
	printf("\e[1;1H\e[2J");
	printf("-----------------------------------------------------------------------------");	
	printf("\nTr.No\tName\t\t\tDestinations\t\tCharges\t\tTime\n");
	printf("-----------------------------------------------------------------------------");
	printf("\n2121\t Lines Express\tMumbai to Khandwa\tRs.5000\t\t 4:00pm");
	printf("\n2122\tLines Express\tKhandwa To Mumbai\tRs.5000\t\t9:00am");
	printf("\n2120\tLA City Express\t\tMumbai To Goa\t\tRs.1500\t\t4:00am");
	printf("\n1004\tLA City Express\t\tL.A To Boston\t\tRs.4500\t\t11:00am");
	printf("\n1005\tIron City Express\tBoston To Chicago\tRs.4000\t\t7:00am");
	printf("\n1006\tIron City Express\tChicago To Boston\tRs.4000\t\t9:30am");
    printf("\n1007\tKeystone Express\tBoston To Washington\tRs.3500\t\t1:00pm");	
    printf("\n1008\tKeystone Express\tWashington To Boston\tRs.3500\t\t4:00pm");
    printf("\n1009\tMeteor Express\t\tBoston To Miami\t\tRs.6000\t\t3:35pm");
    printf("\n1010\tMeteor Express\t\tMiami To Boston\t\tRs.6000\t\t4:15pm"); 
    
}
