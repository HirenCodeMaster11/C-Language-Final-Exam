#include<iostream>
using namespace std;

//Write a Program to read and print Employee information with the use of Multilevel inheritance. 

class A
{
	protected :
		
	int id,salary,experience;
	int contact;
	string name,role,comp_name,address;
	public :
	void set()
	{
		cout << "Enter the id : ";
		cin >> id;
		cin.ignore();
	
		cout << "Enter the name : ";
		getline(cin,name);
		
		cout << "Enter the role : ";
		getline(cin,role);
	}
};
class B : public A
{
	protected :
		int salary,experience;
	public :	
	
	void set()
	{
		A::set();
		cout << "Enter the salary : ";
		cin >> salary;
		cin.ignore();
		
		cout << "Enter the experience : ";
		cin >> experience;
		cin.ignore();
	}
		

};
class C : public B
{
	protected :
		string comp_name,address;
	public :	
	void set()
	{
		B::set();
		cout << "Enter the comp_name : ";
		getline(cin,comp_name);
		cout << "Enter the address : ";
		getline(cin,address);
	}
	void get()
	{
		cout << "Name is " << name << endl;
		cout << "Role is " << role << endl;
		cout << "Salary is " << salary << endl;
	}	
};

class D : public C
{
	protected :
		string email;
		int contact;
	public :	
	void set()
	{
		C::set();
		cout << "Enter the email : ";
		getline(cin,email);
		
		cout << "Enter the contact : ";
		cin >> contact;
		cin.ignore();
	}
	void get()
	{
		
		cout << "ID is " << id << endl;
		C::get();
		cout << "experience is " << experience << endl;
		cout << "comp_name is " << comp_name << endl;
		cout << "email is " << email << endl;
		cout << "contact is " << contact << endl;
	}	
};

int main()
{	
	D d1;
	d1.set();
	d1.get();
		
	return 0;
}
