//
//  GameState.h
//  Assignment 3 AVLTREE
//
//  Created by Camron Blake Martinez on 10/12/15.
//  Copyright © 2015 Camron Blake Martinez. All rights reserved.
//

#ifndef GameState_h
#define GameState_h

#include <stdio.h>
#include "Board.h"

class GameState{
    
public:
    
private:
    Board currentBoard;
    int costSoFar;//Number of moves taken from initial state to current board.
    int estimatedCost; // our estimated cost to reach solution
    int priorit; //costSoFar + estimatedcost
    char history;//string of moves to currentBoard
};

#endif /* GameState_h */
