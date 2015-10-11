//
//  Queue.cpp
//  Slider Puzzle
//
//  Created by Camron Blake Martinez on 9/14/15.
//  Copyright (c) 2015 Camron Blake Martinez. All rights reserved.
//

#include "Queue.h"

Node::Node()
{
    next = NULL ;
}

Node::Node(Board newBoard)
{
    currentBoard = newBoard;
    next = NULL ;
}

Queue::Queue()
{
    front = rear = NULL ;
    sizeOfQueue = 0 ;
}

Queue::~Queue()
{
    while (!isEmpty()) {
        Pop();
    }
}

void Queue::Add(Board& pushBoard)
{
    if (isEmpty())
    {
        front = rear = new Node(pushBoard) ;
        
    }
    else
    {
        Node *ptr = rear->next = new Node(pushBoard) ;
        rear = ptr ;
    }
    sizeOfQueue++ ;
    addedToQueue++;
    //cout << pushBoard.toString();
}

Board Queue::Pop ()
{
    if (isEmpty())
        throw QueueEmptyException() ;
    
    sizeOfQueue-- ;
    removedFromQueue++;
    Board popBoard = front->currentBoard ;      // find information in the to-be-deleted node
    Node *ptr = front->next ;  // find the new front node
    delete front ;                 // delete the current front node
    front = ptr ;                  // make front pointer points to the current top
    
    return popBoard ;
}

bool Queue::isEmpty()
{
    if (sizeOfQueue == 0)
        return true ;
    else
        return false ;
}

void Queue::clear(){
    if(front == NULL){
        cout << "nothing to clear..."<< endl;
        return;
    }
    Node *n = front;
    while(n!=NULL){
        //		cout << n->value << endl;
        Node*temp=n;
        delete(n);
        n = temp->next;
    }
    front = NULL;
    rear = NULL;
    delete(n);
    sizeOfQueue=0;
    addedToQueue=0;
    removedFromQueue=0;
    
    //	cout << "clearing doublyLinkedList..." << endl;
}

