#pragma once
#include "Student.h"
#include <iostream>

using namespace std;

class Roster {
private:

	//Properties

	Student** classRosterArray;

	int numOfStudents;

public:

	//Getters

	Student** getClassRosterArray() {
		return classRosterArray;
	}

	int getNumOfStudents() {
		return numOfStudents;
	}

	//Setters
	void setClassRosterArray(Student** SPtr) {
		classRosterArray = SPtr;
	}

	void setNumOfStudents(int i) {
		numOfStudents = i;
	}

	//Constructor
	Roster(const string s[]);

	//Deconstructor
	~Roster();

	//Methods
	string* parser(string);
	//void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
	//void remove(string studentID);
	void printAll();
	//void printAverageDaysInCourse(string studentID);
	//void printInvalidEmails();
	//void printByDegreeProgram(DegreeProgram degreeProgram);
	void getcount();
};