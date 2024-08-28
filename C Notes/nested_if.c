#include<stdio.h>
void main(){
	int a=100,b=200,c=30;
	if(a>b){
		if(a>c){
			printf("A is Greater");
		}
		else{
			printf("C is Greater");
		}
	}
	else{
		if(b>c){
			printf("B is Greater");
		}
		else{
			printf("C is Greater");
		}
	}
}
