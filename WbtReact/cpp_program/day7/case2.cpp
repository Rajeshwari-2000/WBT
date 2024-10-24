#include<iostream>
using namespace std;

 //case 2: object creation on heap with new operator without virtual keyword
 class employee{
 			int id
 	public:
        employee();
        employee(int);
 		void display();
 		int findsalary();
 		{
 			return 0;
		 }
 };
  employee::employee()
  cout<<"in default of emp"<<endl;
   id=0;
   employee::employee(int i)
   {
   	cout<<in para of emp<<endl;
   	id=i;
   }
   void employee::display()
   {
   	cout<<"id of emp is"<<id<<endl;
   	
   }
   class wageemployee:employee()
   {
   	int hrs,rate;
   	public:
   		wageemployee();
   		wageemployee(int,int,int);
   		void display();
		int findsalary();   
		   
}
  wageemployee::wageemployee()
{
	cout<<"n default of wage"<<endl;
	rate=0;
	hrs=0;
}
wageemployee::wageemployee(int i,int h,int r):employee(i) 
{
	cout<<"in para of wage"<<endl;
	hrs=h;
	rate=r;
}
		      
