#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void main(){
	int i=0;
	while(!kbhit()){
	Sleep(500);
	printf("%d ",i);
	i++;	
	}
}
