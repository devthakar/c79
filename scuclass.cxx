#include "studentclass.h"
#include <cassert>
#include <iostream>

using namespace std;
namespace c79_inClass {

const int size = 30;

SCUClass::SCUClass() : totalStudents(0), capacity(N) {
    students = new Student[capacity];
}

SCUClass::SCUClass(const SCUClass& other) : totalStudents(other.totalStudents), capacity(other.capacity) {
    students = new Student[capacity];
    for (int i = 0; i < totalStudents; i++) {
        students[i] = other.students[i];
    }
}

SCUClass::~SCUClass() {
    delete[] students;
}

bool SCUClass::addStudent(const Student &s) {
    if (totalStudents == capacity) {
        capacity += size;
        Student* buffer = new Student[capacity];
        for (int i = 0; i < totalStudents; i++) {
            buffer[i] = students[i];
        }
        delete[] students;
        students = buffer;
    }
    students[totalStudents++] = s;
    return true;
}

bool SCUClass::erase(int id) {
    for (int i = 0; i < totalStudents; i++) {
        if (students[i].getId() == id) {
            for (int j = i; j < totalStudents - 1; j++) {
                students[j] = students[j + 1];
            }
            totalStudents--;
            return true;
        }
    }
    return false;
}

void SCUClass::list() const {
    for (int i = 0; i < totalStudents; i++) {
        cout << students[i] << endl;
    }
}

ostream& operator<<(ostream& os, const SCUClass &s) {
    for (int i = 0; i < s.totalStudents; i++) {
        os << s.students[i] << endl;
    }
    return os;
}

}
