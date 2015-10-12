// SliderProject.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <time.h>
#include "Game.h" 
#include "avlTree.h"
using namespace std;

const int SIZE = 3;       // Dimension of board
int main()
{
//    srand((int)time(NULL));
//    bool playAgain = true;
//    char response;
//    Game g;
//    int game0[SIZE*SIZE] = { 1, 2, 3, 7, 4, 0, 6, 5, 8 };
//    g.playGiven("game 0", game0);
//    cout << "Click any key to continue\n";
//    cin >> response;
//    int game1[SIZE*SIZE] = { 1, 3, 2, 4, 5, 6, 8, 7, 0 };
//    g.playGiven("game 1", game1);
//    cout << "Click any key to continue\n";
//    cin >> response;
//    int game2[SIZE*SIZE] = { 1, 3, 8, 6, 2, 0, 5, 4, 7 };
//    g.playGiven("game 2", game2);
//    cout << "Click any key to continue\n";
//    cin >> response;
//    int game3[SIZE*SIZE] = { 4, 0, 1, 3, 5, 2, 6, 8, 7 };
//    g.playGiven("game 3", game3);
//    cout << "Click any key to continue\n";
//    cin >> response;
//    int game4[SIZE*SIZE] = { 7, 6, 4, 0, 8, 1, 2, 3, 5 };  // Warning slow to solve
//    //g.playGiven("game 4", game4);
//    cout << "Click any key to continue\n";
//    cin >> response;
//    int game5[SIZE*SIZE] = { 1, 2, 3, 4, 5, 6, 8, 7, 0 };   // Warning unsolvable
//    g.playGiven("game 5", game5);
//    cout << "Click any key to continue\n";
//    cin >> response;;
//    
//    const int JUMBLECT = 4;  // how much jumbling to to in random board
//    while (playAgain)
//    {
//        g.playRandom("Random Board", JUMBLECT);
//        cout << "Play Again?  Answer Y for yes\n";
//        cin >> response;
//        playAgain = toupper(response) == 'Y';
//    }
    
    AvlTree<int> *mytree = new AvlTree<int>();
    mytree->insert(2);
    mytree->insert(1);
    mytree->insert(3);
    mytree->insert(7);
    mytree->insert(10);
    mytree->insert(2);
    mytree->insert(5);
    mytree->insert(8);
    mytree->insert(6);
    mytree->insert(4);
    mytree->toString(mytree->root);
}