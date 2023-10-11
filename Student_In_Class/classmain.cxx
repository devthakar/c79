#include "studentclass.h"
#include <iomanip>
#include <iostream>
using namespace std;
using namespace c79_inClass;

int main() {

    SCUClass coen79;

    Student a("Emily", 45); 
    Student b("Eric", 66);
    Student c("Anish", 46);  

    // Testing addStudent, erase, and list functionality as well as duplicate id checking in addStudent
    coen79.addStudent(a);
    coen79.addStudent(b);
    coen79.list();
    coen79.erase(66);
    coen79.addStudent(c);
    coen79.list();

    // Testing if we exceed the size of the student array 
     for (int i = 0; i < 31; i++) {
        Student x("TestStudent" + to_string(i+1), i+1);
        bool added = coen79.addStudent(x);
     }


    return 0;
}


