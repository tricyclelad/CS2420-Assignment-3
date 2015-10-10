// SliderProject.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <time.h>
#include "Game.h" // You need to create your own game class
using namespace std;

const int SIZE = 3;       // Dimension of board
int main()
{
	srand((int)time(NULL));
	bool playAgain = true;
	char response;
	Game one, two, three, four, five, random;
    
	int game0[SIZE*SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 0 };
	one.playGiven("game 0", game0);
	cout << "Click any key to continue\n";
	cin >> response;
	int game2[SIZE*SIZE] = { 1, 2, 3, 4, 5, 6, 7, 0, 8 };
	two.playGiven("game 2", game2);
	cout << "Click any key to continue\n";
	cin >> response;
    int game3[SIZE*SIZE] = { 1, 2, 3, 7, 4, 0, 6, 5, 8,};
	three.playGiven("game 3", game3);
	cout << "Click any key to continue\n";
	cin >> response;
	//int game4[SIZE*SIZE] = { 7, 6, 4, 0, 8, 1, 2, 3, 5 };  // Warning slow to solve
	//four.playGiven("game 4", game4);
	cout << "Click any key to continue\n";
	cin >> response;
	int game5[SIZE*SIZE] = { 1, 2, 3, 4, 5, 6, 8, 7, 0 };   // Warning unsolvable
	five.playGiven("game 5", game5);
	cout << "Click any key to continue\n";
	cin >> response;;

	const int JUMBLECT = 4;  // how much jumbling to to in random board
	while (playAgain)
	{
		random.playRandom("Random Board", JUMBLECT);
		cout << "Play Again?  Answer Y for yes\n";
		cin >> response;
		playAgain = toupper(response) == 'Y';
	}

}


