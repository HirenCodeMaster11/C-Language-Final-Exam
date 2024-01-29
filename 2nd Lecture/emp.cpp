#include<iostream>
#include<string.h>
using namespace std;

class Emp
{
	public :
		
	int emp_id,emp_age,emp_salary,emp_experience;
	string line,emp_name,emp_role,emp_city,emp_company_name;
	
	void input()
	{
		cout << "Enter the emp_id : ";
		cin >> emp_id;
		getline(cin,line);
		cout << "Enter the emp_name : ";
		cin >> emp_name;
		cout << "Enter the emp_age : ";
		cin >> emp_age;
		getline(cin,line);
		cout << "Enter the emp_role : ";
		cin >> emp_role;
		cout << "Enter the emp_salary : ";
		cin >> emp_salary;
		getline(cin,line);
		cout << "Enter the emp_city : ";
		cin >> emp_city;
		cout << "Enter the emp_experience : ";
		cin >> emp_experience;
		getline(cin,line);
		cout << "Enter the emp_company_name : ";
		cin >> emp_company_name;	
	}	
	
	void out()
	{
		cout << "Employee ID : " << emp_id << endl;
		cout << "Employee Name : " << emp_name << endl;
		cout << "Employee Age : " << emp_age << endl;
		cout << "Employee Role : " << emp_role << endl;
		cout << "Employee Salary : " << emp_salary << endl;
		cout << "Employee City : " << emp_city << endl;
		cout << "Employee Experience : " << emp_experience << endl;
		cout << "Employee Company Name : " << emp_company_name << endl << endl;
	}
};
int main()
{
	Emp emp[5];
	
	int i;
	
	for(i=0; i<5; i++)
	{
		cout << "Employee Information !!" << endl;
		emp[i].input();
		emp[i].out();
	}
	return 0;
}
