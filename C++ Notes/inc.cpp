#include<iostream>
using namespace std;
int b=100,a=10;
void display(){
	cout<<b<<endl;
}
int main(){
	int a=10;
	{
		int a=30;
		int b=20;
		cout<<b+::a;
	}
}

