#include<stdio.h>

int main()
{
	float average,sum_of_the_numbers,total_numbers;
	printf("Enter the sum of the numbers:");
	scanf("%f",&sum_of_the_numbers);
	printf("Enter Total numbers:");
	scanf("%f",&total_numbers);
	average=sum_of_the_numbers/total_numbers;
	printf("\nAverage of the numbers is:%0.2f",average);
}
/*
	output
	Enter the sum of the numbers:100
	Enter Total numbers:10		
	
	Average of the numbers is:10.00
*/