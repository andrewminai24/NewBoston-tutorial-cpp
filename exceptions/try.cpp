#include <iostream>
using namespace std;

int main(void)
{
	try{
	     int momsAge=30;
	     int sonsAge=34;
	     
		if(sonsAge > momsAge){
		   throw 99;
		}
	}catch(int x){
		cout << "son can not be older than mom,ERROR NUMBER:99" << endl;

	}
}
