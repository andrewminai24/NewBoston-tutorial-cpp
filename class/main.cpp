#include "a.h"
#include <iostream>

using namespace std;

int main(void)
{
    a andrewObject;
    a *andrewPointer = &andrewObject;



    andrewObject.printSteak();
    andrewPointer->printSteak();
}
