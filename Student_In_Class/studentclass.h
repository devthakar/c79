#ifndef STUDENTCLASS_H
#define STUDENTCLASS_H

#include <iostream>
#include <string>

using namespace std;

namespace c79_inClass {

class Student {
public:

    
    // Default constructor
    Student() : name(""), id(0) {}
    Student(const std::string& name, int id) : name(name), id(id) {}


    std :: string getName() const { return name; }
    int getId() const { return id; }
    std:: string name;
    int id;

    friend std::ostream& operator<<(std::ostream& os, const Student &s);

};

class SCUClass {


    public: 
    Student student[30]; 
    int totalStudents = 0; 
    bool addStudent( Student & s);  
    bool erase(int id);      
    void list();        


    friend std::ostream& operator<<(std::ostream& os, const SCUClass &s);

};


} 

#endif 