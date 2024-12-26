#include<iostream>
using namespace std;

class myTime{
	private:
	    int hour;
	    int minute;
	public:
		void setTime(int h,int m){
			hour = h;
			minute = m;
		}
		void setTime(int h){
			hour = h;
			minute = 0;
		}
		int getHour(){return hour;}
		int getMinute(){return minute;}
		void printTime();
}; 
void myTime::printTime(){
	cout<<hour<<":"<<minute<<"\n";
}
