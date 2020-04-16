//
//  PIC10A.cpp
//  P3_main.cpp
//
//  Created by Pritish Patil on 3/19/20.
//  Copyright © 2020 Pritish Patil. All rights reserved.
//
/*
 PIC 10A, Final Exam
 Purpose: PIC10A CPP File
 Author: Pritish Patil
 Date: 03/20/2020
 */

#include "PIC10A.hpp"
#include "Student.hpp"

#include <iostream>

PIC10A::PIC10A()
{
    studentsList.resize(0);
}


void PIC10A::addNewStudent(Student& newStudent){
    studentsList.push_back(newStudent);
}

void PIC10A::setFinalGrades(){
    for (int j = 0; j < studentsList.size(); j++){
        // calculate total grade of all homework (average)
        double homeworkGrade = 0;
        for (int i = 0;i < studentsList[j].getHomeworkGrades().size(); i++){
            homeworkGrade += studentsList[j].getHomeworkGrades()[i];
        }
        homeworkGrade /= studentsList[j].getNumOfHomework();
        cout << homeworkGrade << endl;
        
        // calculate final grade based on scheme 1
        double scheme_one, scheme_two;
        scheme_one = (0.3 * homeworkGrade) + (0.3 * studentsList[j].getMidtermGrade()) + (0.4 * studentsList[j].getFinalExamGrade());
        
        // calculate final grade based on scheme 2
        scheme_two = (0.3 * homeworkGrade) + (0.7 * studentsList[j].getFinalExamGrade());
        
        // set final grade as the greater of the two schemes
        if (scheme_one > scheme_two){
            studentsList[j].setFinalGrade(scheme_one);
        }
        else {
            studentsList[j].setFinalGrade(scheme_two);
        }
    }
}

// print name, id, annd final grade of all students
void PIC10A::printAllStudents() const{
    for (int i = 0; i < studentsList.size(); i++){
        cout << "Name: " << studentsList[i].getName() << " ID: " << studentsList[i].getID() << " Final Grade: " << studentsList[i].getFinalGrade() << endl;
    }
}

// print summary of all students (number if students and average final grade of the class)
void PIC10A::printSummary() const{
    double average_grade = 0;
    for (int i = 0; i < studentsList.size(); i++){
        average_grade += studentsList[i].getFinalGrade();
    }
    average_grade /= studentsList.size();
    cout << "Total Number of Students : " << studentsList.size() << " Average Grade: " << average_grade << endl;
}
