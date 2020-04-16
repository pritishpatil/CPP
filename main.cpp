#include <iostream>
#include <string>
#include "BMI.hpp" // include header file in both the class cpp and main
using namespace std;

int main()
{
    string name;
    int height;
    double weight;
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Enter you height (in inches): " << endl;
    cin >> height;
    cout << "Enter your weight (in pounds): " << endl;
    cin >> weight;
    
    BMI Student_1; // as soon as u create the object it uses the default constructor (null state)
    Student_1.setName(name);
    Student_1.setHeight(height);
    Student_1.setWeight(weight);
    cout << endl << "Student Name: " << Student_1.getName() << endl;
    cout << "Student Height: " << Student_1.getHeight() << endl;
    cout << "Student Weight: " << Student_1.getWeight() << endl;
    cout << "Student BMI: " << Student_1.calculateBMI() << endl;
    
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Enter you height (in inches): " << endl;
    cin >> height;
    cout << "Enter your weight (in pounds): " << endl;
    cin >> weight;
    
     BMI Student_2 (name, height, weight); // Overloaded constructor
     cout << endl << "Student Name: " << Student_2.getName() << endl;
     cout << "Student Height: " << Student_2.getHeight() << endl;
     cout << "Student Weight: " << Student_2.getWeight() << endl;
     cout << "Student BMI: " << Student_2.calculateBMI() << endl;
    
    // proves that member functions work after second student
    // each member variable will hold a value for ONE object, in this case Student_1
    cout << "Student 1 Name: " << Student_1.getName() << endl;
     
    
    return 0;
}
