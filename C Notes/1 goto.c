#include<stdio.h>
void main(){
 int i=1,n;
 printf("enter the value for n");
 scanf("%d",&n);
 up:printf("%d ",i);
 i++;
 if (i<=n)
goto up;
}
