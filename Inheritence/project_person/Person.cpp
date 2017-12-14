#include "Person.h"

void Person::set_first_name(string a){
    this->first_name=a;
}
void Person::set_last_name(string a){
    this->last_name=a;
}
void Person::set_second_name(string a){
    this->second_name=a;
}
string Person::get_first_name(){
    return this->first_name;
}
string Person::get_last_name(){
    return this->last_name;
}
string Person::get_second_name(){
    return this->second_name;
}
void Person::show_data(){
    cout<<this->get_first_name()<<" "<<this->last_name<<" "<<this->second_name<<endl;
}