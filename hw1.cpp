//
//  main.cpp
//  Tic Tac Toe
//
//  Created by Pritish Patil on 4/18/20.
//  Copyright © 2020 Pritish Patil. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include "game.h"
#include "person.h"

using namespace std;

int main()
{
    // Asks user for number of games and names of players
    int games;
    string player1; string player2;
    cout << "How many games would you like to play? " << endl;
    cin >> games;
    cout << "Enter the name of Player 1: " << endl;
    cin >> player1;
    cout << "Enter the name of Player 2: " << endl;
    cin >> player2;
    cin.ignore();
    
    // Creates Player pointers
    Person* person1 = new Person(player1);
    Person* person2 = new Person(player2);
    
    // Runs loop for number of games
    for (int i = 0; i < games; i++)
    {
        Game G(person1, person2, &games);
        if (i == 0){
            G.entryMenu();
        }
        G.playGame();
    }
    
    // Compares match score and determines the winner
    if (person1->getScore() > person2->getScore())
    {
        cout << "Congratulations ";
        person1->nameDisplay();
        cout << ". You won!" << endl;
    }
    else if (person2->getScore() > person1->getScore())
    {
        cout << "Congratulations ";
        person2->nameDisplay();
        cout << ". You won!" << endl;
    }
    else if (person1->getScore() == person2->getScore())
    {
        cout << "It's a tie!" << endl;
    }
    
    return 0;
}
    
    
   
