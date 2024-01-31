#include<iostream>
#include<string.h>
using namespace std;

class Cust
{
	int cust_id,cust_age,cust_simcard_validity;
	string line,cust_name,cust_city,cust_telecom_brand_name;
	double cust_mobile_number;
	
	public :
	
	void set()
	{
		cout << "Enter the cust_id : ";
		cin >> cust_id;
		getline(cin,line);
		cout << "Enter the cust_name : ";
		cin >> cust_name;
		cout << "Enter the cust_age : ";
		cin >> cust_age;
		getline(cin,line);
		cout << "Enter the cust_city : ";
		cin >> cust_city;
		cout << "Enter the cust_mobile_number : ";
		cin >> cust_mobile_number;
		cout << "Enter the cust_simcard_validity : ";
		cin >> cust_simcard_validity;
		getline(cin,line);
		cout << "Enter the cust_telecom_brand_name : ";
		cin >> cust_telecom_brand_name;	
	}	
	
	void get()
	{
		cout << "Customer ID : " << cust_id << endl;
		cout << "Customer Name : " << cust_name << endl;
		cout << "Customer Age : " << cust_age << endl;
		cout << "Customer City : " << cust_city << endl;
		cout << "Customer Mobile Number : " << cust_mobile_number << endl;
		cout << "Customer Simcard Validity : " << cust_simcard_validity << endl;
		cout << "Customer Telecom Brand Name : " << cust_telecom_brand_name << endl << endl;
	}
};
int main()
{
	Cust cus[5];
	
	int i;
	
	for(i=0; i<5; i++)
	{
		cout << "Customer " << i+1 << " Information !!" << endl;
		cus[i].set();
		cus[i].get();
	}
	return 0;
}

