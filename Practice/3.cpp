#include<stdio.h>

int main()
{
	int choice,a,b;
	printf("1.You decided to go inside!");
	printf("\n2.You decided to stay behind");
	printf("\nyour choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("you got treasure!!!");
			break;
		default:
			printf("you died.");	
	}
	
	
}
/*
	output:
	(1).
	1.You decided to go inside!
	2.You decided to stay behind
	your choice:2
	you died.
	
	(2).
	1.You decided to go inside!
	2.You decided to stay behind
	your choice:1
	you got treasure!!!

*/