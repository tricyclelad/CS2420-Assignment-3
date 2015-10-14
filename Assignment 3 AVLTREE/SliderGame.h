//
//  SliderGame.h
//  Assignment 3 AVLTREE
//
//  Created by Camron Blake Martinez on 10/12/15.
//  Copyright © 2015 Camron Blake Martinez. All rights reserved.
//

#ifndef SliderGame_h
#define SliderGame_h

#include <stdio.h>
#include <iostream>
#include "BruteForceSolve.h"
#include "aStarSolve.h"
#include "Board.h"
#include <string>
class SliderGame
{

public:
    SliderGame()
    {
        ;
    }
    void playGiven(string game, int array[])
    {
        cout << "BRUTE FORCE METHOD" << endl;
        cout << "-----------------------------------" << endl;
        cout << game << endl;
        BruteForceSolve brute(game, array);
        cout << endl;
        cout << "Star SOLVE METHOD" << endl;
        cout << "-----------------------------------" << endl;
        cout << game << endl;
        aStarSolve star(game,array);
    }
private:
    
};
#endif /* SliderGame_h */
