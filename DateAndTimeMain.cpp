#include <iostream>
#include <iomanip>
#include "DateAndTime.h" // include definition of class Date from Date.h
using namespace std;

int main()
{
    DateAndTime testDateAndTime(12,31,2001,23,59,59);
    testDateAndTime.print();

    for (int i=0; i < 1000; i++)
    {
        testDateAndTime.tick();
        testDateAndTime.print();
    }
}
