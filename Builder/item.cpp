//(A) User Input:
//- Item Number
//- Item Name
//- Quantity
//- Price
//- Discount
//(B) Verify User Id And Password
//(C) Display Records:
//- All Records
//- By Searching Item Number
#include<iostream>
using namespace std;

class Item
{
	string Item_Name;
	int Price,Quantity;
	
	
	public : 
	
	static int Discount;
	int Item_Number;
	
	Item(int Number,int Price,int Quantity,string Name)
	{
		Number = Item_Number;
		Name = Item_Name;
		this->Quantity = Quantity;
		this->Price = Price;
	}
	
	void get()
	{
		cout << "Item_Number : " << Item_Number << endl;
		cout << "Item_Name : " << Item_Name << endl;
		cout << "Discount : " << Discount << endl;
		cout << "Price : " << Price << endl;
		cout << "Quantity : " << Quantity << endl;
	}
	
};

int Item :: Discount = 20;

int main()
{
	int Number,Quantity,Price;
	string Name;
	
	Item i[3] = Item(Number,Quantity,Price,Name);
	int j,n;
	
	for(j=0; j<3; j++)
	{
		cout << "Enter the Item_Number : ";
		cin >> Number;
		cin.ignore();
		
		cout << "Enter the Item_Name : ";
		getline(cin,Name);
	
		cout << "Enter the Item_Quantity : ";
		cin >> Quantity;
		cin.ignore();
		
		cout << "Enter the Item_Price : ";
		cin >> Price;
		cin.ignore();
	
		i[j] = Item(Number,Quantity,Price,Name);
	}
	
	cout << endl << endl;
	
	cout << "Enter the Your Item Num. : ";
	cin >> n;
	
	for(j=0; j<3; j++)
	{
		if(n == i[j].Item_Number)
		{
			i[j].get();
		}	
	}
	
	return 0;	
}

