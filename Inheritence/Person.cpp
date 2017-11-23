
#include "Person.h"
#include <string>
using namespace std;

Person::Person(string first_name, string last_name, string second_name){
    this->first_name=first_name;
    this->last_name=last_name;
    this->second_name=second_name;
}
string Person::get_first_name(){
    return this->first_name;
}
string Person::get_second_name(){
    return this->second_name;
}
string Person::get_last_name(){
    return this->last_name;
}
void Person::set_first_name(string input){
    this->first_name=input;
}
void Person::set_last_name(string input){
    this->last_name=input;
}
void Person::set_second_name(string input){
    this->second_name=input;
}
string Person::show_data(){
    return this->first_name+" "+this->last_name+" "+this->second_name;
}
