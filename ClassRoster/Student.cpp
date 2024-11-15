#include "Student.h"
#include <iostream>

using namespace std;

void Student::print(int i) {
	int* arrPtr = getDays();
	switch (i) {
	case 0:
		cout << getStudentId();
		break;
	case 1:
		cout << "First Name: " << getFName();
		break;
	case 2:
		cout << "Last Name: " << getLName();
		break;
	case 3:
		cout << "Email: " << getEmail();
		break;
	case 4:
		cout << "Age: " << getAge();
		break;
	case 5:
		//cout << arrPtr[0] << ", " << arrPtr[1] << ", " << arrPtr[2];
		cout << "Days In Course: {";
		for (int i = 0; i < sizeof(arrPtr); i++) {
			cout << arrPtr[i];
			if (i < sizeof(arrPtr) - 1) {
				cout << ", ";
			}
			else {
				cout << "}";
			}
		}

		break;
	case 6:
		cout << "Degree Program: " << getDegree();
		break;
	default:
		cerr << "Error:\t Student::print(i) i needs to be a number between 0-6!";
		break;
	}

}