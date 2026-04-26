#include<stdio.h>

int main(){
	int row,colm,num=1;
	for(row=1;row<=5;row++){
		for(colm=1;colm<=row;colm++){
			printf("%d ",num);
			num++;
		}printf("\n");
	}
}
/*
	output:
	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
*/