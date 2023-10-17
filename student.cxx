#include "studentclass.h"
#include <cassert>
#include <cstring> 
using namespace std;
namespace c79_inClass {

// default constructor 
Student::Student() : id(0) {
    name = new char[1];
    name[0] = '\0';
}

// constructor with parameters 
Student::Student(const char* x, int i) : id(i) {
    name = new char[strlen(x) + 1];
    strcpy(name, x);
}

// copy constructor 
Student::Student(const Student& other) : id(other.id) {
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
}

// destructor for old array 
Student::~Student() {
    delete[] name;
}

// getters used in erase 
const char* Student::getName() const { return name; }
int Student::getId() const { return id; }


ostream& operator<<(ostream& os, const Student &s) {
    os << "Name: " << s.name << ", ID: " << s.id;
    return os;
}

// deep copy 
Student& Student::operator=(const Student& other) {
    if (this == &other) {
        return *this;
    } 
    delete[] name;
    id = other.id;
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
    return *this;
}




}
