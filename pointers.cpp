#include <iostream>

using namespace std;

int main()
{
    int a[5];
    int *bp0 = &a[0];
    int *bp1 = &a[1];
    int *bp2 = &a[2];
    int *bp3 = &a[3];
    int *bp4 = &a[4];

    cout << "bp0 is at " << bp0 << endl;
    cout << "bp1 is at " << bp1 << endl;
    cout << "bp2 is at " << bp2 << endl;
    cout << "bp3 is at "<< bp3 << endl;
    cout << "bp4 is at " << bp4 << endl;


    return(0);
}