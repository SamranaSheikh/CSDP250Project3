//Samrana Sheikh
//Oct-25-2023
//CSDP 250 Project 3
//Binary_Converter.cpp

#include "BinaryConverter.h"
#include "BinaryConverter.cpp"
#include <iostream>
using namespace std;

int main()
{
    Stack stack_s;
    Queue queue_s;

    double decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    int integerpart = decimalNumber;

    double decimalpart = decimalNumber - integerpart;

    stack_s.createStack(integerpart);

    queue_s.createQueue(decimalpart);

    stack_s.displayStack();

    cout << ".";

    queue_s.displayQueue();

    cout << endl;

    // Clear lists
    stack_s.clear();
    queue_s.clear();

    return 0;
}