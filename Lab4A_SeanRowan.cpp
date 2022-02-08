///////////////////////////////////////////////////////////////////////////////////////////////
//
// Filename: Lab4A_SeanRowan.cpp
// date: 3/6/21
// programmer: Sean Rowan
//
// description:
// Recieves input from an outside file and uses the information to calculate grade averages.
// Program rewrites all old information along with new information to a new file.
//
////////////////////////////////////////////////////////////////////////////////////////////////

//libraries
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "grade.h"

//namespaces
using namespace std;
using namespace gradeOpt;

//main function
int main()
{
	//variable declarations
	ifstream inFile;
	ofstream outFile;
	string lastName, firstName, SSN, finalGrade;
	double test1, test2, test3, test4, average;
	
	//open file for I/O
	inFile.open("student_grades.txt");
	outFile.open("student_final.txt");
	
	//proceed if file is open
	if (inFile.is_open() && outFile.is_open())
	{
		// get file data stored for manipulation // calculate average grades // rewrite to new file
		while (inFile >> lastName >> firstName >> SSN >> test1 >> test2 >> test3 >> test4)
		{
			average = (test1 + test2 + test3 + test4) / 4.0;
						
			outFile << setw(10) << lastName << " " << setw(10) << firstName << " " << setw(10) << SSN << " " << setw(10) << test1 << " ";
			outFile << setw(10) << test2 << " " << setw(10) << test3 << " " << setw(10)<<  test4 << " " <<setw(10)<<  average << " ";
			outFile <<setw(10)<<  convertToText(deriveGrade(average)) << endl;
		}
		
		inFile.close();
		outFile.close();
	}
	else
		cout << "Cannot open file." << endl;
	
	return 0;
}
