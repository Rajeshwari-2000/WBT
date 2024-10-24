#include<iostream>
using namespace std;

class account{
	protected:
	float bonus=2000;
};


class programmer:public account
{
	public:
		float monthly_salary=5000;
		void calculateSalary(){
			cout<<"salary of programmer:"<<monthly_salary+bonus<<endl;
		}
	
};
int main(){
	
	programmer p1;
	p1.calculateSalary();
	return 0;
}
