//
//  Game.hpp
//  Tic Tac Toe
//
//  Created by Pritish Patil on 4/18/20.
//  Copyright © 2020 Pritish Patil. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <iostream>
#include <string>
#include <vector>
#include "person.h"

using namespace std;

class Game
{
public:
    // Game class constructor
    Game(Person* player1, Person* player2, int* games);
    
    // Member Function details in Game.cpp
    string getCoord();
    void setRow1();
    void setRow2();
    void setRow3();
    void moveXrow1();
    void moveXrow2();
    void moveXrow3();
    void moveOrow1();
    void moveOrow2();
    void moveOrow3();
    void checkWin();
    void resetBoard();
    bool checkPosition();
    void displayBoard();
    void playGame();
    void entryMenu();
    
    

private:
    // Private Game class member variables
    string coordinate;
    bool endgame_switch;
    vector<string> newRow1;
    vector<string> newRow2;
    vector<string> newRow3;
    Person* person1;
    Person* person2;
    int newGames;
    
    
    
};

#endif /* Game_hpp */
