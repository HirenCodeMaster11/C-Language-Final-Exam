#include<iostream>
using namespace std;

// Write a Program that defines a shape class with a constructor that gives value to width and height. Then define two sub-classes
// triangle and rectangle, that calculate the area of the shape area (). In the main, define two objects a triangle and a rectangle,
// and then call the area() function using these two objects.
class SHAPE
{
	protected :
		
	int width,height;
	
	public :
	SHAPE()
	{
		cout << "Enter the height : ";
		cin >> height;
		cout << "Enter the width : ";
		cin >> width;
	}
	
	
};
class TRIANGLE : public SHAPE
{
	public :	
	void Area()
	{
		cout << "triangle area is " << height * width / 2 << endl;
	}
};
class RECTANGLE : public SHAPE
{
	public :
	void Area()
	{
		cout << "rectangle area is " <<  height * width << endl;
	}	
};

int main()
{
	TRIANGLE t1;
	t1.Area();
	
	RECTANGLE r1;
	r1.Area();
		
	return 0;
}
