// date.h

#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS
#include <string>
#include <iostream>

class Date {
	private:
		std::string month;
		std::string day;
		std::string year;

	public:
		Date();
		~Date();
		void setDay(std::string);
		void setMonth(std::string);
		void setYear(std::string);
		std::string getDate();

};
#endif