# Tic Tac Toe (C++ OOP)

A console-based Tic Tac Toe game built in C++ using OOP concepts.

## How It Works

- Two players take turns: **Player A (X)** and **Player B (O)**
- The board is a 3x3 grid with positions numbered **0–8**
- Players enter the index where they want to place their mark
- The game detects wins across **rows, columns, and diagonals**

## Board Layout
0 | 1 | 2
3 | 4 | 5
6 | 7 | 8

## Features

- Dynamic 2D array using double pointers (`char**`)
- Win detection for rows, columns, and both diagonals
- Prevents overwriting already-filled cells
- Automatic turn switching between players

## How to Run

Compile and run using any C++ compiler:

```bash
g++ TicTacToe.cpp -o TicTacToe
./TicTacToe
```

Or open in **Visual Studio** and hit Run.