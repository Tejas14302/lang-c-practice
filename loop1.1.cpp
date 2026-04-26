#include<stdio.h>

int main(){
	int i,num,pre,curr,sum=0;
	printf("Enter any number:");
	scanf("%d",&num);
	for(i=0;i<=num;i++){
		sum=sum+i;	
	}
	printf("Ans:%d",sum);
}
/*
	output:
	Enter any number:5
	Ans:15
*/