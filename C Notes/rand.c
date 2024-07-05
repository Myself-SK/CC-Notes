#include<stdio.h>
#include<stdlib.h>
void main(){
	srand(time(0));
	int n = rand()%1000;
	printf("%d",n);
}
