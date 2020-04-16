//
//  BMI.cpp
//  Functions
//
//  Created by Pritish Patil on 3/26/20.
//  Copyright © 2020 Pritish Patil. All rights reserved.
//
/*
 #include <iostream> not necessary because libraries are already in header file which is included
 #include <string>
 */

// function definitions in cpp file

#include "BMI.hpp"
//scope resolution colons
BMI::BMI()
{
    newHeight = 0;
    newWeight = 0.0;
}

BMI::BMI(string name, int height, double weight)
{
    newName = name;
    newHeight = height;
    newWeight = weight;
}

BMI::~BMI()
{
    
}

string BMI::getName() const
{
    return newName;
}

int BMI::getHeight() const // returns height of patients
{
    return newHeight;
}

double BMI::getWeight() const
{
    return newWeight;
}

void BMI::setName(string name)
{
    newName = name;
}

void BMI::setHeight(int height)
{
    newHeight = height;
}

void BMI::setWeight(double weight)
{
    newWeight = weight;
}

double BMI::calculateBMI()
{
    return ((newWeight * 703.0) / (newHeight * newHeight));
}
