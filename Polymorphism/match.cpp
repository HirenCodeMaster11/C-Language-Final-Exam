#include<iostream>
using namespace std;

class Cricket 
{
	protected :
		int over;
		
		public :
			
			void Over(int over)
			{
				this->over = over;
				cout << "Cricket over : " << this->over << endl;
			}
		
};

class T20Match : public Cricket
{
	public :
			
		void Over(int over)
		{
			this->over = over;
			cout << "T20Match over : " << this->over << endl;
		}
};

class ODIMatch : public Cricket
{
	public :
			
		void Over(int over)
		{
			this->over = over;
			cout << "ODIMatch over : " << this->over << endl;
		}	
};
int main()
{
	T20Match t1;
	t1.Over(20);
	
	ODIMatch o1;
	o1.Over(50);
	return 0;
}
