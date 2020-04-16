//
//  main.cpp
//  HW3.cpp
//
/*
 PIC 10A 2A, Homework 3
 Purpose: Dual Grading System Final Score Calculator
 Author: Pritish Patil
 Date: 2/3/2020
 */
//  Created by Pritish Patil on 2/2/20.
//  Copyright © 2020 Pritish Patil. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double midterm_score;
    double final_exam_score;
    int number_assigments;
    int x;
    double score;
    double min = 9999999999;
    double sum_homework = 0;
    double total_homework;
    double homework_percentage;
    
    
    cout << "Please enter the midterm exam score (0 - 100): " << endl;
    cin >> midterm_score;
    
    cout << "Please enter the final exam score (0 - 100): " << endl;
    cin >> final_exam_score;
    
    cout << "Please enter the number of homework assignments (3 - 7): " << endl;
    cin >> number_assigments;
    
    for (x = 1; x <= number_assigments; x++)
    {
        cout << "Please enter the homework " << x << " score (0 - 100): " << endl;
        cin >> score;
        
        if (score < min)
        {
            min = score;
        }
        
        sum_homework = score + sum_homework;
        
    }
    
    
    total_homework = sum_homework - min;
    
   
    
    homework_percentage = total_homework / (100 * (number_assigments - 1));
    
    
    double raw_homework_A = homework_percentage * 25;
    double raw_midterm_A = (midterm_score / 100) * 35;
    double raw_final_A = (final_exam_score / 100) * 40;
    
    double scheme_a = raw_homework_A + raw_midterm_A + raw_final_A;
    
    cout << "Your final score based on Scheme A is " << scheme_a << endl;
    
    double raw_homework_B = homework_percentage * 30;
    double raw_final_B = (final_exam_score / 100) * 70;
    double scheme_b = raw_homework_B + raw_final_B;
    
    cout << "Your final score based on Scheme B is " << scheme_b << endl;
   
    double final_score;
    if (scheme_a > scheme_b)
    {
        final_score = scheme_a;
        cout << "Your final score is " << final_score << endl;
    }
    else
    {
        final_score = scheme_b;
        cout << "Your final score is " << final_score << endl;
    }
    
    if (final_score <= 100 && final_score >= 90){
        cout << "Your course grade is A" << endl;
    }
    else if (final_score < 90 && final_score >= 80){
        cout << "Your course grade is B" << endl;
    }
    else if (final_score < 80 && final_score >= 70){
        cout << "Your course grade is C" << endl;
    }
    else if (final_score < 70 && final_score >= 60){
        cout << "Your course grade is D" << endl;
    }
    else if (final_score < 60 && final_score >= 0){
        cout << "Your course grade is F" << endl;
    }
        
    return 0;
}

