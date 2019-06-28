#include <iostream>

using namespace std;


void printArray(int theArray[],int sizeOfArray);


int main(void)
{
    int andrew[3] = {20,34,23};
    int jessica[6] = {2,3,2,2,2,1};

    printArray(andrew,2);
}
void printArray(int theArray[],int sizeOfArray){

    for(int x = 0; x < sizeOfArray; x++){
        cout << theArray[x] << endl;
    }
}