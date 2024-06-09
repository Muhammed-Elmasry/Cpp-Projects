# Phonebook Application

## Description
This C++ program is a simple phonebook application that allows users to:
- Display names and phone numbers
- Add new names and phone numbers
- Modify existing phone numbers

The data is stored in a file called `phonebook.txt`.

## Features
1. **Add a Name and Phone Number**: Allows users to enter a new name and phone number, which is then appended to the phonebook.
2. **Change a Phone Number**: Enables users to update the phone number associated with an existing name.
3. **Find a Name**: Searches for a name in the phonebook and displays the matching entries (feature to be implemented).
4. **List All Names**: Displays all names and phone numbers currently stored in the phonebook.

## Usage
1. **Run the Program**: Execute the compiled program to start the phonebook application.
2. **Main Menu Options**:
    - **A**: Add a new name and phone number.
    - **C**: Change the phone number for an existing name.
    - **F**: Find a name in the phonebook (feature to be implemented).
    - **L**: List all names and phone numbers.
    - **Q**: Quit the application.

## Requirements
- A C++ compiler
- A file named `phonebook.txt` in the same directory as the executable

## Compilation and Execution
To compile the program, use a C++ compiler such as `g++`:
```bash
g++ -o phonebook phonebook.cpp
