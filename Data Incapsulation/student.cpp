#include<iostream>
#include<string.h>
using namespace std;

class Stu
{
	int stu_id,stu_age;
	string line,stu_name,stu_city,stu_course,stu_email,stu_college;

	public :
	
	void set()
	{
		cout << "Enter the stu_id : ";
		cin >> stu_id;
		getline(cin,line);
		cout << "Enter the stu_name : ";
		cin >> stu_name;
		cout << "Enter the stu_age : ";
		cin >> stu_age;
		getline(cin,line);
		cout << "Enter the stu_course : ";
		cin >> stu_course;
		getline(cin,line);
		cout << "Enter the stu_city : ";
		cin >> stu_city;
		getline(cin,line);
		cout << "Enter the stu_email : ";
		cin >> stu_email;
		getline(cin,line);
		cout << "Enter the stu_college : ";
		cin >> stu_college;
	}	
	
	void get()
	{
		cout << "Student ID : " << stu_id << endl;
		cout << "Student Name : " << stu_name << endl;
		cout << "Student Age : " << stu_age << endl;
		cout << "Student Course : " << stu_course << endl;
		cout << "Student City : " << stu_city << endl;
		cout << "Student stu_email : " << stu_email << endl;
		cout << "Student stu_college : " << stu_college << endl;
	}
};
int main()
{
	Stu stu[5];
	
	int i;
	
	for(i=0; i<1; i++)
	{
		cout << "Student " << i+1 <<" Information !!" << endl;
		stu[i].set();
		stu[i].get();
	}
	return 0;
}

