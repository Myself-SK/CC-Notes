#include<iostream>
using namespace std;
int fact(int);
int main(){
	int n,r,res;
	cout<<"Enter a vaule of N"<<endl;
	cin>>n;
	
	cout<<"Enter a vaule of R"<<endl;
	cin>>r;
	cout<<"Combination of "<<fact(n)/(fact(n-r)*fact(r));
}
int fact(int x){
	int f=1;
	for(int i=1;i<=x;i++)
		f=f*i; // f*=i;
	return f;
}
