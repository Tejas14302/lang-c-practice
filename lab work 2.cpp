#include<stdio.h>

int main()
{
	int x,y;
	printf("Enter x and y:");
	scanf("%d%d",&x,&y);
	int formula=x*x-2*x*y+y*y;
	printf("ans:%d",formula);
}
/*
    output
    Enter x and y:10
    20
    ans:100
*/		