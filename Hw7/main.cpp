#include <iostream>
#include <fstream>
#include <sstream>
#include "SCUOrg.h"
#include "Student.h"
#include "Staff.h"

using namespace std;
using namespace coen79;

int main() {
    SCUOrg org;
    string line, recordType;

    ifstream infile("HW7StudentTest.txt");

    if (!infile.is_open()) {
        cerr << "Error: Could not open file" << endl;
        return 1;
    }


    if (getline(infile, line)) {
        if (line.find("Student Records:") < line.length()) {
            recordType = "Student";
        } else if (line.find("Staff Records:") < line.length()) {
            recordType = "Staff";
        } else {
            cerr << "Error: First line does not contain 'Student Records:' or 'Staff Records:'" << endl;
            return 1;
        }
    } else {
        cerr << "Error: Could not read the first line" << endl;
        return 1;
    }


    while (getline(infile, line)) {
        istringstream ss(line);
        char cmd;
        int id;
        string name;
        int yearEnter;
        string title;

        ss >> cmd;


        if (cmd == 'A') {
            ss >> id >> name;
            if (recordType == "Student") {
                ss >> yearEnter;
                org.insert(new Student(id, name, yearEnter));
            } else if (recordType == "Staff") {
                ss >> title;
                org.insert(new Staff(id, name, title));
            } else {
                cerr << "Error: Unknown record type" << endl;
                return 1;
            }
        }

        else if (cmd == 'X') {
            ss >> id;
            if (!org.remove(id)) {
                cerr << "Error: ID to remove not found" << endl;
            }
        }

        else if (cmd == 'L') {
            cout << "Traverse:" << endl;
            org.traverse();
        } else {
            cerr << "Error: Unknown command" << endl;
        }
    }

    infile.close();
    return 0;
}

