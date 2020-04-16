//
//  main.cpp
//  HW4
//
/*
    PIC 10A 2A, Homework 4 Problem 2
    Purpose: Random Walk Robot
    Author: Pritish Patil
    Date: 2/14/2020
 */
//  Created by Pritish Patil on 2/11/20.
//  Copyright © 2020 Pritish Patil. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    int x = 0; int y = 0;
    int space;
    srand(time(0));
    do
    {
        int r = rand() % 4 + 1;
        if (r == 1)
        {
            space = 11;
        }
        else if (r == 4)
        {
            space = 8;
        }
        else (space = 9);
        switch (r)
        {
            case 1: cout << "Up" << setw(space) << "(" << x << "," << ++y << ")" << endl;
                break;
            case 2: cout << "Down" << setw(space) << "(" << x << "," << --y << ")" << endl;
                break;
            case 3: cout << "Left" << setw(space) << "(" << --x << "," << y << ")" << endl;
                break;
            case 4: cout << "Right" << setw(space) << "(" << ++x << "," << y << ")" << endl;
                break;
            default: cout << "INVALID OPERATION" << endl;
            break;
        }
        if (x == 0 && y == 0)
        {
            cout << "Back to the origin" << endl; break;
            
        }
    
    }
    while((x > -5 && x < 5) && (y > -5 && y < 5));
    if (x == 5 || x == -5 || y == 5 || y == -5)
    {
        cout << "Hit the boundary!" << endl;
    }
}
     
