// display 1 to 10 using goto
#include<stdio.h>
void main(){
	int i=1;
	up: printf("%d\n",i);
	i+=1;
	if(i<=10)
		goto up;
}
