#pragma once
#include "student.h"

//Declare SecurityStudent class
class SecurityStudent : public Student
{
	Degree degreeType;
public:
	SecurityStudent() {};
	SecurityStudent(string[]);
	Degree getDegree() { return SECURITY; }
	void putDegree(Degree arg) { degreeType = arg; }

	//virtual print to print Student data
	void print();
	void getDegreeProgram();
};


