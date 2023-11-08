#ifndef SCUPERSONH
#define SCUPERSONH

#include <iostream>
#include <string>

namespace coen79 {

class SCUPerson {
public:
    SCUPerson(int i = 0, std::string s = "") : id(i), name(s) {}
    virtual ~SCUPerson() {}

    int getId() const { return id; }
    virtual void display(std::ostream& os) const = 0;

protected:
    int id;
    std::string name;
};

}

#endif // SCUPERSONH
