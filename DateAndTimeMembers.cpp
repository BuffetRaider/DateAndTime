
#include <iostream>
#include <iomanip>
#include "DateAndTime.h" // include definition of class DateAndTime from DateAndTime.h
using namespace std;

DateAndTime::DateAndTime(int theMonth, int theDay, int theYear, int hour, int minute, int second):
    m_Date(theMonth,theDay,theYear), m_Time(hour,minute,second)
{

}

void DateAndTime::tick()
{
    m_Time.Tick();
    if(m_Time.IsMidnight()==true)
    {
       m_Date.nextDay();
    }
}

void DateAndTime::print()
{
    m_Time.printStandard();
    cout << " on ";
    m_Date.print();
    cout << endl;
}
