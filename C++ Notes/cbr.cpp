#include<iostream>
using namespace std;
int inc(int *x){
	*x= *x+1;
}
int main(){
	int a=10;
	cout<<&a<<endl;
	inc(&a);
	cout<<a;
}
