#include<stdio.h>

int main()
{
	int i=1,n,s=i;
	printf("Enter N:");
	scanf("%d",&n);
	while(i<=n){
		printf("%d\n",i*i);
		i=i+1;
	}
}
/*
	output:
	Enter N:10	
	1
	4
	9
	16
	25
	36
	49
	64
	81
	100

*/