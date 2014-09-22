
// Fig. 9.11: Time.cpp
// Member-function definitions for class Time.
#include <iostream>
#include <iomanip>
#include "Time.h" // include definition of class Time from Time.h
using namespace std;

// Time constructor initializes each data member to zero;
// ensures that Time objects start in a consistent state
Time::Time( int hr, int min, int sec )
{
   setTime( hr, min, sec ); // validate and set time
} // end Time constructor

// set new Time value using universal time; ensure that
// the data remains consistent by setting invalid values to zero
void Time::setTime( int h, int m, int s )
{
   setHour(h);
   setMinute(m);
   setSecond(s);

} // end function setTime

int Time::getSeconds()
{
   return ((hour*SEC_PER_HOUR) + (minute*SEC_PER_MIN) + second);
}
void Time::setSeconds(int seconds)
{
    hour = seconds/SEC_PER_HOUR;
        seconds %= SEC_PER_HOUR; // get remainder
    minute = seconds/SEC_PER_MIN;
        seconds %= SEC_PER_MIN; // get remainder
    second = seconds;
}

void Time::setHour(int h)
{
    hour = ( h >= 0 && h < 24 ) ? h : 0; // validate hour
}

void Time::setMinute(int m)
{
    minute = ( m >= 0 && m < 60 ) ? m : 0; // validate minute
}

void Time::setSecond(int s)
{
    second = ( s >= 0 && s < 60 ) ? s : 0; // validate second
}

// print Time in universal-time format (HH:MM:SS)
void Time::printUniversal()
{
   cout << setfill( '0' ) << setw( 2 ) << hour << ":"
      << setw( 2 ) << minute << ":" << setw( 2 ) << second;
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard()
{
   cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 ) << ":"
      << setfill( '0' ) << setw( 2 ) << minute << ":" << setw( 2 )
      << second << ( hour < 12 ? " AM" : " PM" );
} // end function printStandard
void Time::Tick()
{
    second++;
    if(second == 60)
    {
        second = 0;
        minute ++;
    }
    if (minute == 60)
    {
        minute = 0;
        hour ++;
    }
    if (hour == 24)
    {
        hour = 0;
    }
}

bool Time::IsMidnight()
{
    if (hour ==  minute == second == 0)
    {
        return true;
    }
    else
    {
        return false;
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
