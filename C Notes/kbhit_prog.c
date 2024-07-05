#include<stdio.h>
#include<stdlib.h>
void main(){
	int i=1;
	while(!kbhit()){
		printf("%d\t",i);
		i++;
		sleep(1);
	}
}
