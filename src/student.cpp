// student.cpp

#include <iostream>
#include <string>
#include <sstream>
#include "student.h"
#include "date.h"
#include "address.h"


Student::Student()
  {
  } // end default constructor

// function that makes a student with temporary values
void Student::makeStudent(std::string line)
  {

	std::stringstream ss(line);

	// initializes placeholders for strings
	std::string tempLine1, tempLine2, tempCity, tempState, tempZip, tempBirthDay, tempBirthMonth, tempBirthYear, tempCompDay, tempCompMonth, tempCompYear, tempGPA, tempCred;
	
	// gets each portion of the student  	
	getline(ss, Student::firstName, ',');
	getline(ss, Student::lastName, ',');
	getline(ss, tempLine1, ',');
	getline(ss, tempLine2, ',');
	getline(ss, tempCity, ',');
	getline(ss, tempState, ',');
	getline(ss, tempZip, ',');
	getline(ss, tempBirthDay, '/');
	getline(ss, tempBirthMonth, '/');
	getline(ss, tempBirthYear, ',');
	getline(ss, tempCompDay, '/');
	getline(ss, tempCompMonth, '/');
	getline(ss, tempCompYear, ',');
	getline(ss, tempGPA, ',');
	getline(ss, tempCred, '\n');

	// stringstream to convert gpa from a string to a float
	std::stringstream gpass;
	gpass << tempGPA;
	float  gpa_float;
	gpass >> gpa_float;

	// stringstream to convert credit hours from a string to an integer
	std::stringstream credss;
	credss << tempCred;
	int credHrsInt;
	credss >> credHrsInt;

	// sending each temporary value to its setter
	setStudAddress(tempLine1, tempLine2, tempCity, tempState, tempZip);
	setBirthDate(tempBirthDay,tempBirthMonth, tempBirthYear);
	setCompleteDate(tempCompDay, tempCompMonth, tempCompYear);
	setGpaNumb(gpa_float);
	setCreditHours(credHrsInt);

  } // end making a student

Student::~Student()
  {
	// delete data from heap
	delete studAddress;
	delete birthDate;
	delete completeDate;

  } // end deconstructor

void Student::setFirstName(std::string firstNameinput)
  {
	Student::firstName = firstNameinput; 
  }

std::string Student::getFirstName()
  {
	return firstName;
  }

void Student::setLastName(std::string lastName)
  {
	Student::lastName = lastName;
  }

std::string Student::getLastName()
  {
	return lastName;
  }

// sets the whole student address 
void Student::setStudAddress(std::string line1, std::string line2, std::string city, std::string state, std::string zip)
  {
	studAddress->setLine1(line1);
	studAddress->setLine2(line2);
	studAddress->setCity(city);
	studAddress->setState(state);
	studAddress->setZipCode(zip);
  } // end setStudAddress

std::string Student::getStudAddress()
  {
	return studAddress->getAddress();
  }

// sets the whole birth date
void Student::setBirthDate(std::string day, std::string month, std::string year)
  {
	birthDate->setDay(day);
	birthDate->setMonth(month);
	birthDate->setYear(year);
  } // end setBirthDate

std::string  Student::getBirthDate()
  {
	return birthDate->getDate();
  }

// sets the whole complete date
void Student::setCompleteDate(std::string day, std::string month, std::string year)
  {
	completeDate->setDay(day);
	completeDate->setMonth(month);
	completeDate->setYear(year);
  } // end setCompleteDate

std::string Student::getCompleteDate()
  {
	return completeDate->getDate();
  }

void Student::setGpaNumb(float gpaNumb)
  {
	Student::gpaNumb = gpaNumb;
  }

float Student::getGpaNumb()
  {
	return gpaNumb;
  }

void Student::setCreditHours(int creditHours)
  {
	Student::creditHours = creditHours;
  }

int Student::getCreditHours()
  {
	return creditHours;
  }