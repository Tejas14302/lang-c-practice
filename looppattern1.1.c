#include<stdio.h>

int main()
{
	int row,colm;
	for(row=1;row<=5;row++){
		for(colm=row;colm>=1;colm--){
			printf("%d ",colm);
		}printf("\n");
	}
}
/*
	output:
	1
	2 1
	3 2 1
	4 3 2 1
	5 4 3 2 1
*/