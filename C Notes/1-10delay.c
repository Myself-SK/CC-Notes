#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void main(){
	int i;
	char color[100];
	for(i=1;i<=10;i++){
	sleep(1);
	sprintf(color,"Color %x%x",i,i+1);
	system(color);
	printf("%d ",i);	
	}
	
}
