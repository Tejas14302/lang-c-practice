#include<stdio.h>

int main()
{
	int row,colm;
	for(row='A';row<='E';row++){
		for(colm=row;colm>='A';colm--){
			printf("%c ",colm);
		}printf("\n");
	}
}
/*
	output:
	A
	B A
	C B A
	D C B A
	E D C B A
*/