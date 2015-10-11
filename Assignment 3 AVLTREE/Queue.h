//
//  Queue.h
//  Slider Puzzle
//
//  Created by Camron Blake Martinez on 9/14/15.
//  Copyright (c) 2015 Camron Blake Martinez. All rights reserved.
//

#ifndef __Slider_Puzzle__Queue__
#define __Slider_Puzzle__Queue__
#include "Board.h"
#include <stdio.h>

class Node
{
public:
    Board currentBoard;
    Node *next ;
    Node() ;
    Node(Board newBoard) ;
};

class Queue
{
private:
    Node *front, *rear ;
    int sizeOfQueue;
    int addedToQueue = 0;
    int removedFromQueue = 0;
    
public:
    Queue() ;
    ~Queue() ;
    void Add(Board& pushBoard) ;
    Board Pop() ;
    bool isEmpty() ;
    void clear();
    class QueueEmptyException {};
    int AddedToQueue(){return addedToQueue;}
    int RemovedFromQueue(){return removedFromQueue;}
    int Size(){return sizeOfQueue;}
};







#endif /* defined(__Slider_Puzzle__Queue__) */
