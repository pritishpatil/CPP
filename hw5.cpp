//
//  main.cpp
//  HW5.cpp
//
/*
 PIC 10A Homework 5
 Purpose: Three number function outputs + menu
 Author: Pritish Patil
 Date: 2/26/20

 */
//  Created by Pritish Patil on 2/24/20.
//  Copyright © 2020 Pritish Patil. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int choice;
int a; int b; int c;

void displayMenu()
{
    cout << "================== MENU ==================" << endl;
    cout << "1. Output the largest" << endl;
    cout << "2. Get the next permutation" << endl;
    cout << "3. Sort in ascending order" << endl;
    cout << "Enter your choice (1 - 3), Q to quit: ";
}

int largest(int a, int b, int c)
{
    if (a > b && a > c)
    {
        int max = a;
        return max;
    }
    else if (b > a && b > c)
    {
        int max = b;
        return max;
    }
    else
    {
        int max = c;
        return max;
    }
}

void mySort(int& a, int& b, int& c)
{
    int temp_1 = a;
    int temp_2 = b;
    int temp_3 = c;
    c = largest(a,b,c);
    if (c == temp_1)
    {
        if (b > temp_3)
        {
            a = temp_3;
        }
        else
        {
            a = temp_2;
            b = temp_3;
        }
    }
    else if (c == temp_2)
    {
        if (a > temp_3)
        {
            a = temp_3;
            b = temp_1;
        }
        else
        {
            b = temp_3;
        }
    }
    else if (c == temp_3)
    {
        if (a > temp_2)
        {
            b = temp_1;
            a = temp_2;
        }
    }
    
}


void myPermutation(int& a, int&b, int& c)
{
    int temp_1 = a;
    int temp_2 = b;
    a = c;
    b = temp_1;
    c = temp_2;
    
}


int main()
{
    cout << "Enter your three integer numbers: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    while (true)
    {
        displayMenu();
        cin >> choice;
        cout << endl;
        if (choice == 1)
        {
            cout << "The largest number among the three is: " << largest(a,b,c) << endl;
            cout << endl;
        }
        else if (choice == 2)
        {
            myPermutation(a,b,c);
            cout << "After one permutation: " << a << " " << b << " " << c << endl;
            cout << endl;
        }
        else if (choice == 3)
        {
            mySort(a,b,c);
            cout << "After sorting: " << a << " " << b << " " << c << endl;
            cout << endl;
        }
        else
        {
            cout << "Exit the menu" << endl;
            cout << endl;
            break;
        }
    }
    
    return 0;
    
}
