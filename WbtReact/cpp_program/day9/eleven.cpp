#include <iostream>
using namespace std;
#include<string.h>
/*
/*
class Account{
	public:
		int accno;
		char name[10];
		static float interest_rate;
		
		Account(int accno,char*name)
		{
			this->accno=accno;
			strcpy(this->name,name);
		}
		void display()
		{
			cout<<accno<<" "<<name<<" "<<interest_rate<<endl;
		}
};
float Account::interest_rate=6.5;
int main() {
	Account a1=Account(101,"rahul");
    Account a2=Account(102,"rahul");
	a1.display();
	a2.display();

	return 0;
}

 
 
 //exercise
 
 class complex{
 	int real,img;
 	public:
 		static const int cnt;
 	private:
 		 static const int cnt1;
 		 
 	public:
 		complex()
		 {
 		 	cout<<"default is invoked"<<endl;
 		 	real=5;
 		 	img=5;
		  }
			  
    static int getcnt()
		{
			return cnt1;
		}	
 };
 const int complex::cnt=5;
 const int complex::cnt1=10;
 
 int main(){
 	
 	complex c1;
 	cout<<"number of object created:"<<complex::getcnt()<<endl;
 	cout<<"size of object is:"<<sizeof(c1)<<endl;
 	cout<<complex::cnt;
 }

 

class Test
{
static int x;
   public:
	Test(){x++;}
	static int getX(){return x;}
};
int Test::x;
int main()
{
cout <<Test::getX()<<" ";
}


 
 class player{
 	private:
 		int id;
 		static int next_id;
 	public:
	    int getID(){return id;}
	    player(){id=next_id++;}   
 };
 
 int player::next_id=1;
 
 int main(){
 	
 	player p1;
 	player p2;
 	player p3;
 	cout<<p1.getID()<<""<<endl;
 	cout<<p2.getID()<<""<<endl;
 	cout<<p3.getID()<<endl;
 	return 0;
 }
 
  
  
  //Array of Pointer to Strings


int main() {
    
    char* names[5] = {"rajeshwari", "siya", "priya", "ram", "raj"};
    for (int i = 0; i < 5; i++) {
        //<<"The names is:"<<names[i]<<endl;
        //cout<<"the address is:"<<&names[i]<<endl;
        cout<<"the first letter is:"<<*(*(names+i)+0)<<endl;
    }
    return 0;
}


//exercise

class point{
	public:
	point(){
		cout<<"the constructor is called"<<endl;
	}
};

int main(){
	point p;
	return 0;
}



class point{
	public:
	point(){
		cout<<"the constructor is called"<<endl;
	}
};
int main(){
	point p1;
	point* p2 = new point(); 
    delete p2; 
	return 0;
}
*/


//math library
//square
/*
#include<cmath>

int main(){
	double answer;
	answer=sqrt(9);
	cout<<"Square root of: "<<answer<<endl;
	return 0;
}

//absolute value


int main(){
	int val1,val2;
	val1=abs(3.4);
	val2=abs(-3);
	cout << "absolute value of(3.4) =" <<val1<<"\n";
    cout << "absolute value of(-4.5) =" <<val2<<"\n";
    return 0;
}


//power

int main(){
	int base=5;
	int exponent=4;
	int power=pow(base,exponent);
	cout<<"power is:"<<power<<endl;
	return 0;
}


//ceil for positive value

int main(){
	float x=10.2;
	cout<<"the initial value is="<<x<<endl;
	cout<<"final value is="<<ceil(x)<<endl;
	return 0;
}


//ceil for negative value

int main(){
	float x=-3.4;
	cout<<"the initial value is="<<x<<endl;
	cout<<"the final value is="<<ceil(x)<<endl;
	return 0;
}


//floor 

int main(){
	float z=2.6;
	float y=-4.6;
	
	cout<<"the initial value is="<<z<<endl;
	cout<<"the final value is="<<floor(z)<<endl;
	
	cout<<"the initial value is="<<y<<endl;
	cout<<"the final value is="<<floor(y)<<endl;
	
	return 0;
}


//round

int main(){
	
	float z=2.4;
	float a=-3.1;
	
	cout<<"before number is:"<<z<<endl;
	cout<<"the after nuumber is:"<<round(z)<<endl;
	
	cout<<"before number is:"<<a<<endl;
	cout<<"the after nuumber is:"<<round(a)<<endl;
	
	return 0;
}



//Question on inheritance
 //example1
   
class base1{
	public:
		base1(){
			cout<<" base1 constructor called...."<<endl;
		}
};

class base2{
	public:
		base2(){
			cout<<" base2 constructor called...."<<endl;
		}
};
class derived:public base1,public base2
{
	public:
	derived(){
		cout<<"derived constructor called...."<<endl;
	}
};

int main(){
	derived d;
	return 0;
}

//output:base1 constructor called....
      // base2 constructor called....
      // derived constructor called....
      
     
  //example2    
      class base1{
      	public:
      	~base1(){
      		cout<<"base1 destructor called...."<<endl;
		  }
	  };
	  
	  class base2{
	  	public:
	  	~base2(){
	  			cout<<"base2 destructor called...."<<endl;
		  }
	  };
	  
	  class derived:public base1,public base2
	  {
	  	public:
	  		derived(){
	  				cout<<"derived destructor called...."<<endl;
			  }
			    };
			    
			    int main(){
			    	derived d;
			    	return 0;
				}
				
//output:derived destructor called....
//base2 destructor called....
//base1 destructor called....	


 //example3
 class P{
 	public:
 	void print(){
 		cout<<"print p..."<<endl;
	 }
 };
 
 class Q:public P
 {
 	public:
 		void print(){
 			cout<<"print Q..."<<endl;
		 }
 };
 
 class R:public Q
 {
 	
 };
 
 int main()
 {
 	R r;
 	r.print();
 }
 
 //output:print Q...
 */
 
 //overloading of increment operator
 
 class complex{
 	int real,img;
 	public:
 		complex(int,int);
 		void display();
 		
 		complex operator++();
 		complex operator++(int);
 		complex();
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
 	cout<<"complex number is" <<real<<"+"<<img<<"i"<<endl;
 	else
 	cout<<"complex number is"<<real<<img<<"i"<<endl;
 }
 
 complex complex::operator++()
 {
 	++this->real;
 	++this->img;
 	return(*this);
 }
 
 complex complex::operator++(int)
 {
 	complex temp;
 	++this->real;
 	++this->img;
 	return temp;
 }
 
 int main(){
 	
 	*int a=10;
 	int b;
 	b=a++;
 	
 	complex c1(1,2);
 	complex c2=++c1;
 	
 	c1.display();
 	c2.display();
 	
 	int a=8;
 	int b;
 	b=++a;
 	
 	complex c1(1,2);
 	complex c2=c1++;
 	
 	c1.display();
 	c2.display();
 	
 }
 
 
 class complex{
 	int real,img;
 	public:
 		complex(int,int);
 		void display();
 		
 		complex operator--();
 		complex operator--(int);
 		complex();
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
 	cout<<"complex number is" <<real<<"+"<<img<<"i"<<endl;
 	else
 	cout<<"complex number is"<<real<<img<<"i"<<endl;
 }
 
 complex complex::operator--()
 {
 	--this->real;
 	--this->img;
 	return(*this);
 }
 
 complex complex::operator--(int)
 {
 	complex temp;
 	--this->real;
 	--this->img;
 	return temp;
 }
 
 int main(){
 	
 	int a=10;
 	int b;
 	b=a--;
 	
 	complex c1(1,2);
 	complex c2=--c1;
 	
 	c1.display();
 	c2.display();
 	
 	int a=8;
 	int b;
 	b=--a;
 	
 	complex c1(1,2);
 	complex c2=c1--;
 	
 	c1.display();
 	c2.display();
 	
 }
 	
	 
	 //assignment operator
	 
	 class car{
	 	private:
	 	   string name;
	 	   int cost;
	 	public:
		 car(string n,int c)
		 {
		 	name=n;
		 	cost=c;
		 }   
	 	bool operator==(car& c){
	 		if(name==c.name&&cost==c.cost)
	 		return true;
	 		return false;
	 		
		 }
		 	 };	
		 int main(){
		 	 car c1("santro",500000);
		 	 car c2("safari",700000);
		 	 if(c1==c2)
		 	 cout<<"Equivalent..."<<endl;
		 	 else
		 	 cout<<"not Equivalent..."<<endl;
		 	 
		 	 return 0;
		 }
	 
		 
class date1{
	int day;
	int month;
	int year;
		public:
		 		
	date1(int d,int m,int y)
	{
	    day=d;
		month=m;
		year=y;
	}
				 
	friend void operator+(date1&, int);
	friend void operator-(date1&,int);
				 
	void display()
	    {
		cout<<"Date:"<<day<<"-"<<month<<"-"<<year<<"-"<<endl;
		}
		 };	
		 
 void operator+(date1&x,int y)
	{
		x.day=x.day-y;
		x.month=x.month-3;
		x.year=x.year-6;
		
		cout<<"Date:"<<x.day<<"/"<<x.month<<"/"<<x.year<<endl;
	}
				 
 void operator-(date1&x,int y)
	{
		x.day=x.day+y;
		x.month=x.month+3;
		x.year=x.year+6;
		
		cout<<"Date:"<<x.day<<"/"<<x.month<<"/"<<x.year<<endl;
	
	}
	
	int main(){
		int dd,mm,yy;
		cout<<"enter date:"<<endl;
		cin>>dd;
		
		cout<<"enter month:"<<endl;
		cin>>mm;
		
		cout<<"enter year:"<<endl;
		cin>>yy;
		
		date1 d1(dd,mm,yy);
		d1-1;
		d1+2;
		return 0;
	}
	
		
		
class time
{
    int hr;
    int min;
    int sec;
      public:
   time(int h,int m,int s)
      {
        hr=h;
        min=m;
        sec=s;
       }
             
    friend time operator-(time &,int);
    friend time operator+(time &,int);
void display()
             {
                  cout<<"time:"<<hr<<":"<<min<<":"<<sec<<endl;
             }
};
time operator-(time &x,int y)
{
     x.hr= x.hr-y;
     x.min= x.min-y;
     x.sec= x.sec-y;
     return x;
}
time operator+(time &x,int y)
{
     x.hr= x.hr+y;
     x.min= x.min+y;
     x.sec= x.sec+y;
     return x;
}
int main()
{
    int hr,min,sec;
    cout<<"Enter hr:";
    cin>>hr;
    cout<<"Enter Min:";
    cin>>min;
    cout<<"Enter sec:";
    cin>>sec;
    
    time t(hr,min,sec);
    t=t-1;
    t.display();
    
    return 0;
}			 			 			
	 	
	 	
	 	
	 	
	
