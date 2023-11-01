#ifndef STUDENTH
#define STUDENTH

#include <string>
#include <iostream>

namespace coen79 {

class Student {
private:
    int id;
    std::string name;

public:
    Student();
    Student(int id, const std::string& name);  
    int getId() const;
    const std::string& getName() const;
    void setId(int id);
    void setName(const std::string& name);
    bool operator==(const Student& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Student& student);
    friend std::istream& operator>>(std::istream& is, Student& x);
};

} 

#endif
