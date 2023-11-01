

#include <iostream>
#include <fstream>
#include <sstream>
#include "scuclass.h"
#include "student.h"

using namespace std;
using namespace coen79;

namespace coen79 {
    int testvector() {
        SCUClass head;
        string line;

        while (getline(cin, line)) {
            istringstream ss(line);
            char cmd;
            int id;
            string name;

            ss >> cmd;

            if (cmd == 'L') {
                cout << endl;
                cout << endl;
                head.traverse();
            }

            if (cmd == 'A') {
                if (!(ss >> id >> name)) {
                    cerr << "Error, A record no data" << endl;
                } else {
                    Student student(id, name);
                    head.insert(student);
                }
            }

            if (cmd == 'X') {
                if (!(ss >> id)) {
                    cerr << "Error, X record no id" << endl;
                } else {
                    bool remove_s = head.remove(id);
                    if (!remove_s) {
                        cerr << "Error, X record no match." << endl;
                    }
                }
            }
        }

        return EXIT_SUCCESS;
    }
} 

int main() {
    freopen("TestStudentData.txt", "r", stdin);

    coen79::testvector(); 

    fclose(stdin);
    
    return EXIT_SUCCESS;
}


