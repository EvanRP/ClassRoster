#pragma once
#include <iostream>

using namespace std;

class Student
{
private:
	//Properties
	string studentId;
	string fName;
	string lName;
	string email;
	int age;
	int days[3];
	string degree;

public:

	//Getters

	string getStudentId() {
		return studentId;
	}
	string getFName() {
		return fName;
	}
	string getLName() {
		return lName;
	}
	string getEmail() {
		return email;
	}
	string getDegree() {
		return degree;
	}
	int getAge() {
		return age;
	}
	int* getDays() {
		// Returns ptr for the array days
		return days;
	}

	//Setters

	void setStudentId(string s) {
		studentId = s;
	}
	void setFName(string s) {
		fName = s;
	}
	void setLName(string s) {
		lName = s;
	}
	void setEmail(string s) {
		email = s;
	}
	void setDegree(string s) {
		degree = s;
	}
	void setAge(int i) {
		age = i;
	}
	void setDays(int d1, int d2, int d3) {
		days[0] = d1;
		days[1] = d2;
		days[2] = d3;
	}

	//Constructor

	Student(string studentId, string fName, string lName, string email, int age, int d1, int d2, int d3, string degree) {
		setStudentId(studentId);
		setFName(fName);
		setLName(lName);
		setEmail(email);
		setDegree(degree);
		setAge(age);
		setDays(d1, d2, d3);

	}

	//Methods
	void print(int);

};

