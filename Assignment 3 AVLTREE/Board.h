#ifndef BOARD_H
#define BOARD_H

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;


class Board {
public:
	static const int SIZE = 3;
	
    int board[SIZE][SIZE];  // Values of board
	
    Board(const Board & b);  //Create board from another board
	
    void makeBoard(int jumbleCt = 0);  //Starting from a perfect board, do jumbleCt moves to alter it
	
    void makeBoard(int values[]); // Create a board from a set of values specified in row major order
	
    string toString() const;  //return a string which represents the contents of the board
	
    bool operator==(Board &b);   //Return true if two boards are equal
    
    bool operator!=(Board &b);   //Return true if two boards are equal
    
    Board& operator= (const Board &rhs);
    
    
    int blankRow;   // Row location of blank
	int blankCol;   // Column location of blank
	
    void showMe(string moves);
    
    Board(){ makeBoard(); };
	
    bool slideUp();  // If possible, slides a tile up into the blank position.  Returns success of operation.
	bool slideDown(); // If possible, slides a tile down into the blank position.  Returns success of operation.
	bool slideLeft(); // If possible, slides a tile left into the blank position.  Returns success of operation.
	bool slideRight(); // If possible, slides a tile right into the blank position.  Returns success of operation.
	
    void jumble(int ct);  //Do jumble moves to alter board
	
    char makeMove(char m, char lastMove);  //Makes move indicated by m, returns character name of move if done, will not undo previous lastMove
    
    bool won();
    int boardNumber;
    int parent;
    char history;
    
    
};
#endif
