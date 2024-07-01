#include<stdio.h>
void main(){
    int prod,price,total,dis,net;
    printf("Enter total number of products:");
    scanf("%d",&prod);
    printf("Enter price per product:");
    scanf("%d",&price);
    total = prod*price;
    dis = total>2500?total*0.1:0;
    net = total-dis;
    printf("Total = %d\n",total);
    printf("Discount = %d\n",dis);
    printf("Net = %d\n",net);
}
