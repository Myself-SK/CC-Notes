#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void main(){
	srand(time(0));
	while(!kbhit()){
	printf("%d ",rand()%21+20); 
	Sleep(500);		
	}
}
