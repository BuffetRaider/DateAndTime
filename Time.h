
// Fig. 9.10: Time.h
// Time class containing a constructor with default arguments.
// Member functions defined in Time.cpp.

// prevent multiple inclusions of header file
#ifndef TIME_H
#define TIME_H

// Time abstract data type definition
class Time
{
public:
   Time( int = 0, int = 0, int = 0 ); // default constructor
   void setTime( int, int, int ); // set hour, minute, second
   void printUniversal(); // output time in universal-time format
   void printStandard(); // output time in standard-time format
   void Tick(); // increment the value of a Time object by one second
   void setHour(int hour);
   void setMinute(int minute);
   void setSecond(int second);
   void setSeconds (int second);
   int getSeconds();
   bool IsMidnight();
   int getHour() {return hour;}


private:
   int hour; // 0 - 23 (24-hour clock format)
   int minute; // 0 - 59
   int second; // 0 - 59
   static const int SEC_PER_HOUR = 3600;
   static const int SEC_PER_MIN = 60;
}; // end class Time

#endif

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
