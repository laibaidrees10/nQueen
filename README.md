# nQueen

This project solves the classic **N-Queen problem**, where the goal is to place `n` queens on an `n x n` chessboard such that no two queens threaten each other.

## Features

- Takes input `n` from the user.
- Uses **Backtracking** to find all valid solutions.
- Prints each valid board configuration with `Q` for queens and `.` for empty spaces.

## How It Works

The algorithm places queens row by row, checking at each step if the position is safe from attack. It uses recursive backtracking to explore all possible arrangements.

## How to Compile and Run

### Prerequisites

- A C++ compiler like `g++`

### Steps

1. Clone or download the repository.
2. Open a terminal or command prompt and open the repository 
3. Compile the program:
   ```bash
   g++ nqueen.cpp -o nqueen

4. Run the program:

       ./nqueen
