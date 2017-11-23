/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Person.h
 * Author: User
 *
 * Created on 23 ноября 2017 г., 8:51
 */

using namespace std;
#include <string>
#ifndef PERSON_H
#define PERSON_H

class Person {
public:
    Person(string first_name,string last_name,string second_name);
    string get_first_name();
    string get_second_name();
    string get_last_name();
    void set_first_name(string input);
    void set_last_name(string input);
    void set_second_name(string input);
    virtual string show_data();
private:
    string first_name;
    string last_name;
    string second_name;
};

#endif /* PERSON_H */

