#include <iostream>
using namespace std;

//declaring a class named Time
class Time{
	int hour;
	int minute;
	int second;
	
	public://declaring construtor functions
		Time();
		Time(int hour, int minute, int second);
		
		//declaring member funtions
		void display();
		void addTime(Time x, Time y);
};
//initilizing consturtor fuctions
Time::Time(){
	this->hour = 0;
	this->minute = 0;
	this->second = 0;
}
Time::Time(int hour, int minute, int second){
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}

//initializing member functions
void Time::display(){
	cout<<"time: "<<this->hour<<":"<<this->minute<<":"<<this->second<<endl;
}
//adding two time objects and storing new time in third object
void Time::addTime(Time x ,Time y){
	int totalTimeX = ((x.hour*3600)+(x.minute*60) + x.second);
	int totalTimeY =  ((y.hour*3600)+(y.minute*60) + y.second);
	int totalTime = totalTimeX + totalTimeY;
	this->hour = totalTime / 3600;
	this->minute = (totalTime % 3600) / 60;
	this->second = (totalTime % 3600)%60;
}	
int main(){
	//declaring time objects
	Time t1(1,3,20),t2(2,61,70),t3;
	//adding two time objects
	t3.addTime(t1,t2);
	//displaing the values
	t3.display();
}
