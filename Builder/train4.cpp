#include<iostream>
using namespace std;

//(A) User Input: 
//- Train Number
//- Train Name
//- Source
//- Destination
//- Train Time
//(B) Display Records: 
//- All Records
//- By Searching Train Number
//(C) Minimum 3 Input Train Records

class Rail
{
	int Train_Time;
	string Train_Name,Destination;
	static string Source;
	public : 
	
	int Train_Number;
	
	Rail(int Train_Number,int Train_Time,string Train_Name,string Destination)
	{
		this->Train_Number = Train_Number;
		this->Train_Name = Train_Name;
		this->Destination = Destination;
		this->Train_Time = Train_Time;
	}
	
	get()
	{
		cout << "Train_Number : " << Train_Number << endl;
		cout << "Train_Name : " << Train_Name << endl;
		cout << "Source : " << Source << endl;
		cout << "Destination : " << Destination << endl;
		cout << "Train_Time : " << Train_Time << endl;
		
		cout << endl << endl;
	}
	
};
string Rail::Source = "Surat";
 
int main()
{
	int Train_Number,Train_Time;
	string Train_Name,Source,Destination;
	Rail r[3] = Rail(Train_Number,Train_Time,Train_Name,Destination);
	int i,n;
	
	for(i=0; i<3; i++)
	{
		cout << "Enter the Train_Number : ";
		cin >> Train_Number;
		cin.ignore();
		
		cout << "Enter the Train_Name : ";
		getline(cin,Train_Name);
		
		cout << "Enter the Destination : ";
		getline(cin,Destination);
		
		cout << "Enter the Train_Time : ";
		cin >> Train_Time;
		cin.ignore();
		
		r[i] = Rail(Train_Number,Train_Time,Train_Name,Destination);
		
		cout << endl;
	}
	
	cout << "Enter the Your Train Num. : ";
	cin >> n;
	
	for(i=0; i<3; i++)
	{
		if(n == r[i].Train_Number)
		{
			r[i].get();	
		}	
		else
		{
			printf("Enter the valid train num !!");
			cout << endl;
		}
	}
	
	return 0;
}


