/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Student.h
 * Author: User
 *
 * Created on 23 ноября 2017 г., 9:05
 */

#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "Person.h"
using namespace std;

class Student : Person {
public:
    Student(string first_name,string last_name,string second_name,string sclass_name,string sclass_digit);
    string get_sclass_name();
    string get_sclass_digit();
    void set_sclass_name(string input);
    void set_sclass_digit(string input);
private:
    string sclass_name;
    string sclass_digit;
};

#endif /* STUDENT_H */

