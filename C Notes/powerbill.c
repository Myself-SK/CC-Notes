// Program to calculate bill based on power consumption
// <100 : 2rs per unit
// <250 : first 100: 2, next 150 3
// <400: first 100:2, next 150: 3, next 150: 4
// >400: first 100:2, next 150: 3, next 150: 4, next 5:

// 550: 200+450+600+750 => 2000

#include<stdio.h>
void main(){
	int unit,price;
	printf("Enter total units Consumed:");
	scanf("%d",&unit);
	if (unit<0)
		printf("Invalid Unit Entered");
	else{
		if(unit<100)
			price = unit*2;
		else if(unit>=100 && unit<250)
			price = 100*2+(unit-100)*3;
		else if(unit>=250 && unit<400)
			price = 100*2+150*3+(unit-250)*4;
		else
			price = 100*2+150*3+150*4+(unit-400)*5;
		printf("Price for unit consumed is %d",price);
	}
}
