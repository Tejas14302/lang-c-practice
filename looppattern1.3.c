#include<stdio.h>

int main()
{
	int row,colm;
	for(row=5;row>=1;row--){
		for(colm=row;colm<=5;colm++){
			printf("%d ",row);
		}printf("\n");
	}
}
/*
	output:
	5
	4 4
	3 3 3
	2 2 2 2
	1 1 1 1 1
*/