// main.cpp

#include <iostream>
#include <sstream>
#include <fstream>
#include "student.h"

int main(){

	std::ifstream inFile;
	std::string currentLine;

	// output streams for the two reports
	std::ofstream fullReport;
	std::ofstream shortReport;
	
	// opens each of the files to be outputted to
	fullReport.open("fullReport.txt");
	shortReport.open("shortReport.txt");
	std::stringstream ss;

	// points to each object on the heap
	// basically an array
	Student *studentArray = new Student[51];

	// starter for the array to count up	
	int counter = 0;

	inFile.open("students.dat");
	std::string inputLine;

	// this is where each student is made
	for(counter = 0; counter < 51; counter++)
	  {
		getline(inFile, inputLine);
		studentArray[counter].makeStudent(inputLine);
	  }

	// integers for the 2 file outputs
	int i, j;

	// for loop to generate full report
	for (i = 0; i < 50; i++)
	  {
		fullReport << studentArray[i].getFirstName() << "," << studentArray[i].getLastName() << "," << studentArray[i].getStudAddress() << "," << studentArray[i].getBirthDate() << "," << studentArray[i].getCompleteDate() << "," << studentArray[i].getGpaNumb() << "," << studentArray[i].getCreditHours() << std::endl;
	  }
	
	// for loop to generate short report
	for (j = 0; j < 50; j++)
	  {
		shortReport << studentArray[j].getFirstName() << "," << studentArray[j].getLastName() << std::endl;
	  }

	// close output files
	fullReport.close();
	shortReport.close();
	
	// destructor for the array
	delete[] studentArray;

	return 0;
} //end main