#include<stdio.h>

int main()
{
	int i=1,n;
	printf("Enter N:");
	scanf("%d",&n);
	while(i<=n){
		printf("%d\n",n);
		n--;
	}
}
/*
	output:
	Enter N:10
	10
	9
	8
	7
	6
	5
	4
	3
	2
	1

*/