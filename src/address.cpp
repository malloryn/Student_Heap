// address.cpp

#include <iostream> 
#include <string>
#include "address.h"

Address::Address() 
  {
  }// end default constructor

Address::~Address()
  {
  } // end address deconstructor

void Address::setLine1(std::string lineinput)
  {
	Address::line1 = lineinput;
  }

void Address::setLine2(std::string line2)
  {
	Address::line2 = line2;
  }

void Address::setCity(std::string city)
  {
	Address::city = city;
  }

void Address::setState(std::string state)
  {
	Address::state = state;
  }

void Address::setZipCode(std::string zipCode)
  {
	Address::zipCode = zipCode;
  }

// gets each address string and concatenates it into one string
std::string Address::getAddress()
  {
	return  line1 +  "," +  line2 + "," + city + "," + state + "," + zipCode;
  }