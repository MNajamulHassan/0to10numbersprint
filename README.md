# Number Pattern Generator

## Description

This C++ program takes an integer input (0-10) from the user and prints a corresponding number pattern using asterisks (`*`). Each number (0-9) has a predefined 5x5 grid representation. If the user inputs an invalid number (outside the 0-10 range), the program displays an error message and exits.

## Features

- Accepts user input for numbers between 0 and 10.
- Displays a 5x5 ASCII representation of the entered number.
- Handles invalid inputs with an appropriate error message.

## How It Works

1. The program prompts the user to enter a number between 0 and 10.
2. If the number is out of range, an error message is displayed, and the program exits.
3. If the number is valid, it prints a 5x5 representation of the number using `*` characters.
4. The number patterns are pre-defined in the nested `for` loop conditions.

## Example Output

### Input:

```
Enter a number (0-10): 2
```

### Output:

```
 ***
    *
 ***
*    
 ***
```

## Compilation and Execution

To compile and run the program, use a C++ compiler such as g++:

```
g++ number_pattern.cpp -o number_pattern
./number_pattern
```

For Windows (Dev-C++ or MinGW):

```
g++ number_pattern.cpp -o number_pattern.exe
number_pattern.exe
```

## Requirements

- A C++ compiler (G++, Clang, MSVC, or Dev-C++)
- Works on Windows, Linux, and macOS


## Author

Najam

