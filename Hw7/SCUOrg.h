#ifndef SCUORGH
#define SCUORGH

#include <vector>
#include <algorithm>
#include "SCUPerson.h"

namespace coen79 {

class SCUOrg {
public:
    ~SCUOrg();
    void insert(SCUPerson* person);
    bool remove(int id);
    void traverse() const;

private:
    std::vector<SCUPerson*> org;
};

}

#endif // SCUORGH
