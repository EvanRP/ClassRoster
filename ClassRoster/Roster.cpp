#include "Roster.h"
#include <iostream>
#include <string>

using namespace std;
string* Roster::parser(string s) {
	char delimiter = ',';
	string parsed[9];
	string placeHolder = "";
	int x = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s.at(i) == delimiter) {
			parsed[x] = placeHolder;
			placeHolder = "";
			x++;
		}
		else {
			parsed[x] += s.at(i);
		}
	}
	parsed[x] = placeHolder;
	// This is to grab the last colum from the string

	return parsed;
}

Roster::Roster(const string s[]) {
	int num = 5;
	cout << num;
	setNumOfStudents(num);
	setClassRosterArray(new Student * [num]);
	Student** arrPtr = getClassRosterArray();
	string* currentStudent;
	cout << num;
	for (int i = 0; i < num; i++) {
		currentStudent = parser(s[i]);
		cout << num;
		arrPtr[i] = new Student(currentStudent[0], currentStudent[1], currentStudent[2], currentStudent[3],
			stoi(currentStudent[4]), stoi(currentStudent[5]), stoi(currentStudent[6]), stoi(currentStudent[7]), currentStudent[8]);
	}
	cout << num;
}


Roster::~Roster() {

	for (int i = 0; i != getNumOfStudents(); i++) {
		delete classRosterArray[i];
	}
	delete[] classRosterArray;

}

void Roster::printAll() {

	Student** arryPtr = getClassRosterArray();
	for (int i = 0; i < getNumOfStudents(); i++) {
		for (int x = 0; x < 7; x++) {
			arryPtr[i]->print(x);
			cout << "\t";
		}

	}
}
void Roster::getcount() {
	cout << getNumOfStudents();
}