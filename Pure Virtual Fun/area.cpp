#include<iostream>
using namespace std;

class Area
{
	public : 
		float redius,lenght,width,height,base;
		const float pi = 3.14;
		virtual void area() = 0;
};

class Circle : public Area
{
	public :
	void area()
	{
		cout << "Enter the value of redius : ";
		cin >> redius;
	}
	
	void get()
	{
		cout << "Circle Area is " << (redius * redius) * pi << endl << endl;
	}
};

class Triangle : public Area
{
	public :
	void area()
	{
		cout << "Enter the value of height : ";
		cin >> height;
		cout << "Enter the value of base : ";
		cin >> base;
	}
	
	void get()
	{
		cout << "Triangle Area is " << (height * base) / 2 << endl << endl;
	}
};

class Rectangle : public Area
{
	public :
	void area()
	{
		cout << "Enter the value of lenght : ";
		cin >> lenght;
		cout << "Enter the value of width : ";
		cin >> width;
	}
	
	void get()
	{
		cout << "Triangle Area is " << lenght * width;
	}
};
int main()
{
	Circle c1;
	Triangle t1;
	Rectangle r1;
	
	c1.area();
	c1.get();
	
	t1.area();
	t1.get();
	
	r1.area();
	r1.get();
	return 0;
}
