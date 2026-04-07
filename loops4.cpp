#include<stdio.h>

int main()
{
	int n,o=1;
	printf("Enter N:");
	scanf("%d",&n);
	while(o<=n){
		printf("%d\n",o);
		o+=2;
	}
}
/*
	output:
	Enter N:10
	1
	3
	5
	7
	9

*/
