#include<stdio.h>
#include<stdlib.h>
void main(){
	int ran,guess,i;
	srand(time(0));
	ran = rand()%100;
	printf("Welcome to Number Guessing Game...\n");
	printf("You have to guess a Number from 0-99\n");
	printf("You have 6 attempts to guess..\n");
	printf("All the best\n\n");
	sleep(2);
	system("cls");
	for(i=1;i<=6;i++){
		printf("Enter Attempt No: %d\n",i);
		scanf("%d",&guess);
		if(guess==ran){
			printf("Congrats You have won the Game...!");
			break;
		}
		if(guess>ran && i<6){
			printf("Try Lesser Number\n");
		}
		if(guess<ran && i<6){
			printf("Try Greater Number\n");
		}
	}
	if(i==7){
		printf("Sorry you have lost the game...!\n");
		printf("The correct answer was %d",ran);
	}
		
}
