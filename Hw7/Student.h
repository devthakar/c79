#ifndef STUDENTH
#define STUDENTH

#include "SCUPerson.h"

namespace coen79 {

class Student : public SCUPerson {
public:
    Student(int i, std::string s, int yr) : SCUPerson(i, s), yearEnter(yr) {}

    void display(std::ostream& os) const override {
        os << "Student ID: " << id << ", Name: " << name << ", Year Entered: " << yearEnter << std::endl;
    }

protected:
    int yearEnter;
};

}

#endif // STUDENTH
