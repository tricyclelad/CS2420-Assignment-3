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
   
    AvlTree<GameState> Tree;
    
    //    Board getPriorityBoard()
    //    {
    //
    //    }
    
    aStarSolve(){
        ;
    }
    aStarSolve(string name, int array[])
    {
        this->playGiven(name, array);
    }
    void playGiven(string name, int array[]){
        Board insert;
        insert.makeBoard(array);    //Array IS inserted to the board
        
        GameState begin(insert);    //The first gameState is correct
        
    int boardCount = 0;
    map<int,GameState> gameStates; //
    stack<Board> stack;
    
   
    
    begin.board.history = ' ';//First board has no move history, so we leave it blank
    
    begin.board.parent = -1;
    
    begin.board.boardNumber = boardCount;//We number each board as we go, the first one is board 0
    
    Tree.insert(begin);//Here we add beginning gameState to the queue
    
    
    
    while(!Tree.isEmpty()){
        GameState initial = Tree.removeMin();
        //First we remove a board from the priority queue to evaluate it
        
        gameStates[initial.board.boardNumber] = initial;
        //            //We add the board to our map and give it the key of the current board number
        
        //
        //            //          cout << "BOARD PUT INTO MAP... at " << initial.boardNumber << endl;
        //            //			cout << boards[initial.boardNumber].toString() << endl;
        //            //			cout << "board initial.boardNumber value :  " << boards[initial.boardNumber].boardNumber << endl;
        //
        //            //          cout << "INITIAL IS: " << endl << initial.toString() << endl;
        //            //			cout << "INITIAL history IS: " << initial.history << endl;
        //            //			cout << "INITIAL boardNumberBER IS: " << initial.boardNumber << endl;
        //            //			cout << "INITIAL PARENT IS: " << initial.parent << endl;
        //
                    if(initial.board.won()){
                        
                        int moves = 0;
                        //cout << "WINNER PARENT:\n" << gameStates[initial.board.parent].board.toString() << endl;
                        cout << "Original Board" << endl;
                        cout << begin.board.toString() << endl;
                        cout << "Show Me" << endl;
                        stack.push(initial.board);
                        while(gameStates[initial.board.parent].board!=begin.board){
                            						//cout << "pushing boards to stack..." << endl;
                             						//cout << "begin: \n" << begin.board.toString() << endl;
                             						//cout << "initial parent: \n" << gameStates[initial.board.parent].board.toString()<< endl;
                            stack.push(gameStates[initial.board.parent].board);
                            initial = gameStates[initial.board.parent];
                            moves++;
                        }
                        stack.push(begin.board);
                        moves++;
                        while(!stack.empty()){
                            // 					cout << "reading boards from stack" << endl;
                            GameState b = stack.top();
                            stack.pop();
                            cout << b.board.history << "==>" << endl;
                            cout << b.board.toString();
                        }
                        cout << "=>Show Me Moves Required: " << moves << endl;
                        cout << "Added to Priority Queue=" << Tree.getNodesAdded()<< " Removed From Queue= " << Tree.getNodesRemoved() << " CURR SIZE= " << Tree.getTotalNodes()<< endl;
        
                        Tree.makeEmpty();
                        gameStates.clear();
        
                        break;
                    }else{
                        //				cout << "see permutations of board..." << endl;
                        //				cin >> k;
                        GameState U(initial);
                        GameState D(initial);
                        GameState L(initial);
                        GameState R(initial);
                        if(U.board.makeMove('U',initial.board.history)!=' '){
                            //					cout << "U perm: " << endl << U.toString() << endl;
                            U.board.history = 'U';
                            U.costSoFar++;
                            U.board.parent = initial.board.boardNumber;
                            U.board.boardNumber = ++boardCount;
                            U.update();
                            //					cout << boardCount << endl;
                            Tree.insert(U);
                        }
                        if(D.board.makeMove('D',initial.board.history)!=' '){
                            //					cout << "D perm: " << endl << D.toString() << endl;
                            D.board.history = 'D';
                            D.costSoFar++;
                            D.board.parent = initial.board.boardNumber;
                            D.board.boardNumber = ++boardCount;
                            D.update();
                            //					cout << boardCount << endl;
                            Tree.insert(D);
                        }
                        if(L.board.makeMove('L',initial.board.history)!=' '){
                            //					cout << "L perm: " << endl << L.toString() << endl;
                            L.board.history = 'L';
                            L.costSoFar++;
                            L.board.parent = initial.board.boardNumber;
                            L.board.boardNumber = ++boardCount;
                            L.update();
                            //					cout << boardCount << endl;
                            Tree.insert(L);
        
                        }
                        if(R.board.makeMove('R',initial.board.history)!=' '){
                            //					cout << "R perm: " << endl << R.toString() << endl;
                            R.board.history = 'R';
                            R.costSoFar++;
                            R.board.parent = initial.board.boardNumber;
                            R.board.boardNumber = ++boardCount;
                            R.update();
                            //					cout << boardCount << endl;
                            Tree.insert(R);
        
                        }
                    }
                }
            }
            void playRandom(string name, int jumbleCT){
                cout << name << endl;
            }
    };





#endif /* aStarSolve_h */
