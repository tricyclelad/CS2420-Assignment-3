//
//  Game.cpp
//  Slider Puzzle
//
//  Created by Camron Blake Martinez on 9/14/15.
//  Copyright (c) 2015 Camron Blake Martinez. All rights reserved.
//

#include "Game.h"

void Game::playGiven(string givenName, int values[])
{
    bool solutionFound = false;
    gameName = givenName;
    Board gameBoard;
        gameBoard.makeBoard(values);
    Board perfectBoard;
        perfectBoard.makeBoard(0);
    Board testBoard;
    Board historyBoard;
    Queue solutionsQueue;
    
    solutionsQueue.Add(gameBoard);
  
    testBoard = solutionsQueue.Pop();
    historyBoard=testBoard;

    cout << "Original board" << endl;
    cout << testBoard.toString() << endl;
    
    while (!solutionFound)
    {
        if (testBoard == perfectBoard)
        {
            cout << testBoard.toString();
            solutionFound = true;
            cout << "Moves required: " << testBoard.numberOfMoves << endl;
            cout << "Added to queue: " << solutionsQueue.AddedToQueue() << endl;
            cout << "Removed from queue: " << solutionsQueue.RemovedQueue() << endl;
            break;
        }
        else
        {
            testBoard.showMe("U");
            if (testBoard == historyBoard){}
                else
                {
                testBoard.increaseMoves();
                solutionsQueue.Add(testBoard);
                testBoard=historyBoard;
                    
                }
           
            testBoard.showMe("R");
            if (testBoard == historyBoard){}
            else
            {
                testBoard.increaseMoves();
                solutionsQueue.Add(testBoard);
                
                testBoard=historyBoard;
            }
            
            testBoard.showMe("D");
            if (testBoard == historyBoard){}
            else
            {
                testBoard.increaseMoves();
                solutionsQueue.Add(testBoard);
                
                testBoard=historyBoard;
            }
            
            testBoard.showMe("L");
            if (testBoard == historyBoard){}
            else
            {
                testBoard.increaseMoves();
                solutionsQueue.Add(testBoard);
                
                testBoard=historyBoard;
            }
           }
        
        testBoard = solutionsQueue.Pop();
        historyBoard = testBoard;
    }
}

void Game::playRandom(string givenName, int jumbleNumber)
{
    gameName = givenName;
    
    Board gameBoard;
    gameBoard.makeBoard(jumbleNumber);
    
}