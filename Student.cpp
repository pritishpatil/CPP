//
//  Student.cpp
//  P3_main.cpp
//
//  Created by Pritish Patil on 3/19/20.
//  Copyright © 2020 Pritish Patil. All rights reserved.
//
/*
 PIC 10A, Final Exam
 Purpose: Student CPP File
 Author: Pritish Patil
 Date: 03/20/2020
 */

#include "Student.hpp"

Student::Student():name(""), ID(""), numOfHomework(0), finalExamGrade(0), midtermGrade(0), finalGrade(0)
{
    homeworkGrades.resize(0);
}

// constructor for student with pre set name, id, and num hws
Student::Student(string newname, string newID, int newnumOfHomework):name(newname), ID(newID), numOfHomework(newnumOfHomework), finalExamGrade(0), midtermGrade(0), finalGrade(0)
{
    homeworkGrades.resize(0);
}


void Student::setMidtermGrade(double newMidtermGrade){
    midtermGrade = newMidtermGrade;
}
void Student::setFinalExamGrade(double newFinalExamGrade){
    finalExamGrade = newFinalExamGrade;
}
void Student::setHomeworkGrades(const vector<double>& newHomeworkGrades){
    for (int i = 0; i < newHomeworkGrades.size(); i++){
        homeworkGrades.push_back(newHomeworkGrades[i]);
    }
}
void Student::setFinalGrade(double newFinalGrade){
    finalGrade = newFinalGrade;
}


string Student::getName() const {
    return name;
}
string Student::getID() const {
    return ID;
}
int Student::getNumOfHomework() const {
    return numOfHomework;
}
double Student::getMidtermGrade() const {
    return midtermGrade;
}
double Student::getFinalExamGrade() const {
    return finalExamGrade;
}
vector< double > Student::getHomeworkGrades() const {
    return homeworkGrades;
}
double Student::getFinalGrade() const {
    return finalGrade;
}
