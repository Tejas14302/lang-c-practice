#include<stdio.h>

int main()
{
	float lenght,width,area;
	printf("Enter lenght:");
	scanf("%f",&lenght);
	printf("Enter width:");
	scanf("%f",&width);
	area=lenght*width;
	printf("The area of rectangle is:%0.2f",area);
}
/*
	output
	Enter lenght:10
	Enter width:20
	The area of rectangle is:200.00
*/