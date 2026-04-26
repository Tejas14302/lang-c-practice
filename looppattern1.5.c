#include<stdio.h>

int main()
{
	int row,colm;
	for(row=1;row<=5;row++){
		for(colm=row;colm<=5;colm++){
			printf("%d ",row);
		}printf("\n");
	}
}
/*
	output:
	1 1 1 1 1
	2 2 2 2
	3 3 3
	4 4
	5
*/