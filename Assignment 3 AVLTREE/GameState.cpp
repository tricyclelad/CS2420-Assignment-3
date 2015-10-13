//
//  GameState.cpp
//  Assignment 3 AVLTREE
//
//  Created by Camron Blake Martinez on 10/12/15.
//  Copyright © 2015 Camron Blake Martinez. All rights reserved.
//

#include "GameState.h"
void GameState::update()
{
    setEstimatedCost();
    setPriority();
}
GameState::GameState(const Board & b, int cost, char history)
{
    board = b;
    setEstimatedCost();
    costSoFar=cost;
    setPriority();
}
GameState::GameState()
{
    Board b;
    board = b;
    setEstimatedCost();
    costSoFar=0;
    setPriority();
    
}
GameState::GameState(const GameState &rhs)//copy Constructor
{
    this->board = rhs.board;
    this->priority = rhs.priority;
    this->costSoFar = rhs.costSoFar;
    this->estimatedCost = rhs.estimatedCost;
    
}

string GameState::toString() const
{
    stringstream ss;
    ss<<"Board:\n"<< board.toString() << endl;
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
    estimatedCost=0;
    int array[Board::SIZE*Board::SIZE]={1,2,3,4,5,6,7,8,0};
    Board perfect;
    perfect.makeBoard(array);
    
    for (int i =0; i < board.SIZE; i++)
        for (int j = 0; j < board.SIZE; j++)
            if (board.board[i][j]!=perfect.board[i][j])
                estimatedCost++;
}

GameState::~GameState(){}

bool GameState::operator==( GameState &rhs)
{
    if (this->priority==rhs.priority && board == rhs.board)
        return true;
    
    return false;

    
}


//bool GameState::operator!=( GameState &rhs)
//{
//    return this->priority!=rhs.priority;
//}
