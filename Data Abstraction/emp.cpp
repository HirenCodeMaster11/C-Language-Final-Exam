#include<iostream>
using namespace std;
//Q.1 Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child 
//classes.
//- Class Admin -> Class Manager
//- Class Manager -> Class Employee
//- Class Admin has the following members:
//company_name
//manager_salary
//employee_salary
//total_staff
//total_annual_revenue
//can_terminate
//- use all attributes accessibility in the parent class and child class properly.
//- override a method myAccess() in both child classes to display all parent class members' values accordingly.

class Admin
{
	protected :
		string company_name = "AHIR EMPIRE";
		int manager_salary = 100000;
		int employee_salary = 50000;
		int total_staff = 5000;
		int total_annual_revenue = 159888761;
		int can_terminate = 30;
		
		public :
			
		void get()
		{
			cout << "Admin Access :" << endl << endl;
			cout << "Company Name :" << company_name << endl;
			cout << "manager_salary :" << manager_salary << endl;
			cout << "employee_salary :" << employee_salary << endl;
			cout << "total_staff :" << total_staff << endl;
			cout << "total_annual_revenue :" << total_annual_revenue << endl;
			cout << "can_terminate :" << can_terminate << endl << endl;
		}
};

class Manager : public Admin
{
	public :
	void get()
	{	
		cout << "Manager Access :" << endl << endl;
		cout << "Company Name :" << company_name << endl;
		cout << "manager_salary :" << manager_salary << endl;
		cout << "employee_salary :" << employee_salary << endl;
		cout << "total_staff :" << total_staff << endl;
		cout << "can_terminate :" << can_terminate << endl << endl;
	}
};

class Employee : public Manager
{
	public :
	void get()
	{		
		cout << "Employee Access :" << endl << endl;
		cout << "Company Name :" << Admin :: company_name << endl;
		cout << "employee_salary :" << employee_salary << endl;
		cout << "total_staff :" << total_staff << endl;
	}
};

int main()
{
	Manager m1;
	Admin a1;
	Employee e1;
	
	a1.get();
	m1.get();
	e1.get();
	return 0;
}