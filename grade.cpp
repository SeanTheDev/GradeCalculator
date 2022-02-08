#include <iostream>
#include "grade.h"

using namespace std;
using namespace gradeOpt;


/////////////////////////////////////////////////////////////////////////
// Function: deriveGrade
//
// Description:
//    assigns enum type to 'grade' according to a specified range of scores
//
// Parameters: 
//    firstParam : average of 4 test grades provided by a file (calculated beforehand)
//    secondParam : second parameter's description 
// 
// Returns: 
//    letterGrade : enum type 
/////////////////////////////////////////////////////////////////////////
letterGrade gradeOpt::deriveGrade(double average)
{
	letterGrade grade;

	if (average >= 97)
		grade = A_PLUS;
	else if (average < 97 && average >= 93)
		grade = A;
	else if (average < 93 && average >= 90)
		grade = A_MINUS;
	else if (average < 90 && average >= 87)
		grade = B_PLUS;
	else if (average < 87 && average >= 83)
		grade = B;
	else if (average < 83 && average >= 80)
		grade = B_MINUS;
	else if (average < 80 && average >= 77)
		grade = C_PLUS;
	else if (average < 77 && average >= 73)
		grade = C;
	else if (average < 73 && average >= 70)
		grade = C_MINUS;
	else if (average < 70 && average >= 67)
		grade = D_PLUS;
	else if (average < 67 && average >= 63)
		grade = D;
	else if (average < 63 && average >= 60)
		grade = D_MINUS;
	else if (average < 60 && average >= 0)
		grade = F;
	else
		cout << "invalid grade." << endl;

	return grade;
}

/////////////////////////////////////////////////////////////////////////
// Function: converToText
// Description:
//    assigns a string type grade to 'finalGrade' 
//
// Parameters: 
//    firstParam : enum type 'grade' 
//    
// 
// Returns: 
//    string : visual representation of grade 
/////////////////////////////////////////////////////////////////////////

string gradeOpt::convertToText(letterGrade grade)
{
	string finalGrade;

	switch (grade)
	{
	case A_PLUS: finalGrade = "A+";
		break;
	case A: finalGrade = "A";
		break;
	case A_MINUS: finalGrade = "A-";
		break;
	case B_PLUS: finalGrade = "B+";
		break;
	case B: finalGrade = "B";
		break;
	case B_MINUS: finalGrade = "B-";
		break;
	case C_PLUS: finalGrade = "C+";
		break;
	case C: finalGrade = "C";
		break;
	case C_MINUS: finalGrade = "C-";
		break;
	case D_PLUS: finalGrade = "D+";
		break;
	case D: finalGrade = "D";
		break;
	case D_MINUS: finalGrade = "D-";
		break;
	case F: finalGrade = "F";
	}

	return finalGrade;
}
