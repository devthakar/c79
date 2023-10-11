#include "studentclass.h"
#include <iostream>
#include <cassert>
#include <string>

using namespace std;

namespace c79_inClass {

ostream& operator<<(ostream& os, const Student &s) {
    os << "Name: " << s.name << ", ID: " << s.id;
    return os;
}

}