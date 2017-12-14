#include "Person.h"
#include "Student.h"
int main() {
    Student Andrey;
    string a="123";
    Andrey.set_first_name(a);
    cout <<Andrey.get_first_name();
    return 0;
}