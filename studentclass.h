#ifndef STUDENTCLASS_H
#define STUDENTCLASS_H
#include <iostream>

namespace c79_inClass {

class Student {
private:
    char* name;
    int id;

public:
    Student();
    Student(const char* name, int id);
    Student(const Student& other);
    ~Student();                     
    Student& operator=(const Student& other);

    const char* getName() const;
    int getId() const;

    friend std::ostream& operator<<(std::ostream& os, const Student &s);
};

class SCUClass {
private:
    Student* students;
    int capacity;
    int totalStudents;

public:
    SCUClass();
    SCUClass(const SCUClass& other);
    ~SCUClass();

    bool addStudent(const Student &s);
    bool erase(int id);
    void list() const;

    friend std::ostream& operator<<(std::ostream& os, const SCUClass &s);
};

}


#endif 