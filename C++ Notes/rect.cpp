#include<iostream>
#include<math.h>
using namespace std;

class Rectangle{
	float length;
	float width;
	
	public:
	void createRectangle(float length, float width){
		this->length = length;
		this->width = width;
	}
	
	void displayArea(){
		cout<<"Area of Rectange "<<length*width<<endl;
	}
	
};
int main(){
	Rectangle r1;
	float l,w;
	cout<<"Enter length and width"<<endl;
	cin>>l>>w;
	r1.createRectangle(l,w);
	r1.displayArea();
}
