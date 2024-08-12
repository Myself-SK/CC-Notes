#include<iostream>
using namespace std;
int inc(int x){
	x++;
	return x;
}
int main(){
	int a=10;
	cout<<a<<endl;
	a=inc(a);
	cout<<a;
}
