#ifndef TEACHER_H
#define TEACHER_H
#include <string>
#include "Person.h"
using namespace std;

class Teacher : Person {
public:
    Teacher(string first_name,string last_name,string second_name,string subject_name,int room);
    string get_subject_name();
    string get_room();
    void set_subject_name(string input);
    void set_room(int input);
private:
    string subject_name;
    string room;
};

#endif /* STUDENT_H */
