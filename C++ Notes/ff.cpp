#include<iostream>
using namespace std;
class Employee{
	char name[200];
	int exp;
	public:
		void read(){
			cout<<"Enter Name and Experience"<<endl;
			cin>>name>>exp;
		}
		void display(){
			cout<<"Name\t\t"<<name<<endl;
			cout<<"Exp\t\t"<<exp<<endl;
		}
		friend Employee Interview(Employee &, Employee &);
};
Employee Interview(Employee &e1, Employee &e2){
	if(e1.exp > e2.exp)
		return e1;
	else
		return e2;
}
int main(){
	Employee emp1, emp2;
	emp1.read();
	emp2.read();
	Employee selected = Interview(emp1,emp2);
	selected.display();
}
