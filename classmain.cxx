#include "studentclass.h"
#include <iostream>
#include <fstream>

using namespace std; 

using namespace c79_inClass;

int main() {
    SCUClass coen79;

    ifstream inFile("student.txt");  
    if (inFile.is_open()) {
        string name;
        int id;
        while (inFile >> id >> name) {
            Student newStudent(name.c_str(), id);
            coen79.addStudent(newStudent);
        }
        inFile.close();
    } else {
        cout << "Unable to open file." << endl;
    }

    // test #1 list all students 

    coen79.list();


    // test #2 erase select students and list new group of students 

    // coen79.erase(221881); 

    // cout << "newlist" << endl;

    // coen79.list();






    return 0;
}
