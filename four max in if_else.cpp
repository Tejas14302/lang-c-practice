#include<stdio.h>

int main()
{
	int a,b,c,d;
	printf("Enter a,b,c, and d:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b){
		if(a>c){
			if(a>d){
				printf("a is max");
			}else{
				printf("d is max");
			}
		}else{
			if(c>d){
				printf("c is max");
			}else{
				printf("d is max");
			}
		}
	}else{
		if(b>c){
			if(b>d){
				printf("b is max");
			}else{
				printf("d is max");
			}
		}else{
			if(c>d){
				printf("c is max");
			}else{
				printf("d is max");
			}
		}
	}
}
/*
	output
	
	1.Enter a,b,c, and d:10
	  20
	  30
	  40
	  d is max
	 
	2.Enter a,b,c, and d:10
 	  9
	  8
	  7
	  a is max	 
	
	3.Enter a,b,c, and d:10
	  20
  	  55
	  12
	  c is max 
	
	4.Enter a,b,c, and d:10
	  60
	  12
  	  17
	  b is max 
*/