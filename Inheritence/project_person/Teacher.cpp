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

#include "Teacher.h"
#include <string>
using namespace std;


Teacher::Teacher(string first_name,string last_name,string second_name,string subject_name,string room):Person(first_name,last_name,second_name)
{
    this->subject_name=subject_name;
    this->room=room;
}
   string Teacher::get_subject_name(){
       return this->subject_name;
   }
   string Teacher::get_room(){
       return this->room;
   }
   void Teacher::set_subject_name(string input){
       this->subject_name=input;
   }
   void Teacher::set_room(string input){
       this->room=input;
   }