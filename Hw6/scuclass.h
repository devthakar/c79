#ifndef SCUCLASSH
#define SCUCLASSH

#include <iostream>
#include <vector>
#include "student.h"

namespace coen79 {

    class SCUClass {
    protected:
        std::vector<Student> students; 

    public: 
        SCUClass();
        void insert(const Student &);
        bool remove(int student_id);
        void traverse() const;

        friend std::ostream& operator<<(std::ostream& os, const SCUClass&);
    };

    int testvector();

} // namespace coen79

#endif
