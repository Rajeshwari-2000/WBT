#include <iostream>
using namespace std;
//case1:object creation on stack with out virtual keyword
class employee{
	int id;
public:
	employee();
	employee(int);
	    void display();
		int findsalary()
			{
				return 0;
			}
};
employee::employee()
{
	cout<<"in default of emp"<<endl;
	id=0;
}

employee::employee(int i)
{
	cout<<"in para of emp"<<endl;
	id=i;
}

void employee::display()
{
	cout<<"id of the employee is:"<<id<<endl;
}


class wageemployee:public employee
{
	int hrs,rate;
	public:
		wageemployee();
		wageemployee(int,int,int);
		 int findsalary();
		void display();
};

wageemployee::wageemployee()
{
	cout<<"in default of wage"<<endl;
	hrs=0;
	rate=0;
}

wageemployee::wageemployee(int i, int h,int r):employee(i)

{
	cout<<"in para of wage"<<endl;
	hrs=h;
	rate=r;
}

int wageemployee::findsalary()
{
	return hrs*rate;
}
   void wageemployee::display()
   {
   	employee::display();
   	cout<<hrs<<endl;
   	cout<<rate<<endl;

   }

int main() {
	employee * ptr;
	wageemployee w1(1,6,564);
	ptr=&w1;
	cout<<"Salary is:"<<ptr->findsalary();
	ptr->display();	
	return 0;
}
