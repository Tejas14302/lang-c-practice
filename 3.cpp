#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	if(a<b){
		printf("a is minimum:%d");
	}else{
		printf("b is minimum:%d",b);
	}
}
/*
	output:
	1.Enter the value of a and b:10 20
	  a is minimum:10
	
	2.Enter the value of a and b:20 10
	  b is minimum:10
*/