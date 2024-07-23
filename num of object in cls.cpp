//Develop a simple program for static field  to count the number of object created using C++.
#include <iostream>
using namespace std;
class box{
	private:
		static int object_count;
	public:
		box()
		{
			object_count++;
		}
		static int getobjectcount()
		{
			return object_count;
		}
};
int box::object_count=0;  
int main()
{
	
	box b1;
	box b2;
	box b3;
	cout<<"number of objects created: "<<box::getobjectcount()<<endl;
	return 0;
	}
