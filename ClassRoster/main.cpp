// c867.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
#include "Roster.h"
//#include "Degree.h"

using namespace std;

int main()
{
    const string studentData[] = { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,name,Last,email,21,11,01,100,SOFTWARE" };

    Roster test = Roster(studentData);
    test.getcount();

    test.printAll();

    //test.~Roster();

    /*
    Student evan = Student("A1", "Evan", "Pauley", "test@test.test", 30, 1, 20, 99, "software");
    for (int i = 0; i < 7; i++) {
        evan.print(i);
        cout << "\n";
    }

    //evan.print(10);
    */
}