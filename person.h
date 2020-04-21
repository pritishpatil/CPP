//
//  Person.hpp
//  Tic Tac Toe
//
//  Created by Pritish Patil on 4/18/20.
//  Copyright © 2020 Pritish Patil. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp


#include <string>
using namespace std;



class Person
{
public:
    //Person class constructor
    Person(string person);
    
    // Member function details in person.cpp
    void nameDisplay();
    void scoreDisplay();
    void updateScore();
    int getScore();
    
    
private:
    // Private Person class member variables
    string name;
    int runningScore;
};


#endif /* Person_hpp */
