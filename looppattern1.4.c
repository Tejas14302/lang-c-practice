#include<stdio.h>

int main()
{
	int row,colm;
	for(row=1;row<=5;row++){
		for(colm=row;colm<=5;colm++){
			printf("%d ",colm);
		}printf("\n");
	}
}
/*
	output:
	1 2 3 4 5
	2 3 4 5
	3 4 5
	4 5
	5
*/