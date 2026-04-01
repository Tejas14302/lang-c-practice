#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter a and b and c:");
	scanf("%d%d%d",&a,&b,&c);
	int sum=a+b*a/c;
	printf("ans:%d",sum);
}
/*
	output
	Enter a and b and c:10
	10
	10
	ans:20
*/	