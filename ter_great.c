#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the value of A:");
    scanf("%d",&a);
    printf("Enter the value of B:");
    scanf("%d",&b);
    a>b? printf("A is Greater") :(a<b?printf("B is Greater"):printf("Both are Equal"));
}
