// SliderProject.cpp : Defines the entry point for the console application.


#include "BruteForceSolve.h"
#include "GameState.h"
#include "avlTree.h"
#include "aStarSolve.h"
#include <iostream>
#include <time.h>
using namespace std;

const int SIZE = 3;       // Dimension of board
int main()
{
//    AvlTree<int> *mytree = new AvlTree<int>();
//    cout << "Dear Grader, my toString function prints the tree horizontally... Tilt your head a little" << endl;
//    cout << "Add: 1 3 5 7 9 11 2 4 8  (now print tree)" << endl;
//    mytree->insert(1);
//    mytree->insert(3);
//    mytree->insert(5);
//    mytree->insert(7);
//    mytree->insert(9);
//    mytree->insert(11);
//    mytree->insert(2);
//    mytree->insert(4);
//    mytree->insert(8);
//    
//    mytree->toString();//Prints the tree HORIZONTALLY
//    cout << "------------------------------------" << endl;
//
//    cout << "Remove 7 9(now print tree)" << endl;
//    mytree->remove(7);
//    mytree->remove(9);
//    mytree->toString();
//    cout << "------------------------------------" << endl;
//    
//    cout <<"Add 50 30 15 18 (now print tree)" << endl;
//    mytree->insert(50);
//    mytree->insert(30);
//    mytree->insert(15);
//    mytree->insert(18);
//    mytree->toString();
//    cout << "------------------------------------" << endl;
//
//    cout <<"Remove Min (now print tree)" << endl;
//    mytree->removeMin();
//    mytree->toString();
//    cout << "------------------------------------" << endl;
//    
//    cout <<"Remove Min (now print tree)" << endl;
//    mytree->removeMin();
//    mytree->toString();
//    cout << "------------------------------------" << endl;
//    
//    cout <<"Remove Min (now print tree)" << endl;
//    mytree->removeMin();
//    mytree->toString();
//    cout << "------------------------------------" << endl;
//    
//    cout <<"Add 17(now print tree)" << endl;
//    mytree->insert(17);
//    mytree->toString();
//    cout << "------------------------------------" << endl;

//    Board fish;
//    fish.makeBoard(10);
//    cout<< fish.toString() << endl;
//    Board tail;
//    tail.makeBoard(10);
//    cout << tail.toString() << endl;
//    
//    fish = tail;
//    
//    cout << fish.toString() << endl;
//    
//    GameState num1(fish);
//    
//    cout << num1.getEstimatedCost();
//    
//    cout << num1.toString();
   // ----------------------------------
    
//    srand((int)time(NULL));
//    bool playAgain = true;
//    char response;
//    BruteForceSolve g;
//    int Game0[SIZE*SIZE] = { 1, 2, 3, 7, 4, 0, 6, 5, 8 };
//    g.playGiven("Game0", Game0);
//    cout << "Click any key to continue\n";
//    cin >> response;
//    int Game1[SIZE*SIZE] = { 1, 3, 2, 4, 5, 6, 8, 7, 0 };
//    g.playGiven("Game 1", Game1);
//    cout << "Click any key to continue\n";
//    cin >> response;
//    int Game2[SIZE*SIZE] = { 1, 3, 8, 6, 2, 0, 5, 4, 7 };
//    g.playGiven("Game 2", Game2);
//    cout << "Click any key to continue\n";
//    cin >> response;
//    int Game3[SIZE*SIZE] = { 4, 0, 1, 3, 5, 2, 6, 8, 7 };
//    g.playGiven("Game 3", Game3);
//    cout << "Click any key to continue\n";
//    cin >> response;
//    int Game4[SIZE*SIZE] = { 7, 6, 4, 0, 8, 1, 2, 3, 5 };  // Warning slow to solve
//    //g.playGiven("Game 4", Game4);
//    cout << "Click any key to continue\n";
//    cin >> response;
//    int Game5[SIZE*SIZE] = { 1, 2, 3, 4, 5, 6, 8, 7, 0 };   // Warning unsolvable
//    g.playGiven("Game 5", Game5);
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
    
    srand((int)time(NULL));
        bool playAgain = true;
        char response;
        aStarSolve g;
        int Game0[SIZE*SIZE] = { 1, 2, 3, 7, 4, 0, 6, 5, 8 };
        g.playGiven("Game0", Game0);
        cout << "Click any key to continue\n";
        cin >> response;
        int Game1[SIZE*SIZE] = { 1, 3, 2, 4, 5, 6, 8, 7, 0 };
        g.playGiven("Game 1", Game1);
        cout << "Click any key to continue\n";
        cin >> response;
        int Game2[SIZE*SIZE] = { 1, 3, 8, 6, 2, 0, 5, 4, 7 };
        g.playGiven("Game 2", Game2);
        cout << "Click any key to continue\n";
        cin >> response;
        int Game3[SIZE*SIZE] = { 4, 0, 1, 3, 5, 2, 6, 8, 7 };
        g.playGiven("Game 3", Game3);
        cout << "Click any key to continue\n";
        cin >> response;
        int Game4[SIZE*SIZE] = { 7, 6, 4, 0, 8, 1, 2, 3, 5 };  // Warning slow to solve
        //g.playGiven("Game 4", Game4);
        cout << "Click any key to continue\n";
        cin >> response;
        int Game5[SIZE*SIZE] = { 1, 2, 3, 4, 5, 6, 8, 7, 0 };   // Warning unsolvable
        g.playGiven("Game 5", Game5);
        cout << "Click any key to continue\n";
        cin >> response;;
    
//        const int JUMBLECT = 4;  // how much jumbling to to in random board
//        while (playAgain)
//        {
//            g.playRandom("Random Board", JUMBLECT);
//            cout << "Play Again?  Answer Y for yes\n";
//            cin >> response;
//            playAgain = toupper(response) == 'Y';
//        }
    
    return 0;
}