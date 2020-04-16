//
//  main.cpp
//  HW4_P1
//
/*
    PIC 10A 2A, Homework 4, P2
    Purpose: Momte Carlo Experiments
    Author: Pritish Patil
    Date: 2/14/2020

 */
//  Created by Pritish Patil on 2/14/20.
//  Copyright © 2020 Pritish Patil. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    const double area_ellipse = 2.22144146907918;
    double a; double b;
    int darts;
    int counter;
    int j;
    int c = 0;
    
    for (int j = 1; j <= 6; j++)
    {
        counter = 0;
        darts = pow(10,j);
        
        for (int i = 1; i <= darts; i++)
        {
            a = -1 + ((2.0 * rand()) / RAND_MAX);
            b = -1 + ((2.0 * rand()) / RAND_MAX);
            
            if ((pow(a,2) + 2 * pow(b,2)) <= 1)
            {
                counter++;
            }
            
            switch (j)
            {
                case 1: c = 28;
                    break;
                case 2: c = 27;
                    break;
                case 3: c = 26;
                    break;
                case 4: c = 25;
                    break;
                case 5: c = 24;
                    break;
                case 6: c = 23;
                    break;
                default: c = 22;
                    break;
            }
    }
    
    cout << "# darts: " << darts << setw(c) << "estimated area = " << fixed << setprecision(5) << ((4.0 * counter) / darts) << setw(12) << "error = " << fabs((area_ellipse) - ((4.0 * counter) / darts)) << endl;
    
    
    }
    
    
    
    
    
        
        
        
    return 0;
}
