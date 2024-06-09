# Lucky Percentage Program

## Description
This C++ program determines your "lucky percentage" based on a simple game of chance. You will have five opportunities to guess a number between 1 and 5. The program will randomly generate a number in the same range, and if your guess matches the random number, you win. At the end of five tries, the program will calculate your lucky percentage based on the number of times you guessed correctly.

## How to Use
1. Run the program.
2. You will be prompted to enter a number in the interval [0, 5].
3. Enter your guess and press Enter.
4. The program will display the randomly generated number and inform you if you won or lost that round.
5. Repeat steps 2-4 for a total of five rounds.
6. After five rounds, the program will display your lucky percentage based on the number of correct guesses.

## Lucky Percentage Calculation
- 0 correct guesses: "You are an unlucky person"
- 1 correct guess: "Your lucky percent is 33%"
- 2 correct guesses: "Your lucky percent is 66%"
- 3 or more correct guesses: "Your lucky percent is 100%"

## Requirements
- A C++ compiler
- Windows operating system (for `system("COLOR")` commands)

## Note
The `system("COLOR")` commands are used to change the text color in the console. If you are using a non-Windows operating system or a different console that does not support these commands, you may need to remove or modify these lines.

## Compilation and Execution
To compile the program, use a C++ compiler such as `g++`:
```bash
g++ -o lucky_percentage lucky_percentage.cpp
