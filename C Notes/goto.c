#include<stdio.h>
void main(){
	int i=1;
	up: printf("%d\t",i);
		i++;
		if(i<=10)
			goto up;
}
