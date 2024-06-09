#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
	// Set the console text color to green with white background
	system("COLOR 2F");
	
    	// Variables to store the user's number and the random number
		int x, n;

		// Introduce the purpose of the program
		cout << " This program can tell you about your lucky percentage in life " << endl;
		int i = 1;
		int k = 0;

		    // Loop to give the user 5 chances
			while (i <= 5) {
				cout << "Please Enter number in interval [0,5]" << endl;
				cout << "My number = ";
				cin >> n;
				srand(time(0));
				// Generate a random number between 1 and 5
				x = 1 + (rand() % 5);
				cout << "Random number was = " << x << endl;
        		
				// Check if the user's number matches the random number
				if (x == n) {
					cout << "Congratulation!!! You won :)" << endl;
					k = k + 1;
				}
				else cout << "You lost :(" << endl;
				cout << endl;
				i++;
			}
    		
			// Change the console text color to red with white background
			system("COLOR CF");
			
		    // Determine the user's lucky percentage based on the number of wins
			if (k == 0) cout << "You are unlucky person" << endl;
			else if (k == 1) cout << "Your lucky percent is 33% " << endl;
			else if (k == 2) cout << "Your lucky persent is 66% " << endl;
			else if (k == 3) cout << "Your lucky percent is 100% " << endl;
			else if (k == 4) cout << "Your lucky percent is 100% " << endl;
			else if (k == 5) cout << "Your lucky percent is 100% " << endl;
			cout << endl;
	
	return 0;
}