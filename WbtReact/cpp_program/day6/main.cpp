#include <iostream>
using namespace std;

class Animal{
	public:
		void eat(){
			cout<<"i can eat"<<endl;
		}
		
		void sleep(){
			cout<<"i can sleep"<<endl;
		}
};
class dog:public Animal
{
	public:
	     void bark()
	 {
		cout<<"i can bark"<<endl;
	}
	
};

int main(){
	
	dog dog1;
	dog1.eat();
	dog1.sleep();
	dog1.bark();
	
		
}
