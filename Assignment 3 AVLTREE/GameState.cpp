//
//  GameState.cpp
//  Assignment 3 AVLTREE
//
//  Created by Camron Blake Martinez on 10/12/15.
//  Copyright © 2015 Camron Blake Martinez. All rights reserved.
//

#include "GameState.h"

GameState::GameState(const Board & b, int cost, char history)
{
    currentBoard = b;
    setEstimatedCost();
    costSoFar=cost;
    setPriority();
}
GameState::GameState()
{
    Board b;
    currentBoard = b;
    setEstimatedCost();
    costSoFar=0;
    setPriority();
    
}
string GameState::toString() const
{
    stringstream ss;
    ss<<"Board:\n"<< currentBoard.toString() << endl;
    ss<<"Cost so far:\n" << getCostSoFar() << endl;
    ss<<"Estimated work:\n" << getEstimatedCost() << endl;
    ss<<"Priority:\n" << getPriority() << endl;
    ss<<"History:\n" << getHistory() << endl;
    return ss.str();
}
void GameState::setPriority()
{
    priority=getEstimatedCost()+getCostSoFar();
}
void GameState::setEstimatedCost()
{
    int array[Board::SIZE*Board::SIZE]={1,2,3,4,5,6,7,8,0};
    Board perfect;
    perfect.makeBoard(array);
    
    for (int i =0; i < currentBoard.SIZE; i++)
        for (int j = 0; j < currentBoard.SIZE; j++)
            if (currentBoard.board[i][j]!=perfect.board[i][j])
                estimatedCost++;
}

GameState::~GameState(){}

bool GameState::operator==(GameState &rhs)
{
    return this->priority==rhs.priority;
}
