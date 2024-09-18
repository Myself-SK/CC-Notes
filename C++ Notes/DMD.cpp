#include<iostream>
using namespace std;
class USim{
	public:
		virtual void call()=0;
		virtual void sms()=0;
		virtual void specialFeature()=0;
};
class Airtel:public USim{
	public:
		void call(){
			cout<<"Calling from Airtel"<<endl;
		}
		void sms(){
			cout<<"Sending SMS from Airtel"<<endl;
		}
		void specialFeature(){
			cout<<"Utilizing Airtel Xtream App"<<endl;
		}
};

class Jio:public USim{
	public:
		void call(){
			cout<<"Calling from Jio"<<endl;
		}
		void sms(){
			cout<<"Sending SMS from Jio"<<endl;
		}
		void specialFeature(){
			cout<<"Utilizing Jio App"<<endl;
		}
};

class VI:public USim{
	public:
		void call(){
			cout<<"Calling from VI"<<endl;
		}
		void sms(){
			cout<<"Sending SMS from VI"<<endl;
		}
		void specialFeature(){
			cout<<"Utilizing Free Data at Midnight"<<endl;
		}
};
int main(){
	USim *a;
	while(1){
		
		cout<<"Select Sim"<<endl;
		cout<<"1. Airtel"<<endl<<"2. Jio"<<endl<<"3. VI"<<endl;
		int c;
		cin>>c;
		if(c==1){
			a = new Airtel();
			a->call();
			a->sms();
			a->specialFeature();
		}
		
		else if(c==2){
			a = new Jio();
			a->call();
			a->sms();		
			a->specialFeature();
		}
		
		else if(c==3){
			a = new VI();
			a->call();
			a->sms();
			a->specialFeature();
		}
		else
			break;
	}
}
