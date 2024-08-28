#include<iostream>
using namespace std;

class Factorial{
	int f;
	public:
		void setF(int f){
			this->f=f;
		}
		int fact(int);
};
int Factorial::fact(int f){
	if(f==1)
		return 1;
	else
		return f*fact(f-1);
}
int main(){
	int n=5;
	Factorial f;
	f.setF(n); 
	cout<<f.fact(n)<<endl;
}
