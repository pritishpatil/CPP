//
//  PIC10A.hpp
//  P3_main.cpp
//
//  Created by Pritish Patil on 3/19/20.
//  Copyright © 2020 Pritish Patil. All rights reserved.
//


#ifndef PIC10A_hpp
#define PIC10A_hpp

#include "Student.hpp"
#include <vector>


class PIC10A
{
public:
    PIC10A();
    void addNewStudent(Student& newStudent);
    void setFinalGrades();
    void printAllStudents() const;
    void printSummary() const;

private:
    vector<Student> studentsList;
    
};


#endif /* PIC10A_hpp */
