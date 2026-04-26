#include<stdio.h>

int main(){
	int num,i,mul=1;
	printf("Enter any number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		mul=mul*i;
	}
	printf("Ans:%d",mul);
}
/*
	output:
	Enter any number:5
	Ans:120
*/