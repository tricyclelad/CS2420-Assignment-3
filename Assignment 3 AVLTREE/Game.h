//
//  Game.h
//  Slider Puzzle
//
//  Created by Camron Blake Martinez on 9/14/15.
//  Copyright (c) 2015 Camron Blake Martinez. All rights reserved.
//

#ifndef GAME_H
#define GAME_H
#include "Queue.h"
#include "Board.h"
#include <string>
#include <iostream>

using namespace std;


class Game {
    
public:
    string gameName;
    
    Game(){gameName = "Default";}
    
    void playGiven(string givenName, int values[]);
    void playRandom(string givenName, int jumbleNumber);
    
private:

    int numberOfMoves = 0;

    void checkWin();
    
};
#endif /* defined(GAME_H) */
