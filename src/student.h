// student.h

#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS
#include <iostream>
#include <string>
#include "address.h"
#include "date.h"

class Student {
	private:
		std::string firstName;
        std::string lastName;
        float gpaNumb;
        int creditHours;
        Date* birthDate = new Date;
        Date* completeDate = new Date;
		Address* studAddress = new Address;

	public:
		Student();
		void makeStudent(std::string);
		~Student();
		void setFirstName(std::string);
		std::string getFirstName();
		void setLastName(std::string);
		std::string getLastName();
		void setStudAddress(std::string, std::string ,std::string, std::string, std::string);
		std::string getStudAddress();
		void setBirthDate(std::string, std::string, std::string);
		std::string getBirthDate();
		void setCompleteDate(std::string, std::string, std::string);
		std::string getCompleteDate();
		void setGpaNumb(float);
		float getGpaNumb();
		void setCreditHours(int);
		int getCreditHours(); 			
		
};
#endif