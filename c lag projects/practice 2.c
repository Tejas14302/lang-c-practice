#include<stdio.h>

int main()
{
	char first name[100];
	char second name[100];
	char full name[100];
	printf("Enter your first name:");
	scanf("%s",&first name);
	printf("Enter your second name:");
	scanf("%s",&second name);
	full name=first name+second name;
	printf("your name is:%s",full name);
}