#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
#ifndef PERSON_H
#define PERSON_H

class Person {
public:
    void set_first_name(string a);
    void set_last_name(string a);
    void set_second_name(string a);
    string get_first_name();
    string get_last_name();
    string get_second_name();
    virtual void show_data();
private:
    string first_name, second_name, last_name;
};
#endif /* PERSON_H */