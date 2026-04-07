#include<stdio.h>

int main()
{
	int n,x;
	printf("Enter N:");
	scanf("%d",&n);
	printf("Enter -N:");
	scanf("%d",&x);
	while(x<=n){
		printf("%d\n",x);
		x++;
	}
}
/*
	output:
	Enter N:10
	Enter -N:-10
	-10
	-9
	-8	
	-7
	-6
	-5
	-4
	-3
	-2
	-1
	0
	1
	2
	3
	4
	5
	6
	7
	8
	9
	10
*/