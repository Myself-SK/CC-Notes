// Program to check Eligible to Vote
#include<stdio.h>
void main(){
	int year,age;
	printf("Enter your Year of Birth:");
	scanf("%d",&year);
	age = 2024 - year;
	if(age>=18)
		printf("You're Eligible to Vote");
	else
		printf("Please wait %d years to Vote",18-age);
}
