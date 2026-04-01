#include<stdio.h>

int main()
{
	int year,month,days;
	printf("Enter your age in year: ");
	scanf("%d",&year);
	month=12*year;
	printf("\nYour age in month is:%d\n",month);
	days=365*year;
	printf("\nYour age in days is:%d",days);
}
/*
	output
	Enter your age in year: 17

	Your age in month is:204

	Your age in days is:6205
*/	