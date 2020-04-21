//
//  Person.cpp
//  Tic Tac Toe
//
//  Created by Pritish Patil on 4/18/20.
//  Copyright © 2020 Pritish Patil. All rights reserved.
//

#include "person.h"
#include <iostream>

// Person constructor -- initializer list
Person::Person(string person) : name(person), runningScore(0){
}

// Displays name
void Person::nameDisplay()
{
    cout << name;
}

// Displays score
void Person::scoreDisplay()
{
    cout << runningScore;
    
}

// Updates score
void Person::updateScore()
{
    runningScore = runningScore + 1;
}

// Gets score
int Person:: getScore()
{
    return runningScore;
}
