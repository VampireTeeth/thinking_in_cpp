/*
 * =====================================================================================
 *
 *       Filename:  School.cpp
 *
 *    Description:  Implementation file for school
 *
 *        Version:  1.0
 *        Created:  24/01/2013 21:57:43
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include "School.h"
using namespace std;

const char* Student::Schoolname = "Sydney boys high school";
Student::Student(int age, const char* name)
    :Age(age), Name(name){}

int Student::age() const {
    return Age;
}

void Student::age(int age) {
    Age = age;
}

const char* Student::name() const {
    return Name;
}

void Student::name(const char* name) {
    Name = name;
}

void Student::print() const {
    cout << "Student[ Name = " << Name
        <<", Age = " << Age << " ] from "
        << Schoolname << endl;
}

int main() {
    Student S(16, "Steven");
    S.print();

}
