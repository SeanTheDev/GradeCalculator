#pragma once
#include <string>

using namespace std;

namespace gradeOpt
{
	enum letterGrade {A_PLUS, A, A_MINUS, B_PLUS, B, B_MINUS, C_PLUS, C, C_MINUS, D_PLUS, D, D_MINUS, F};

	letterGrade deriveGrade(double);

	string convertToText(letterGrade);
}