#include <iostream>
using namespace std;

//creatin a class names rectangle
class Rectangle{
	private: //data members
		float length;
		float width;
	public:
		//constructor function
		Rectangle();
		Rectangle(float length,float width);
		Rectangle(float length);
		//member functions
		float area();
		void show();
		int sameArea(Rectangle r);				
		//destructor funtion
		~Rectangle();
};
// declaring constructor functions
Rectangle::Rectangle(){
	this->length = 0;
	this->width = 0;
}
Rectangle::Rectangle(float length,float width){
	this->length = length;
	this->width = width;
}
Rectangle::Rectangle(float length){
	this->length = length;
	this->width = length;
}
//declaring member functions
 float Rectangle::area(){
	return (this->length * this->width);
}
void Rectangle::show(){
	cout<<"length: "<<this->length<<" width: "<<this->width<<endl;
}
//checking the  area of two objects
int Rectangle::sameArea(Rectangle r){
	if(this->area() == r.area()){
		return 1;
	}
	else{
		return 0;
	}
}
//declaring destructor function
Rectangle::~Rectangle(){
	cout<<"Destructor is executed........."<<endl;
}

int main(){
	//creating objects of Rectangle
	Rectangle r1,r2(3.5,5.6),r3(4);
	//printing the length and width of objects
	r1.show();
	r2.show();
	r3.show();
	
	//printing area of objects
	Rectangle r4(4,5),r5(5,5);
	r4.show();
	cout<<"area of r4 = "<<r4.area()<<endl;
	r5.show();
	cout<<"area of r5 = "<<r5.area()<<endl;
	int result = r4.sameArea(r5);
	//checking the area of two objects if the area is same then returning 1 else 0
	if( result == 1){
		cout<<"both triangles have same area..."<<endl;
	}
	else{
		cout<<"both triangles do not have same area..."<<endl;
	}
	
	
}
