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
void myTime::printTime(){
	cout<<hour<<":"<<minute<<"\n";
}
int square(int no){return no*no;}
double square(double no){return no*no;}

int main()
{
	myTime open, close;
	int h,m;
	open.setTime(10,30);
	close.setTime(17);
	cout <<"開張時間:";
	open.printTime();
	cout<<"結束時間:";
	close.printTime();
	int no1 = 14;
	double no2 = 35.4;
	cout<<no1<<"*"<<no2<<" = "<<
	square(no1)<<"\n";
	cout<<no2<<"*"<<no2<<" = "<<
	square(no2)<<"\n"; 
}
