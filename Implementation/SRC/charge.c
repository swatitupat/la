#include "../function.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



float charge(int train_num,int num_of_seats)
{
		if (train_num==2120)
	{
		return(5000.0*num_of_seats);
	}
	if (train_num==2121)
	{
		return(1500.0*num_of_seats);
	}
	if (train_num==2122)
	{
		return(4500.0*num_of_seats);
	}
	if (train_num==1004)
	{
		return(4500.0*num_of_seats);
	}
	if (train_num==1005)
	{
		return(4000.0*num_of_seats);
	}
	if (train_num==1006)
	{
		return(4000.0*num_of_seats);
	}
	if (train_num==1007)
	{
		return(3500.0*num_of_seats);
	}
	if (train_num==1008)
	{
		return(3500.0*num_of_seats);
	}
	if (train_num==1009)
	{
		return(6000.0*num_of_seats);
	}
	if (train_num==1010)
	{
		return(6000.0*num_of_seats);
	}
}