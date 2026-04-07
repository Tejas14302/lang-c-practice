#include<stdio.h>

int main()
{
	int i=0,n;
	printf("Enter N:");
	scanf("%d",&n);
	while(i<=n){
		printf("%d\n",i);
		i+=2;
	}
}
/*
	output:
	Enter N:10
	0
	2
	4
	6
	8
	10

*/