#include<iostream>
#include<string.h>
using namespace std;

class Cafe
{
	int cafe_id,cafe_rating,cafe_staff_quantity,cafe_room_quantity;
	string cafe_type,cafe_location;
	string cafe_name;

	public :
	
	Cafe()
	{
		cout << "Ahir Cafe";
	}
	
	cafe(int cafe_establish_year)
	{
		cout << cafe_establish_year;
	}
	void set()
	{
		cout << "Enter the cafe_id : ";
		cin >> cafe_id;
		cin.ignore();
		
		cout << "Enter the cafe_type : ";
		getline(cin,cafe_type);
		
		cout << "Enter the cafe_rating : ";
		cin >> cafe_rating ;
		cin.ignore();
				
		cout << "Enter the cafe_location : ";
		getline(cin,cafe_location);
		
		cout << "Enter the cafe_staff_quantity : ";
		cin >> cafe_staff_quantity;
		cin.ignore();
		
		cout << "Enter the cafe_room_quantity : ";
		cin >> cafe_room_quantity;
		cin.ignore();
		
		cout << endl << endl;
	}	
	
	void get()
	{
		cout << "Cafe ID: " << cafe_id << endl;
		cout << "Cafe Name : " << cafe_name << endl;
		cout << "Cafe Type (like a rooftop or normal): " << cafe_type << endl;
		cout << "Cafe Rating: " << cafe_rating << endl;
		cout << "Cafe Location : " << cafe_location << endl;
		cout << "Cafe Staff Quantity: " << cafe_staff_quantity << endl;
		cout << "Cafe Room Quantity: " << cafe_room_quantity << endl;
	}
};

int main()
{
	int n;
	cout << "Enter the Fast Food cafe information total num : ";
	cin >> n;
	Cafe cap(2024)[n];
	
	int i;
	
	for(i=0; i<n; i++)
	{
		cap[i].set();
	}
	for(i=0; i<n; i++)
	{
		cap[i].get();
	}
	return 0;
}

