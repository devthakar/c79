#include "SCUOrg.h"

namespace coen79 {

SCUOrg::~SCUOrg() {
    for (SCUPerson* person : org) {
        delete person;
    }
    org.clear();
}

void SCUOrg::insert(SCUPerson* person) {
    org.push_back(person);
}

bool SCUOrg::remove(int id) {
    for (auto it = org.begin(); it != org.end(); ++it) {
        if ((*it)->getId() == id) {
            delete *it; 
            org.erase(it); 
            return true; 
        }
    }
    return false; 
}

void SCUOrg::traverse() const {
    for (SCUPerson* person : org) {
        person->display(std::cout);
    }
}

}
