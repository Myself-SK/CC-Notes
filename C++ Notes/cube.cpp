#include<iostream>
using namespace std;
int cube(int);
int main(){
	int n;
	cout<<"Enter a Number"<<endl;
	cin>>n;
	cout<<"Cube of "<<n<<" = "<<cube(n);
}
int cube(int x){
	return x*x*x;
}
