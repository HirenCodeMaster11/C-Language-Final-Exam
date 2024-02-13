#include<iostream>
using namespace std;
//Q.2 Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.
class NUM
{
	protected :
		
	int num;
	
	public :
	void set()
	{
		cout << "Enter the num : ";
		cin >> num;
	}
};
class Square : public NUM
{
	public :	
	void square()
	{
		set();
		cout << "Number square is " << num * num << endl;
	}
};
class Cube : public NUM
{
	public :
	void cube()
	{
		set();
		
		cout << "Number cube is " <<  num * num * num << endl;
	}	
};

int main()
{
	Square s1;
	s1.square();
	
	Cube c1;
	c1.cube();
		
	return 0;
}
