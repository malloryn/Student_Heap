// address.h

#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS
#include <string>
#include <iostream>

class Address {
	private:
		std::string line1;
		std::string line2;
		std::string city;
		std::string state;
		std::string zipCode;

	public:
		Address();
		~Address();
		void setLine1(std::string);
		void setLine2(std::string);
		void setCity(std::string);
		void setState(std::string);
		void setZipCode(std::string);
		std::string getAddress();

};
#endif