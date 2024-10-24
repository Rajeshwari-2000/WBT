#include<iostream>
using namespace std;

class complex{
	int real,img;
	public:
		complex(int,int);
		complex();
		void show();
		complex operator++(int); //post
		complex operator++(); //pre
};
//complex complex::operator++(int){
//	complex temp = *this;
//	++this->real ;
//	++this->img;
//	return temp;
//}
complex complex::operator++(){
	
	++this->img = this->real + 1;
	++this-> real;
	return *this;
	
}
complex::complex(int r,int i){
	real = r;
	img = i;
}
complex::complex(){
	cout<<"Default constructor"<<endl;
}
void complex::show(){
	cout<<"value of complex no is: "<<real<<"+"<<img<<"i"<<endl;
}
int main(){
	complex c1(1,2);
//	c1.show();
//	int a =10;
//	int b = a++; //b = 10 a =11
//	complex c2 = c1++; //c1 = c1.operator++(1) //post
//	c2.show();
//	c1.show();
	complex c3 = ++c1;
	c3.show();
	c1.show();
}
