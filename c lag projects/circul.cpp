#include<stdio.h>
#define pi 3.14

int main()
{
	float area,r;
	printf("Enter r:");
	scanf("%f",&r);
	area=pi*r*r;
	printf("the area of circul is:%0.2f",area);
}
/*
	output
	Enter r:10
	the area of circul is:314.00
*/	