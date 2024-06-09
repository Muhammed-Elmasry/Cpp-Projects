# Simple Dinosaur Game

## Description
This C++ program is a simple text-based dinosaur game inspired by the popular offline game in Google Chrome. The objective is to avoid obstacles (fruits) by jumping over them. The game ends if the dinosaur (represented by '@') collides with any obstacle.

## Features
1. **Start Game**: Begins the game where the player controls the dinosaur to jump over obstacles.
2. **Score Display**: Displays the current score based on how many obstacles have been avoided.
3. **Game Over**: Ends the game when the dinosaur collides with an obstacle or moves out of bounds.

## Controls
- **Space**: Jump (the dinosaur jumps up by 3 units)
- **X**: Quit the game

## Requirements
- A C++ compiler
- Windows operating system (for `_kbhit()` and `_getch()` functions, and `system("cls")`)

## Compilation and Execution
To compile the program, use a C++ compiler such as `g++`:
```bash
g++ -o dinosaur_game dinosaur_game.cpp
