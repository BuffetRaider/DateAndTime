// Fig. 9.19: Date.h
// Date class declaration. Member functions are defined in Date.cpp.

// prevent multiple inclusions of header file
#ifndef DATE_H
#define DATE_H

// class Date definition
class Date
{
public:
   Date( int month = 1, int day = 1, int year = 2000 ); // default constructor
   void print();
   void nextDay();
   int getDay();

   static const unsigned ARRAY_SIZE = 13;

private:
   int month;
   int day;
   int year;
   unsigned elements;
   bool IsLeapYear (int year);
   int checkDay (int testDay);
   int checkMonth (int testMonth);
   void nextMonth();
}; // end class Date

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


