#include <iostream>
using namespace std;

class person{
	public:
	person(int age):age(age){
		cout<<" person constructor is called"<<endl;
		cout<<"Age is:"<<age<<endl;	
	}
	
		int age;
};

class father:virtual public person{
	public:
	father(int age):person(age) {
			cout<<"father constructor is called"<<endl;
			cout<<"Age is:"<<age<<endl;	
	}
};

class mother:virtual public person{
	public:
	mother(int age):person(age) {
			cout<<"mother constructor is called"<<endl;
			cout<<"Age is:"<<age<<endl;	
	}
};

class child:public father,public mother{
	public:
	child(int age):person(age),father(age),mother(age) {
			cout<<"child constructor is called"<<endl;	
	}
};

int main() {
	child c1(20);
	return 0;
}
