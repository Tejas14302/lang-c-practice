#include<stdio.h>

int main()
{
	float w,h,bmi;
	printf("Enter your weight(kg):");
	scanf("%f",&w);
	printf("Enter your height(m):");
	scanf("%f",&h);
	bmi=w/(h*h);
	printf("Your bmi is:%0.2f",bmi);
}
/*
	output
	Enter your weight(kg):88
	Enter your height(m):1.76
	Your bmi is:28.41
*/	