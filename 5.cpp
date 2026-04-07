#include<stdio.h>

int main()
{
	int fs,sc,ts;
	printf("Enter maths marks:");
	scanf("%d",&fs);
	printf("Enter science marks:");
	scanf("%d",&sc);
	printf("Enter englis marks:");
	scanf("%d",&ts);
	int sum=fs+sc+ts;
	printf("The average of these three subjects marks is:%d",sum/3);
}
/*
	output:
	Enter maths marks:89
	Enter science marks:93
	Enter englis marks:94
	The average of these three subjects marks is:92

*/