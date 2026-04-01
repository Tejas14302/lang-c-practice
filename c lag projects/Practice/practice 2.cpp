#include<stdio.h>

int main()
{
	float w,h,bmi;
	printf("Enter your weight(kg):");
	scanf("%f",&w);
	printf("Enter your height(cm):");
	scanf("%f",&h);
	bmi=w/(h*h)*10000;
	printf("Your bmi is:%0.2f",bmi);
}
/*
	output
	Enter your weight(kg):88
	Enter your height(cm):176
	Your bmi is:28.41
*/