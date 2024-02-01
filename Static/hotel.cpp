#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{
	int hotel_id,hotel_rating,hotel_staff_quantity,hotel_room_quantity;
	string hotel_type,hotel_location;
	static string hotel_name;
	static int hotel_establish_year;
	public :
	
	void set()
	{
		cout << "Enter the hotel_id : ";
		cin >> hotel_id;
		cin.ignore();
		
		cout << "Enter the hotel_type : ";
		getline(cin,hotel_type);
		
		cout << "Enter the hotel_rating : ";
		cin >> hotel_rating ;
		cin.ignore();
				
		cout << "Enter the hotel_location : ";
		getline(cin,hotel_location);
		
		cout << "Enter the hotel_staff_quantity : ";
		cin >> hotel_staff_quantity;
		cin.ignore();
		
		cout << "Enter the hotel_room_quantity : ";
		cin >> hotel_room_quantity;
		cin.ignore();
		
		cout << endl << endl;
	}	
	
	void get()
	{
		cout << "Hotel ID: " << hotel_id << endl;
		cout << "Hotel Name : " << hotel_name << endl;
		cout << "Hotel Type (like hotel or motel): " << hotel_type << endl;
		cout << "Hotel Rating: " << hotel_rating << endl;
		cout << "Hotel Location : " << hotel_location << endl;
		cout << "Hotel Establish Year : " << hotel_establish_year << endl;
		cout << "Hotel Staff Quantity: " << hotel_staff_quantity << endl;
		cout << "Hotel Room Quantity: " << hotel_room_quantity << endl;
	}
};

string Hotel :: hotel_name = "Hiren Bambhaniya";
int Hotel :: hotel_establish_year = 2024;

int main()
{
	Hotel hot[5];
	
	int i;
	
	for(i=0; i<5; i++)
	{
		hot[i].set();
	}
	for(i=0; i<5; i++)
	{
		hot[i].get();
	}
	return 0;
}

