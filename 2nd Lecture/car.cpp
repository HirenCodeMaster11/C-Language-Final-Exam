#include<iostream>
#include<string.h>
using namespace std;

class Emp
{
	public :
		
	int car_id,car_release_year;
	string line,car_color,car_model,car_company_name;
	
	void input()
	{
		cout << "Enter the car_id : ";
		cin >> car_id;
		getline(cin,line);
		
		cout << "Enter the car_company_name : ";
		cin >> car_company_name;
		
		getline(cin,line);
		cout << "Enter the car_color : ";
		cin >> car_color;
		
		getline(cin,line);
		cout << "Enter the car_model : ";
		cin >> car_model;
		
		cout << "Enter the car_release_year : ";
		cin >> car_release_year;
	}	
	
	void out()
	{
		cout << "Car ID : " << car_id << endl;
		cout << "Car Company Name : " << car_company_name << endl;
		cout << "Car Color : " << car_color << endl;
		cout << "Car Model : " << car_model << endl;
		cout << "Car Release Year : " << car_release_year << endl << endl;
	}
};
int main()
{
	Emp emp[4];
	
	int i;
	
	for(i=0; i<4; i++)
	{
		cout << "Car Information !!" << endl;
		emp[i].input();
		emp[i].out();
	}
	return 0;
}
