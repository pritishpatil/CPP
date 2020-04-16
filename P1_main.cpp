//
//  main.cpp
//  P1_main.cpp
//
//  Created by Pritish Patil on 3/19/20.
//  Copyright © 2020 Pritish Patil. All rights reserved.
//
/*
 PIC 10A, Final Exam
 Purpose: Random Matrix
 Author: Pritish Patil
 Date: 03/20/2020
 */

#include <iostream>
#include <cstdlib>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int m;
    int n;
    int lower;
    int upper;
    
    srand(time(0));
    
    cout << "Please input the dimension of the matrix: " << endl;
    cin >> m >> n;
    
    cout << "Please input the range of the random numbers: " << endl;
    cin >> lower >> upper;
    if (lower < upper)
    {
        vector <vector<double>> table(m);   // Creates table of m rows
        vector <double> rows(n);    // Assigns rows
        for (int i = 0; i < m; i++)
            table[i] = rows;
        
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if(j % 2 == 0)
                {
                    table[i][j] = lower + (((upper - lower) * 1.0 * rand()) / (RAND_MAX));  // Generates random double
                }
                else
                {
                    table[i][j] = lower + rand() % ((upper - lower) + 1); // Generates random integer
                }
            }
        }
        
        cout << "These random numbers have been generated: " << endl;
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; ++j){
                cout << fixed << setprecision(2) << table[i][j] << " ";
            }
            cout << endl;   // Resets line for matrix
        }
        
        cout << "The largest numbers per row are: " << endl;
        for (int i = 0; i < m; i++){
            double maximum = table[i][0];   // Sets temporary maximum value for the i row
            for (int j = 0; j < n; j++){
                if (table[i][j] > maximum)
                {
                    maximum = table[i][j];
                }
            }
            cout << maximum << endl;
        }
        cout << "The largest numbers per column are: " << endl;
        for (int j = 0; j < n; j++){
            double maximum = table[0][j];
            for (int i = 0; i < m; i++){
                if (table[i][j] > maximum)
                {
                    maximum = table[i][j];
                }
            }
            cout << maximum << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "The bounds for the range of the random numbers are incorrect." << endl;
    }
    
    return 0;
}


