//
//  aStarSolve.h
//  Assignment 3 AVLTREE
//
//  Created by Camron Blake Martinez on 10/12/15.
//  Copyright © 2015 Camron Blake Martinez. All rights reserved.
//

#ifndef aStarSolve_h
#define aStarSolve_h

#include "avlTree.h"
#include "Board.h"
#include "GameState.h"
#include <string>
#include <iostream>
#include <map>
#include <stack>

class aStarSolve {
public:
    Board begin;
    Board U;
    Board D;
    Board L;
    Board R;
    AvlTree<GameState> Tree;
    
    //    Board getPriorityBoard()
    //    {
    //
    //    }
    
    aStarSolve(){
        ;
    }
    void playGiven(string name, int array[]);

};

        
#endif /* aStarSolve_h */
