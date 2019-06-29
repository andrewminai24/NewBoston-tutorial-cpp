#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    ofstream file1("andrew.txt");

    if(file1.is_open()){
        cout << "Okay the file is open" << endl;
    } else {
        cout << "You messed up" << endl;
    }
    file1 << "Here this is the file"  << endl;
    file1.close();
}   