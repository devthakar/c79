#include <iostream>
#include "scuclass.h"

namespace coen79 {

SCUClass::SCUClass() {}

void SCUClass::insert(const Student& s) {
    students.push_back(s);
}

bool SCUClass::remove(int studentId) {
    bool match = false;
    for (auto it = students.begin(); it != students.end(); ) {
        if (it->getId() == studentId) {
            it = students.erase(it);
            match = true;
        } else {
            ++it;
        }
    }
    return match;
}

void SCUClass::traverse() const {
    for(const Student& student : students) {
        std::cout << student << std::endl; 
    }
}

} 
