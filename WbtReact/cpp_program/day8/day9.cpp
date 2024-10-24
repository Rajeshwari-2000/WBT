#include <iostream>
using namespace std;
#include<string.h>
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


//math library
//square
#include<cmath>

int main(){
	double answer;
	answer=sqrt(9);
	cout<<"Square root of: "<<answer<<endl;
	return 0;
}

//absolute value

#include<cmath>

int main(){
	int val1,val2;
	val1=abs(3.4);
	val2=abs(-3);
	cout << "absolute value of(3.4) =" <<val1<<"\n";
    cout << "absolute value of(-4.5) =" <<val2<<"\n";
    return 0;
}

*/
//power
#include<cmath>
int main(){
	int base=5;
	int exponent=4;
	int power=pow(base,exponent);
	cout<<"power is:"<<power<<endl;
	return 0;
}


