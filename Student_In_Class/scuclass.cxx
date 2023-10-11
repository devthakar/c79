#include "studentclass.h"
#include <iostream>
#include <cassert>
#include <string>

using namespace std;
using namespace c79_inClass;

// Adds a student to array of students and check if the capacity has been reached 
// and that we are not adding a student with an identical id 
bool SCUClass::addStudent(Student &s) {
    for (int i = 0; i < totalStudents; i++) {
        if (student[i].getId() == s.getId()) {
            cout << "Id has been duplicated";
            return false; // student with same ID already exists
        }
    }
    
    
    assert(totalStudents < 30);
    student[totalStudents] = s;
    totalStudents++;
    
    return true;
}

// lists the students and their respective id's within a class 
void SCUClass::list() {
    for (int i = 0; i < totalStudents; i++) {
        cout << student[i] << endl;
    }
}

// removes a student from the class
bool SCUClass::erase(int id) {
    for (int i = 0; i < totalStudents; i++) {
        if (student[i].getId() == id) {
            for (int j = i; j < totalStudents - 1; j++) {
                student[j] = student[j + 1];
            }
            totalStudents--;
            return true;
        }
    }
    
    return false;
}

ostream& operator<<(ostream& os, const SCUClass &s) {
    for (int i = 0; i < s.totalStudents; i++) {
        os << s.student[i] << endl;
    }
    
    return os;
}
