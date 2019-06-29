#include <iostream>
using namespace std;

template <class tem>
int add(tem  a,tem b)
{
   return a+b;
}
int main(void)
{
	double x=1.43, y= 32.1, z;
	z=add(x,y);
	cout << z << endl;
}

	
