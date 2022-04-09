#include <iostream>
using namespace std;

class Complex{
	//initializing data members
	float real;
	float imag;
	public:
		//initializing data functions
		void set(float real, float imag);
		void disp();
		Complex sum(Complex x, Complex y);
		
};
//declaring data functions
void Complex::set(float real, float imag){
	this->real = real;
	this->imag = imag;
}
//displaying the real and imaginary part
void Complex::disp(){
	cout<<"real: "<<this->real<<" imag: "<<this->imag<<endl;
}
//adding two complex numbers
Complex Complex::sum(Complex x, Complex y){
	this->real = x.real + y.real;
	this->imag = x.imag + y.imag;
	
}

int main(){
	//declarign objects of the class
	Complex c1,c2,c3;
	//setting the values to the objects
	c1.set(5.2,6.4);
	c2.set(22,6);
	c3.sum(c1,c2);
	//displaying the values of the objects
	c1.disp();
	c2.disp();
	c3.disp();
}
