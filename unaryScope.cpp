#include <iostream>

using namespace std;

int andrew = 20;

int main(void)
{
    int andrew = 21;
    //This :: says that to use to global variable
    cout << ::andrew << endl;
}

