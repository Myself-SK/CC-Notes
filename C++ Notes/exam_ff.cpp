#include<iostream>
using namespace std;
class External;
class Internal{
	int int_marks;
	public:
		void read(){
			cout<<"Enter your Internal Marks"<<endl;
			cin>>int_marks;
		}
		friend void Tabulate(Internal,External);
};
class External{
	int ext_marks;
	public:
		void read(){
			cout<<"Enter your External Marks"<<endl;
			cin>>ext_marks;
		}
		friend void Tabulate(Internal,External);
};
void Tabulate(Internal i, External e){
	int total = i.int_marks+e.ext_marks;
	cout<<"----------Report----------"<<endl;
	cout<<"Internals:\t"<<i.int_marks<<endl;
	cout<<"Externals:\t"<<e.ext_marks<<endl;
	cout<<"Total:\t\t"<<total<<endl;
	if(total<35)
		cout<<"Result:\t\tFail"<<endl;
	else
		cout<<"Result:\t\tPass"<<endl;
}
int main(){
	Internal i;
	External e;
	i.read();
	e.read();
	Tabulate(i,e);
	
}

