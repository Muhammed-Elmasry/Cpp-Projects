# Snake Game

## Description
This C++ program is a simple text-based Snake game. The player controls the snake to move around the board, trying to eat fruit represented by an asterisk (*). Each time the snake eats a fruit, its score increases. The game ends if the snake collides with the walls of the board.

## Features
1. **Start Game**: Begins the game where the player controls the snake to eat fruits.
2. **Score Display**: Displays the current score based on the number of fruits eaten.
3. **Game Over**: Ends the game when the snake collides with the walls of the board.

## Controls
- **W**: Move up
- **A**: Move left
- **S**: Move down
- **D**: Move right
- **X**: Quit the game

## Requirements
- A C++ compiler
- Windows operating system (for `_kbhit()` and `_getch()` functions, `system("cls")`, and `SetConsoleTextAttribute`)

## Compilation and Execution
To compile the program, use a C++ compiler such as `g++`:
```bash
g++ -o snake_game snake_game.cpp
