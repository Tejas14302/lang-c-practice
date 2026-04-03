#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the value of a and b and c:");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b){
		if(a<c){
			printf("A is min:");
		}else{
			printf("C is min:");
		}
	}else{
		if(b<c){
			printf("B is min:");
		}else{
			printf("C is min:");
		}
	}
}