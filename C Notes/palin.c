#include<stdio.h>
void main(){
	int n,rev=0,temp;
	printf("Enter a Number");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		rev=rev*10+n%10;
		n=n/10;
	}
	if(temp==rev)
		printf("Palindrome");
	else
		printf("Not a Palindrome");
		
}
