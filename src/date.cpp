// date.cpp

#include <iostream>
#include <string>
#include "date.h"

Date::Date()
  {
  }

Date::~Date()
  {
  }

void Date::setDay(std::string day)
  {
	Date::day = day;
  }

void Date::setMonth(std::string month)
  {
	Date::month = month;
  }

void Date::setYear(std::string year)
  {
	Date::year = year;
  }

// gets each date string and concatenates it into one string 
std::string Date::getDate()
  {
	return  month +  "/" +  day +  "/" + year;
  } // end getDate