//
//  Game.cpp
//  Tic Tac Toe
//
//  Created by Pritish Patil on 4/18/20.
//  Copyright © 2020 Pritish Patil. All rights reserved.
//

#include "game.h"

// Game Constructor -- Initializer List
Game::Game(Person* player1, Person* player2, int* games): person1(player1), person2(player2), newGames(*games), endgame_switch(false)
{
    
    for (int i = 0; i < 3; i++){
        newRow1.push_back(" ");
        newRow2.push_back(" ");
        newRow3.push_back(" ");
    }
}

// Entry Menu
void Game::entryMenu()
{
    cout << "Number of games: " << newGames << endl;
       cout << "Player 1 Name = ";
    person1->nameDisplay();
    cout << endl;
       cout << "Player 2 Name = ";
    person2->nameDisplay();
    cout << endl;
       cout << "     Tic Tac Toe" << endl;
    cout << "    ";
    person1->nameDisplay();
    cout << " (X) - ";
    person2->nameDisplay();
    cout << " (O)" << endl;
       cout << endl;
}

// Display Board
void Game::displayBoard()
{
    cout << "     1      2      3" << endl;
    cout << "        |      |       " << endl;
    cout << "1" << "    " << newRow1[0] << "  " << "|" << "   " << newRow1[1] << "  " << "|" << "   " << newRow1[2] << "   " << endl;
    cout << "        |      |       " << endl;
    cout << " ------- ------ -------" << endl;
    cout << "        |      |       " << endl;
    cout << "2" << "    " << newRow2[0] << "  " << "|" << "   " << newRow2[1] << "  " << "|" << "   " << newRow2[2] << "   " << endl;
    cout << "        |      |       " << endl;
    cout << " ------- ------ -------" << endl;
    cout << "        |      |       " << endl;
    cout << "3" << "    " << newRow3[0] << "  " << "|" << "   " << newRow3[1] << "  " << "|" << "   " << newRow3[2] << "   " << endl;
    cout << "        |      |       " << endl;
}

// Executes the game
void Game::playGame()
{
    bool turn = true;
    bool testspot = false;
    displayBoard();
    while (endgame_switch == false){
        
        if (turn == true){
            
            getCoord();
            
            if (coordinate == "1 1"){
                if (testspot == checkPosition()){
                    moveXrow1();
                    displayBoard();
                    turn = false;
                }
                else {
                    cout << "This coordinate is already taken!" << endl;
                    turn = true;
                }
            }
            
            if (coordinate == "1 2"){
                if (testspot == checkPosition()){
                    moveXrow1();
                    displayBoard();
                    turn = false;
                }
                else {
                    cout << "This coordinate is already taken!" << endl;
                    turn = true;
                }
            }
            
            if (coordinate == "1 3"){
                if (testspot == checkPosition()){
                    moveXrow1();
                    displayBoard();
                    turn = false;
                }
                else {
                    cout << "This coordinate is already taken!" << endl;
                    turn = true;
                }
            }
            
            if (coordinate == "2 1"){
                if (testspot == checkPosition()){
                    moveXrow2();
                    displayBoard();
                    turn = false;
                }
                else {
                    cout << "This coordinate is already taken!" << endl;
                    turn = true;
                }
            }
            
            if (coordinate == "2 2"){
                if (testspot == checkPosition()){
                    moveXrow2();
                    displayBoard();
                    turn = false;
                }
                else {
                    cout << "This coordinate is already taken!" << endl;
                    turn = true;
                }
            }
            
            if (coordinate == "2 3"){
                if (testspot == checkPosition()){
                    moveXrow2();
                    displayBoard();
                    turn = false;
                }
                else {
                    cout << "This coordinate is already taken!" << endl;
                    turn = true;
                }
            }
            
            if (coordinate == "3 1"){
                if (testspot == checkPosition()){
                    moveXrow3();
                    displayBoard();
                    turn = false;
                }
                else {
                    cout << "This coordinate is already taken!" << endl;
                    turn = true;
                }
            }
            
            if (coordinate == "3 2"){
                if (testspot == checkPosition()){
                    moveXrow3();
                    displayBoard();
                    turn = false;
                }
                else {
                    cout << "This coordinate is already taken!" << endl;
                    turn = true;
                }
            }
            
            if (coordinate == "3 3"){
                if (testspot == checkPosition()){
                    moveXrow3();
                    displayBoard();
                    turn = false;
                }
                else {
                    cout << "This coordinate is already taken!" << endl;
                    turn = true;
                }
            }
            
            checkWin();                             // Checks for win/draw
                if (endgame_switch == true){
                    newRow1.resize(0);
                    newRow2.resize(0);
                    newRow3.resize(0);
                    break;
                }
            }
        
        // O move
        
        if (turn == false){
        
        getCoord();
        
        if (coordinate == "1 1"){
            if (testspot == checkPosition()){
                moveOrow1();
                displayBoard();
                turn = true;
            }
            else {
                cout << "This coordinate is already taken!" << endl;
                turn = false;
            }
        }
        
        if (coordinate == "1 2"){
            if (testspot == checkPosition()){
                moveOrow1();
                displayBoard();
                turn = true;
            }
            else {
                cout << "This coordinate is already taken!" << endl;
                turn = false;
            }
        }
        
        if (coordinate == "1 3"){
            if (testspot == checkPosition()){
                moveOrow1();
                displayBoard();
                turn = true;
            }
            else {
                cout << "This coordinate is already taken!" << endl;
                turn = false;
            }
        }
        
        if (coordinate == "2 1"){
            if (testspot == checkPosition()){
                moveOrow2();
                displayBoard();
                turn = true;
            }
            else {
                cout << "This coordinate is already taken!" << endl;
                turn = false;
            }
        }
        
        if (coordinate == "2 2"){
            if (testspot == checkPosition()){
                moveOrow2();
                displayBoard();
                turn = true;
            }
            else {
                cout << "This coordinate is already taken!" << endl;
                turn = false;
            }
        }
        
        if (coordinate == "2 3"){
            if (testspot == checkPosition()){
                moveOrow2();
                displayBoard();
                turn = true;
            }
            else {
                cout << "This coordinate is already taken!" << endl;
                turn = false;
            }
        }
        
        if (coordinate == "3 1"){
            if (testspot == checkPosition()){
                moveOrow3();
                displayBoard();
                turn = true;
            }
            else {
                cout << "This coordinate is already taken!" << endl;
                turn = false;
            }
        }
        
        if (coordinate == "3 2"){
            if (testspot == checkPosition()){
                moveOrow3();
                displayBoard();
                turn = true;
            }
            else {
                cout << "This coordinate is already taken!" << endl;
                turn = false;
            }
        }
        
        if (coordinate == "3 3"){
            if (testspot == checkPosition()){
                moveOrow3();
                displayBoard();
                turn = true;
            }
            else {
                cout << "This coordinate is already taken!" << endl;
                turn = false;
            }
        }
        
        checkWin();
            if (endgame_switch == true){
                newRow1.resize(0);
                newRow2.resize(0);
                newRow3.resize(0);
                break;
            }
        }
    }
}


// Asks user for coordinate input
string Game::getCoord()
{
    cout << "Please indicate the coordinate square you would like to move (Row Col). Ex: 1 2 (Do not include any space after col value)." << endl;
    getline(cin,coordinate);
    return coordinate;
}

// X's move for row 1
void Game::moveXrow1()
{
    if (coordinate == "1 1"){
        if (newRow1[0] == " "){
            newRow1[0] = "X";
            }
        else {cout << "This coordinate is already taken!" << endl;}
    }
    
    else if (coordinate == "1 2"){
        if (newRow1[1] == " "){
            newRow1[1] = "X";
        }
        else{cout << "This coordinate is already taken!" << endl;}
    }
    
    else if (coordinate == "1 3"){
        if (newRow1[2] == " "){
            newRow1[2] = "X";
        }
        else{cout << "This coordinate is already taken!" << endl;}
    }
}

void Game::moveXrow2()
{
    if (coordinate == "2 1"){
        if (newRow2[0] == " "){
            newRow2[0] = "X";
            }
        else {cout << "This coordinate is already taken!" << endl;}
    }
    
    else if (coordinate == "2 2"){
        if (newRow2[1] == " "){
            newRow2[1] = "X";
        }
        else{cout << "This coordinate is already taken!" << endl;}
    }
    
    else if (coordinate == "2 3"){
        if (newRow2[2] == " "){
            newRow2[2] = "X";
        }
        else{cout << "This coordinate is already taken!" << endl;}
    }
}

void Game::moveXrow3()
{
    if (coordinate == "3 1"){
        if (newRow3[0] == " "){
            newRow3[0] = "X";
            }
        else {cout << "This coordinate is already taken!" << endl;}
    }
    
    else if (coordinate == "3 2"){
        if (newRow3[1] == " "){
            newRow3[1] = "X";
        }
        else{cout << "This coordinate is already taken!" << endl;}
    }
    
    else if (coordinate == "3 3"){
        if (newRow3[2] == " "){
            newRow3[2] = "X";
        }
        else{cout << "This coordinate is already taken!" << endl;}
    }
}

// Os move for row 1
void Game::moveOrow1()
{
    if (coordinate == "1 1"){
        if (newRow1[0] == " "){
            newRow1[0] = "O";
            }
        else {cout << "This coordinate is already taken!" << endl;}
    }
    
    else if (coordinate == "1 2"){
        if (newRow1[1] == " "){
            newRow1[1] = "O";
        }
        else{cout << "This coordinate is already taken!" << endl;}
    }
    
    else if (coordinate == "1 3"){
        if (newRow1[2] == " "){
            newRow1[2] = "O";
        }
        else{cout << "This coordinate is already taken!" << endl;}
    }
}

void Game::moveOrow2()
{
    if (coordinate == "2 1"){
        if (newRow2[0] == " "){
            newRow2[0] = "O";
            }
        else {cout << "This coordinate is already taken!" << endl;}
    }
    
    else if (coordinate == "2 2"){
        if (newRow2[1] == " "){
            newRow2[1] = "O";
        }
        else{cout << "This coordinate is already taken!" << endl;}
    }
    
    else if (coordinate == "2 3"){
        if (newRow2[2] == " "){
            newRow2[2] = "O";
        }
        else{cout << "This coordinate is already taken!" << endl;}
    }
}

void Game::moveOrow3()
{
    if (coordinate == "3 1"){
        if (newRow3[0] == " "){
            newRow3[0] = "O";
            }
        else {cout << "This coordinate is already taken!" << endl;}
    }
    
    else if (coordinate == "3 2"){
        if (newRow3[1] == " "){
            newRow3[1] = "O";
        }
        else{cout << "This coordinate is already taken!" << endl;}
    }
    
    else if (coordinate == "3 3"){
        if (newRow3[2] == " "){
            newRow3[2] = "O";
        }
        else{cout << "This coordinate is already taken!" << endl;}
    }
}

// Check Win or draw function based on vector index values
void Game::checkWin()
{
    if ((newRow1[0] == "X" && newRow1[1] == "X" && newRow1[2] == "X") || (newRow2[0] == "X" && newRow2[1] == "X" && newRow2[2] == "X") || (newRow3[0] == "X" && newRow3[1] == "X" && newRow3[2] == "X") || (newRow1[0] == "X" && newRow2[0] == "X" && newRow3[0] == "X") || (newRow1[1] == "X" && newRow2[1] == "X" && newRow3[1] == "X") || (newRow1[2] == "X" && newRow2[2] == "X"&& newRow3[2] == "X") || (newRow1[0] == "X" && newRow2[1] == "X" && newRow3[2] == "X") || (newRow1[2] == "X" && newRow2[1] == "X" && newRow3[0] == "X"))
    {
        person1->nameDisplay();
        cout << " wins this round" << endl;
        person1->nameDisplay();
        cout << " : ";
        person1->updateScore();
        person1->scoreDisplay();
        cout << endl;
        person2->nameDisplay();
        cout << " : ";
        person2->scoreDisplay();
        cout << endl;
        endgame_switch = true;
        for (int i = 0; i < 3; i++){
            newRow1.push_back(" ");
            newRow2.push_back(" ");
            newRow3.push_back(" ");
        }
    }
    
    else if ((newRow1[0] == "O" && newRow1[1] == "O" && newRow1[2] == "O") || (newRow2[0] == "O" && newRow2[1] == "O" && newRow2[2] == "O") || (newRow3[0] == "O" && newRow3[1] == "O" && newRow3[2] == "O") || (newRow1[0] == "O" && newRow2[0] == "O" && newRow3[0] == "O") || (newRow1[1] == "O" && newRow2[1] == "O" && newRow3[1] == "O") || (newRow1[2] == "O" && newRow2[2] == "O" && newRow3[2] == "O") || (newRow1[0] == "O" && newRow2[1] == "O" && newRow3[2] == "O") || (newRow1[2] == "O" && newRow2[1] == "O" && newRow3[0] == "O"))
    {
        person2->nameDisplay();
        cout << " wins this round" << endl;
        person1->nameDisplay();
        cout << " : ";
        person2->updateScore();
        person1->scoreDisplay();
        cout << endl;
        person2->nameDisplay();
        cout << " : ";
        person2->scoreDisplay();
        cout << endl;
        endgame_switch = true;
        for (int i = 0; i < 3; i++){
            newRow1.push_back(" ");
            newRow2.push_back(" ");
            newRow3.push_back(" ");
        }
    }
    else if ((newRow1[0] == "X" || newRow1[0] == "O") && (newRow1[1] == "X" || newRow1[1] == "O") && (newRow1[2] == "X" || newRow1[2] == "O") && (newRow2[0] == "X" || newRow2[0] == "O") && (newRow2[1] == "X" || newRow2[1] == "O") && (newRow2[2] == "X" || newRow2[2] == "O") && (newRow3[0] == "X" || newRow3[0] == "O") && (newRow3[1] == "X" || newRow3[1] == "O") && (newRow3[2] == "X" || newRow3[2] == "O")){
        cout << "This round is a draw" << endl;
        person1->nameDisplay();
        cout << " : ";
        person1->scoreDisplay();
        cout << endl;
        person2->nameDisplay();
        cout << " : ";
        person2->scoreDisplay();
        cout << endl;
        endgame_switch = true;
    }
}

// Resets vector index values
void Game::resetBoard()
{
    for (int i = 0; i < 3; i++){
        newRow1.push_back(" ");
        newRow2.push_back(" ");
        newRow3.push_back(" ");
    }
}

// Checks if specific position on board is already occupied
bool Game::checkPosition()
{
    if (coordinate == "1 1"){
        if (newRow1[0] == "X" || newRow1[0] == "O"){
            return true;
        }
        else {return false;}
    }
    if (coordinate == "1 2"){
        if (newRow1[1] == "X" || newRow1[1] == "O"){
            return true;
        }
        else {return false;}
    }
    if (coordinate == "1 3"){
        if (newRow1[2] == "X" || newRow1[2] == "O"){
            return true;
        }
        else {return false;}
    }
    if (coordinate == "2 1"){
        if (newRow2[0] == "X" || newRow2[0] == "O"){
            return true;
        }
        else {return false;}
    }
    if (coordinate == "2 2"){
        if (newRow2[1] == "X" || newRow2[1] == "O"){
            return true;
        }
        else {return false;}
    }
    if (coordinate == "2 3"){
        if (newRow2[2] == "X" || newRow2[2] == "O"){
            return true;
        }
        else {return false;}
    }
    if (coordinate == "3 1"){
        if (newRow3[0] == "X" || newRow3[0] == "O"){
            return true;
        }
        else {return false;}
    }
    if (coordinate == "3 2"){
        if (newRow3[1] == "X" || newRow3[1] == "O"){
            return true;
        }
        else {return false;}
    }
    if  (coordinate == "3 3"){
        if (newRow3[2] == "X" || newRow3[2] == "O"){
            return true;
        }
        else {return false;}
    }
    else {return false;}
}
    
    


    




