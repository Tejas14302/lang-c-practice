#include<stdio.h>

int main()
{
	float si,r,p,t;
	printf("Enter r:");
	scanf("%f",&r);
	printf("Enter p:");
	scanf("%f",&p);
	printf("Enter t:");
	scanf("%f",&t);
	si=r*p*t/100;
	printf("the value of simple intrest is :%0.2f",si);
}
/*
	output
	Enter r:100
	Enter p:10
	Enter t:5
	the value of simple intrest is :50.00
*/	