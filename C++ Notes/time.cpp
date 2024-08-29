#include<iostream>
using namespace std;
class Time{
	int hh,mm,ss;
	public:
		Time(){
			cout<<"Do Nothing Constructor"<<endl;
		}
		Time(int hh){
			this->hh=hh;
			this->mm = this->ss = 0;
		}
		Time(int hh,int mm){
			this->hh=hh;
			this->mm = mm;
			this->ss = 0;
		}
		Time(int hh,int mm,int ss){
			this->hh=hh;
			this->mm = mm;
			 this->ss =ss;
		}
		void setTime(int hh,int mm,int ss){
			this->hh=hh;
			this->mm=mm;
			this->ss=ss;
		}
		
		void displayTime(){
			cout<<hh<<":"<<mm<<":"<<ss<<endl;
		}
		
		void increment(){
			ss++;
			if(ss>=60){
				ss=0;
				mm++;
			}
			if(mm>=60){
				mm=0;
				hh++;
			}
			if(hh>=24){
				hh=0;
			}
		}
};
int main(){
	Time t(10,20);
	t.displayTime();
	t.increment();
	t.displayTime();
}
