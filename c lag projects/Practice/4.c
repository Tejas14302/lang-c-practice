#include<stdio.h>

int main()
{
	float kg,miles,val;
	printf("Enter the value:");
	scanf("%f",&val);
	printf("\ngram~kg,km~miles\n");
	kg=val/1000;
	miles=val*0.62;
	printf("\nconverted:kg=%0.2f\n          miles=%0.2f",kg,miles);
}
/*
	output
	Enter the value:100

	gram~kg,km~miles

	converted:kg=0.10
              miles=62.00
*/              