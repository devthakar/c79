#ifndef STAFFH
#define STAFFH

#include "SCUPerson.h"

namespace coen79 {

class Staff : public SCUPerson {
public:
    Staff(int i, std::string s, std::string t) : SCUPerson(i, s), title(t) {}

    void display(std::ostream& os) const override {
        os << "Staff ID: " << id << ", Name: " << name << ", Title: " << title << std::endl;
    }

protected:
    std::string title;
};

}

#endif // STAFFH
