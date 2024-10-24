#include<iostream>
using namespace std;
class A
{
	int c;
public:
	int a;
protected:
	int b;
public:
	A(){
		a=b=c=0;
	}
	A(int a , int b , int c){
		this->a=a;
		this->b=b;
		this->c=c;
	}
	void show()
	{
		cout<<"in display of A"<<endl;
		cout<<"Value of a is "<<a<<" & "<<"Value of b is "<<b<<" & "<<"Value of c is "<<c<<endl;
	}
};
class B:public A
{
public:
		public:
	void show()
	{	
		cout<<"in display of B"<<endl;
		cout<<"Value of a is "<<a<<" & "<<"Value of b is "<<b<<endl;
	}
};
class C:public B
{
	public:
	void show()
	{
		cout<<"in display of C"<<endl;
		cout<<"Value of a is "<<a<<" & "<<"Value of b is "<<b<<endl;
	}
};
int main()
{
	B bobj;
	bobj.show();
	cout<<endl;
	A aobj(10,20,30);
	aobj.show();
	
}
