#include<iostream>
#include<string.h>
using namespace std;

class Person{
	char name[100];
	int age;
	public:
	void setPerson(char [], int);
	void displayPerson();
	int canVote();
};
void Person::setPerson(char name[], int age){
	strcpy(this->name,name);
	this->age = age;
}
void Person::displayPerson(){
	cout<<name<<" "<<age<<endl;
}
int Person::canVote(){
	return age>18?1:0;
}
int main(){
	Person p1,p2;
	p1.setPerson("Shiva",25);
	p2.setPerson("Dishu",5);
	p1.displayPerson();
	p2.displayPerson();
	if(p1.canVote())
		cout<<"Eligible to Vote"<<endl;
	else		
		cout<<"Not eligible to Vote"<<endl;
	
	if(p2.canVote())
		cout<<"Eligible to Vote"<<endl;
	else		
		cout<<"Not eligible to Vote"<<endl;
}
