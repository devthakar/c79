#include <iostream>
#include "student.h"

namespace coen79 {

Student::Student() : id(0), name("") {}
Student::Student(int id, const std::string& name) : id(id), name(name) {}

int Student::getId() const {
    return id;
}

const std::string& Student::getName() const {
    return name;
}

void Student::setId(int id) {
    this->id = id;
}

void Student::setName(const std::string& name) {
    this->name = name;
}

bool Student::operator==(const Student& other) const {
    return this->getId() == other.getId();
}

std::ostream& operator<<(std::ostream& os, const Student& student) {
    os << student.getName() << " (The id is: " << student.getId() << ")";
    return os;
}

std::istream& operator>>(std::istream& is, Student& x) {
    is >> x.id;
    is.ignore();
    std::getline(is, x.name);
    return is;
}

} 


