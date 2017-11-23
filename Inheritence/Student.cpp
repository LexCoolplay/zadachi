/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Student.cpp
 * Author: User
 * 
 * Created on 23 ноября 2017 г., 9:05
 */

#include "Student.h"
#include <string>
using namespace std;


Student::Student(string first_name,string last_name,string second_name,string sclass_name,string sclass_digit):Person(first_name,last_name,second_name)
{
    this->sclass_name=sclass_name;
    this->sclass_digit=sclass_digit;
}
   string Student::get_sclass_name(){
       return this->sclass_name;
   }
   string Student::get_sclass_digit(){
       return this->sclass_digit;
   }
   void Student::set_sclass_name(string input){
       this->sclass_name=input;
   }
   void Student::set_sclass_digit(string input){
       this->sclass_digit=input;
   }
   
