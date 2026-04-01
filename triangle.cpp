#include<stdio.h>

int main()
{
	float lenght,height,area;
	printf("Enter Lenght:");
	scanf("%f",&lenght);
	printf("Enter height:");
	scanf("%f",&height);
	area=0.5*lenght*height;
	printf("the area of triangle is:%0.2f",area);
}
/*
	output
	Enter Lenght:10
	Enter height:20
	the area of triangle is:100.00
*/