//
//  GameState.h
//  Assignment 3 AVLTREE
//
//  Created by Camron Blake Martinez on 10/12/15.
//  Copyright © 2015 Camron Blake Martinez. All rights reserved.
//

#ifndef GameState_h
#define GameState_h


#include "Board.h"      // Dimension of board
#include <sstream>
class GameState{
//HINT:   The class you use as Comparable must have overloaded operators for > == and <.
public:
    GameState(const Board & b, int cost = 0, char history='_');
    GameState(const GameState &rhs);//copy Constructor
    
    void update();
    int getEstimatedCost() const{return estimatedCost;}
    int getCostSoFar() const{return costSoFar;}
    int getPriority() const{return (priority);}
    int costSoFar = 0;
    char getHistory() const{return history;}
    bool operator==( GameState &gs);
//    bool operator!=(GameState &gs);
    
    friend bool operator <(const GameState& gs1, const GameState& gs2) {
        return gs1.getPriority() < gs2.getPriority();
    }
    
    friend bool operator >(const GameState& gs1, const GameState& gs2) {
        return gs1.getPriority() > gs2.getPriority();
    }
    
    friend ostream&  operator<<(ostream& ss, const GameState& gs) {
        ss << gs.toString() << endl;
        return ss;
    }
    
    GameState();
    ~GameState();
    string toString()const;
    Board board;
private:
    void setPriority();
    void setEstimatedCost();
    
    ;//Number of moves taken from initial state to current board.
    int estimatedCost = 0; // our estimated cost to reach solution using the Hamming distance method
    int priority = 0; //costSoFar + estimatedcost
    char history = ' ';//string of moves to currentBoard
    int GameStateNum = 0;
};




#endif /* GameState_h */
