#include<stdio.h>
void main(){
	int i=1;
	up: printf("Hi\n");
	i+=1;
	if(i<=10)
		goto up;
}
