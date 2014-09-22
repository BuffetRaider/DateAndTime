#ifndef DATEANDTIME_H
#define DATEANDTIME_H

#include "Date.h"
#include "Time.h"

class DateAndTime
{
public:
//you need to create a constructor for this class that calls the appropriate methods for the date and time members.
DateAndTime(int theMonth, int theDay, int theYear, int hour, int minute, int second);
int getDay() {return m_Date.getDay();}
int getHour() {return m_Time.getHour();}
   void setHour(int hour) {m_Time.setHour(hour);}
   void setMinute(int minute) {m_Time.setMinute(minute);}
   void setSecond(int second) {m_Time.setSecond(second);}
   void setSeconds (int second) {m_Time.setSeconds(second);}
   void getSeconds() {m_Time.getSeconds();}
   bool IsMidnight() { return m_Time.IsMidnight();}
   void nextDay() {m_Date.nextDay();}
   void print(); //print time and date
   void tick();  //increment second, check for midnight to increment day

private:
Date m_Date;
Time m_Time;
};
#endif
