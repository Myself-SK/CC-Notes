#include<stdio.h>
#include<stdlib.h>
void main(){
	int mm,ss;
	char c;
	printf("Enter Time in MM:SS:");
	scanf("%d%c%d",&mm,&c,&ss);
	while(1){
		system("cls");
		ss--;
		if(ss<0){
			mm--;
			ss=59;
		}
		if(mm==0 && ss==0)
			break;
		if(mm<10 && ss<10)
			printf("0%d:0%d\n",mm,ss);
		else if(mm<10)
			printf("0%d:%d\n",mm,ss);
		else
			printf("%d:0%d\n",mm,ss);
		sleep(1);
	}
	printf("You'r Times Up");
}
