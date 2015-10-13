//
//  BruteForceSolve.h
//  Slider Puzzle
//
//  Created by Camron Blake Martinez on 9/14/15.
//  Copyright (c) 2015 Camron Blake Martinez. All rights reserved.
//

#ifndef BruteForceSolve_H
#define BruteForceSolve_H
#include "Queue.h"
#include "Board.h"
#include <string>
#include <iostream>
#include <map>
#include <stack>

class BruteForceSolve {
public:
    Board begin;
    Board U;
    Board D;
    Board L;
    Board R;
    Queue Q;
    BruteForceSolve(){
        ;
    }
    void playGiven(string name, int array[]){
        int boardCount = 0;
        map<int,Board> boards; //
        stack<Board> stack;
        
        begin.makeBoard(array);//Set up the first board given the array in the parameter
        
        begin.history = ' ';//First board has no move history, so we leave it blank
        
        begin.parent = -1;
        
        begin.boardNumber = boardCount;//We number each board as we go, the first one is board 0
        
        Q.Add(begin);//Here we add beginning board to the queue
        
        
        while(!Q.isEmpty()){
            Board initial = Q.Pop();
            //First we remove a board from the queue to evaluate it
            
            boards[initial.boardNumber] = initial;
            //We add the board to our map and give it the key of the current board number
            
            
            //          cout << "BOARD PUT INTO MAP... at " << initial.boardNumber << endl;
            //			cout << boards[initial.boardNumber].toString() << endl;
            //			cout << "board initial.boardNumber value :  " << boards[initial.boardNumber].boardNumber << endl;
            
            //          cout << "INITIAL IS: " << endl << initial.toString() << endl;
            //			cout << "INITIAL history IS: " << initial.history << endl;
            //			cout << "INITIAL boardNumberBER IS: " << initial.boardNumber << endl;
            //			cout << "INITIAL PARENT IS: " << initial.parent << endl;
            
            if(initial.won()){
                int moves = 0;
                // 				cout << "WINNER PARENT: " << boards[initial.parent].toString() << endl;
                cout << "Original Board" << endl;
                cout << begin.toString() << endl;
                cout << "Show Me" << endl;
                stack.push(initial);
                while(boards[initial.parent]!=begin){
                    //						cout << "pushing boards to stack..." << endl;
                    // 						cout << "begin: " << begin.toString() << endl;
                    // 						cout << "initial parent: " << boards[initial.parent].toString()<< endl;
                    stack.push(boards[initial.parent]);
                    initial = boards[initial.parent];
                    moves++;
                }
                stack.push(begin);
                moves++;
                while(!stack.empty()){
                    // 					cout << "reading boards from stack" << endl;
                    Board b = stack.top();
                    stack.pop();
                    cout << b.history << "==>" << endl;
                    cout << b.toString();
                }
                cout << "=>Show Me Moves Required: " << moves << endl;
                cout << "Added to Queue=" << Q.AddedToQueue()<< " Removed From Queue= " << Q.RemovedFromQueue() << " CURR SIZE= " << Q.Size() << endl;
                
                Q.clear();
                boards.clear();
                
                break;
            }else{
                //				cout << "see permutations of board..." << endl;
                //				cin >> k;
                Board U(initial);
                Board D(initial);
                Board L(initial);
                Board R(initial);
                if(U.makeMove('U',initial.history)!=' '){
                    //					cout << "U perm: " << endl << U.toString() << endl;
                    U.history = 'U';
                    U.parent = initial.boardNumber;
                    U.boardNumber = ++boardCount;
                    //					cout << boardCount << endl;
                    Q.Add(U);
                }
                if(D.makeMove('D',initial.history)!=' '){
                    //					cout << "D perm: " << endl << D.toString() << endl;
                    D.history = 'D';
                    D.parent = initial.boardNumber;
                    D.boardNumber = ++boardCount;
                    //					cout << boardCount << endl;
                    Q.Add(D);
                }
                if(L.makeMove('L',initial.history)!=' '){
                    //					cout << "L perm: " << endl << L.toString() << endl;
                    L.history = 'L';
                    L.parent = initial.boardNumber;
                    L.boardNumber = ++boardCount;
                    //					cout << boardCount << endl;
                    Q.Add(L);

                }
                if(R.makeMove('R',initial.history)!=' '){
                    //					cout << "R perm: " << endl << R.toString() << endl;
                    R.history = 'R';
                    R.parent = initial.boardNumber;
                    R.boardNumber = ++boardCount;
                    //					cout << boardCount << endl;
                    Q.Add(R);

                }
            }
        }
    }
    void playRandom(string name, int jumbleCT){
        cout << name << endl;
    }
};

#endif /* defined(BruteForceSolve_H) */
