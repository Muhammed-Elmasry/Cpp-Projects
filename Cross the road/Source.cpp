#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

// Use the standard namespace to avoid prefixing standard library names with std::
using namespace std;

// Global variables to control game state and dimensions
bool gameOver;
const int width = 40;
const int height = 7;
int x=20, y=6, fruitX[10], fruitY[10];

// Function to initialize game state
void Setup() {
	gameOver = false;
}

// Function to render the game map
void Map() {

	system("cls"); // Clear the console
	cout << "\t\t  FINISH\n";

	// Print the top border of the game map
	for (int i = 0; i <= width; i++) {
		cout << "_";
	}
    // Loop through each position on the map
	for (int i=0;i<height;i++) {
		for (int j = 0; j <= width; j++) {
			    // Draw the player character
				if (i == y && j == x) {
					if(y==1) gameOver = true; // End the game if the player reaches the top row
					cout << "$";
				}
				// Draw the obstacles
				if (i == fruitY[1] && j == fruitX[1]) {
					cout << "#";
				}
				if (i == fruitY[2] && j == fruitX[2]) {
					cout << "#";
				}
				if (i == fruitY[3] && j == fruitX[3]) {
					cout << "#";
				}
				if (i == fruitY[4] && j == fruitX[4]) {
					cout << "#";
				}
				if (i == fruitY[5] && j == fruitX[5]) {
					cout << "#";
				}
				if (i == fruitY[6] && j == fruitX[6]) {
					cout << "#";
				}
				if (i == fruitY[7] && j == fruitX[7]) {
					cout << "#";
				}
				if (i == fruitY[8] && j == fruitX[8]) {
					cout << "#";
				}
				else
					cout << " ";
		}
		cout << endl;
	}

	for (int i = 0; i <= width; i++) {
		cout << "_";
	}
	cout << "\n\t\t  START\n";
}
// Function to handle user input
void Input() {
	if (_kbhit()) {
		switch (_getch())
		{
		case 'a': // Move left
			x--;
			break;
		case 'd': // Move right
			x++;
			break; 
		case 'w': // Move up
			y--;
			break;
		case 's': // Move down
			y++;
			break;
		case 'x': // End the game
			gameOver = true;
			break;
		}
	}
}
// Function to update game logic
void Logic() {
	// End the game if the player moves out of bounds
	if (x > width || x<0 || y>height || y < 0)
		gameOver = true;
	fruitX[1]++;
	fruitX[2]++;
	fruitX[3]++;
	fruitX[4]++;
	fruitX[5]++;
	fruitX[6]++;
	fruitX[7]++;
	fruitX[8]++;
	if (x == fruitX[1] && y == fruitY[1]) {
		gameOver = true;
	}
	if (x == fruitX[2] && y == fruitY[2]) {
		gameOver = true;
	}
	if (x == fruitX[3] && y == fruitY[3]) {
		gameOver = true;
	}
	if (x == fruitX[4] && y == fruitY[4]) {
		gameOver = true;
	}
	if (x == fruitX[5] && y == fruitY[5]) {
		gameOver = true;
	}
	if (x == fruitX[6] && y == fruitY[6]) {
		gameOver = true;
	}
	if (x == fruitX[7] && y == fruitY[7]) {
		gameOver = true;
	}
	if (x == fruitX[8] && y == fruitY[8]) {
		gameOver = true;
	}

	// Reset obstacle positions when they reach the right edge of the map
	if (fruitX[1] == 39) {
		fruitX[1] = 1;
		fruitY[1] = 5;}
	if (fruitX[2] == 39) {
		fruitX[2] = 1;
		fruitY[2] = 5;}
	if (fruitX[3] == 39) {
		fruitX[3] = 1;
		fruitY[3] = 4;}
    if (fruitX[4] == 39) {
		fruitX[4] = 1;
		fruitY[4] = 4;}
	if (fruitX[5] == 39) {
		fruitX[5] = 1;
		fruitY[5] = 3;}
	if (fruitX[6] == 39) {
		fruitX[6] = 1;
		fruitY[6] = 3;}
	if (fruitX[7] == 39) {
		fruitX[7] = 1;
		fruitY[7] = 2;}
	if (fruitX[8] == 39) {
		fruitX[8] = 1;
		fruitY[8] = 2;}
}
// Main function to run the game
int main() {
	// Initialize obstacle positions
	fruitX[1] = 1;
	fruitY[1] = 5;
	fruitX[2] = 3;
	fruitY[2] = 5;

	fruitX[3] = 11;
	fruitY[3] = 4;
	fruitX[4] = 18;
	fruitY[4] = 4;

	fruitX[5] = 25;
	fruitY[5] = 3;
	fruitX[6] = 32;
	fruitY[6] = 3;

	fruitX[7] = 1;
	fruitY[7] = 2;
	fruitX[8] = 25;
	fruitY[8] = 2;
	Setup(); // Initialize the game state
	
	// Game loop
	while (!gameOver) {
		Map();
		Input();
		Logic();
		
	}

	cout << endl;
	system("pause"); // Pause the console to display the final game state
	return 0;
}