// Program to display message based on hour
// 4-11 GM
// 12-16 GA
// 16-20 GE
// 20-4 GN
// >24 or <0 invalid time
#include<stdio.h>
void main(){
	int hour;
	printf("Enter Time:");
	scanf("%d",&hour);
	if(hour>=24 || hour<0)
		printf("Invalid Hour");
	else{
		if(hour>=4 && hour<12)
			printf("Good Morning");
		else if(hour>=12 && hour<16)
			printf("Good Afternoon");
		else if(hour>=16 && hour<20)
			printf("Good Evening");
		else
			printf("Good Night");
	}
}
