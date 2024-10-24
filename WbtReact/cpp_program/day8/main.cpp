#include <iostream>
using namespace std;
/*
//friend class
class demo{
	private:
		int private_var;
	protected:
		int protected_var;
	public:
		demo()
		{
			 private_var=10;
			 protected_var=20;
		}
		 friend class  Fun;
};

class Fun{
	public:
		void display(demo& t){
			cout<<"the value of private variable="<<t.private_var<<endl;
			cout<<"the value of protected variable="<<t.protected_var<<endl;	
		}
};

int main() {
	
	demo d;
	Fun f;
	f.display(d);
	return 0;
}


//global function as friend function


class base{
	private:
		int private_var;
	protected:
	    int protected_var;
	public:
	    base()
	      {
		
		    private_var=20;
		    protected_var=10;	
	      }    
	
	friend void friendfunction(base &);
};
void friendfunction(base& b)
{
	cout<<"the value of private variable is="<<b.private_var<<endl;
	cout<<"the value of protected variable is="<<b.protected_var<<endl;
}

int main(){
	base b1;
	friendfunction(b1);
	
	return 0;
}


//Member Function of Another Class as Friend Function

class base;
class otherbase{
	public:
	void memberfunction(base &);
};

class base{
	private:
	 int private_var;
	 
	protected:
	 int protected_var;
	 
	public:
	 base(){
	 	private_var=10;
	 	protected_var=40;	
	 }  
	 friend void otherbase::memberfunction(base &);
};

void otherbase::memberfunction(base &b)
{
	cout<<"the value of the private variable is="<<b.private_var<<endl;
	cout<<"the value of the protected variable is="<<b.protected_var<<endl;
}


int main(){
	base b1;
	otherbase b2;
	b2.memberfunction(b1);
	return 0;
}


//output should be 10
class box{
	private:
		int length;
	public:
     	box()
		 {
	    	length=5;
	     }	
	friend int printlength(const box &);
};

int printlength( const box& b)//pass by reference
    {
       return 10;
    }

int main(){
	
box b;
cout<<"the length of box:"<<printlength(b)<<endl;
return 0;

}


//Add Members of Two Different Classes

class B;
class A{
	public:
	 A():numA(12){}
	
	private:
	 int numA;
	 friend int add(A, B);
	 
};

class B{
	public:
		 B():numB(29){}
		
	private:
	int numB;
	friend int add(A,B);	
};

int add(A a,B b){
	return(a.numA+b.numB);
}
int main(){
	 A a;
	 B b;
	cout<<"the sum is:"<<add(a,b)<<endl;
	return 0;
}



//C++ Program to swap two members using Friend Function

class Swap{
int temp,A,B;
	public:
		Swap(int A,int B)
			{
				this->A=A;
				this->B=B;
			}
	friend void swap1(Swap&);
};

void swap1(Swap& s1)
{
	cout<<"before swapping:"<<s1.A<<" "<<s1.B<<endl;
	s1.temp=s1.A;
	s1.A=s1.B;
	s1.B=s1.temp;
	cout<<"after swapping:"<<s1.A<<" "<<s1.B<<endl;
	
}

int main(){
	
	Swap s(2,4);
	swap1(s);
	return 0;
}

//Create a class Swap, declare one variable in it, i.e., num and create a constructor for inputs.
 //Declare a friend function in it. Define the friend function outside the class scope by taking 
 //arguments as call by reference to pass the copy of Swap Object. Perform the swap operation.

class Swap{
int num;
	public:
		Swap(int num)
			{
				this->num=num;	
			}
	friend void swap(Swap&,Swap&);
};

void swap(Swap& s1, Swap& s2)
{
	int temp;
	cout<<"before swapping:"<<s1.num<<" "<<s2.num<<endl;
	temp=s1.num;
	s1.num=s2.num;
	s2.num=temp;
	cout<<"after swapping:"<<s1.num<<" "<<s2.num<<endl;
	
}

int main(){
	
	Swap s1(2),s2(3);
	swap(s1,s2);
	return 0;
}


//using namespace

namespace first_space{
	void func()
	{
		cout<<"inside the  first namespace.."<<endl;
	}
}

namespace second_space{
	void func(){
		cout<<"inside the second namespace.."<<endl;
	}
}

int main(){
	first_space::func();
	second_space::func();
	return 0;
}


  
  //faq
namespace first{
	int val=500;
}
int val=100;

int main()
{
	int val=200;
	
	cout<<"the first value is:"<<first::val<<endl;
}


namespace ns{
	class geek{
		public:
			void display()
			{
				cout<<"ns::geek::display()"<<endl;
			}
	};
}

int main(){
	ns::geek g;
	g.display();
}


//A class can also be declared inside namespace and defined outside namespace  

namespace ns{
	class geek;
}
class ns::geek{
	public:
		void display(){
		cout<<"ns::geek::display"<<endl;
		}
	
};
int main(){
	ns::geek g;
	g.display();
	return 0;
}
*/

class complex{
	int real,img;
	public:
		
	 complex();
	 complex(int,int);
	 void display();
	 complex operator+(complex&);
	 complex operator-(complex&);
	 complex operator-();
	 
	 };
	
	   complex::complex()
	    {
		  real=img=0;
	    }
	    
	   complex::complex(int real,int img) 
	    {
	   	 this->real=real;
	   	 this->img=img;
	    }
	    
	   void complex::display() 
	   {
	   	if(img>0)
	   	cout<<"the complex number is"<<real<<"+"<<img<<"i"<<endl;
	   	else
	   	cout<<"the complex number is"<<real<<img<<"i"<<endl;
	   }
	   
	  complex complex::operator+(complex & c) 
	  {
	  	complex temp;
	  	temp.real=this->real+c.real;
	  	temp.img=this->img+c.img;
	  	return temp;
	  }
	  
	 complex complex::operator-(complex & c) 
	 {
	 	complex temp;
	 	temp.real=this->real-c.real;
	 	temp.img=this->img-c.img;
	 	return temp;
	 }
	 
	 complex complex::operator-()
	 {
	 	complex temp;
	 	temp.real=this->real;
	 	temp.img=this->img;
	 	return temp;
	 }
	 


int main(){
	
	complex c1(2,4);
	complex c2(5,6);
	complex c3=c1-c2;
	c3.display();
	
	complex c4(4,5);
	complex c5=-c4;
	c5.display();
}
