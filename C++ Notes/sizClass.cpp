#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
		A(){
			cout<<"Constructor"<<endl;
			a=10,b=20;
		}
};
int main(){
	int a;
	A b;
	cout<<sizeof(A)<<endl;
}
