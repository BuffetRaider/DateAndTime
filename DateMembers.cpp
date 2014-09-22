
// Fig. 9.20: Date.cpp
// Date class member-function definitions.
#include <iostream>
#include "Date.h" // include definition of class Date from Date.h
using namespace std;

// Date constructor (should do range checking)
Date::Date( int m, int d, int y )
{
   month = (m > 0 && m < 13 ) ? m : 1; // validate month
   day = (d > 0 && d < 32) ? d : 1; // validate day
   year = (y >= 1900) ? y : 1900; // avoid Y2K crash


} // end constructor Date

bool Date::IsLeapYear (int year)
{
    if (year%4 == 0 && (year %100 != 0 || year%400 == 0))
        {
            return true;
        }
    else
        {
            return false;
        }
}

// print Date in the format mm/dd/yyyy
void Date::print()
{
   cout << month << '/' << day << '/' << year;
} // end function print


int Date::checkDay(int testDay)
{
     int DaysPerMonth[ARRAY_SIZE] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(testDay > 0 && testDay <= DaysPerMonth[month])
    {
        return testDay;
    }
    else if (month == 2 && testDay == 29 && year%4 == 0 && (year %100 != 0 || year%400 == 0))
    {
        return testDay;
    }
    else
    {
        month ++;
        return 1;
    }

}

int Date::checkMonth(int testMonth)
{
    int MonthsPerYear = 12;
    testMonth = month + 1;

    if (testMonth > 0 && testMonth <= MonthsPerYear)
    {
        return testMonth;
    }
    else
    {
        year ++;
        return 1;
    }
}

void Date::nextDay()
{
    int testDay = day + 1;
    if (checkDay(testDay) == 1)
    {
        testDay = day;
    }
    else
    {
        day = 1;
        nextMonth();
    }
 }

 void Date::nextMonth()
 {
    int testMonth = month + 1;

    if (checkMonth(testMonth) == testMonth)
    {
        month = month;
    }
    else
    {
        month = 1;

    }


 }

/**************************************************************************
 * (C) Copyright 1992-2011 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
