/*
 * =====================================================================================
 *
 *       Filename:  School.h
 *
 *    Description:  Header file for school
 *
 *        Version:  1.0
 *        Created:  24/01/2013 21:57:09
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven
 *   Organization:  
 *
 * =====================================================================================
 */


class Student{
    static const char* Schoolname;
    int Age;
    const char* Name;
public:
    Student(int age = 0, const char* name = "Unnamed");
    int age() const;
    void age(int age);
    const char* name() const;
    void name(const char* name);
    void print() const;
};
