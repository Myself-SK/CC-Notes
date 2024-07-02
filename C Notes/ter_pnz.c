#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the value of A:");
    scanf("%d",&a);
    a>0? printf("Positive") :(a<0?printf("Negative"):printf("Zero"));
}
