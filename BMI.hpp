//
//  BMI.hpp
//  Functions
//
//  Created by Pritish Patil on 3/26/20.
//  Copyright © 2020 Pritish Patil. All rights reserved.
//


// Header file is where the class information should go
// Funnction declarations in header file


#include <iostream>
#include <string>
using namespace std;

#ifndef BMI_hpp     // header guards
#define BMI_hpp

class BMI
{
    // first thing to define are the member variables
    // member variables = information we are computing in class * normally private dont want them to be changed
public:
    // Default Constructor = sets member variables to null states
    BMI();
    
    // Overloaded Constructor (takes in the cin)
    BMI(string, int, double);
    
    // Destructor: Once an object is done being used. Needs to be destroyed out of memory.
    ~BMI();
    
    // Accessor Functions: return our member variables
    // Usually put get in front
    // if you have a function thats not going to be modifying any of the member variables is to put the const keyword
    string getName() const;
    int getHeight() const;
    double getWeight() const;
    
    // Mutator Functions: allow us to edit each of the protected member variables one at a time
    // Kind of act like overloaded constructor, except they access one member variable at a time
    void setName(string); // sets name of student
    void setHeight(int); // sets height
    void setWeight(double);
    double calculateBMI(); // doesn't use parameters because we can now use member variables 
    
    
private:
    // member variables
    string newName;
    int newHeight;
    double newWeight;
};



#endif /* BMI_hpp */
