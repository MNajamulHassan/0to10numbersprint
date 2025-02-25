#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number (0-10): ";
    cin >> num;

    if (num < 0 || num > 10) {
        cout << "Invalid number. Please enter a number between 0 and 10." << endl;
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (num == 0 && ((i == 0 || i == 4) && (j > 0 && j < 4) || (j == 0 || j == 4) && (i > 0 && i < 4))) 
                cout << "*";
            else if (num == 1 && (j == 2 || (i == 1 && j == 1) || (i == 4 && j > 0 && j < 4))) 
                cout << "*";
            else if (num == 2 && ((i == 0 || i == 2 || i == 4) && (j > 0 && j < 4) || (i == 1 && j == 4) || (i == 3 && j == 0))) 
                cout << "*";
            else if (num == 3 && ((i == 0 || i == 2 || i == 4) && (j > 0 && j < 4) || (i == 1 || i == 3) && j == 4)) 
                cout << "*";
            else if (num == 4 && ((i < 3 && j == 0) || (i == 2 && j > 0) || (i > 2 && j == 4))) 
                cout << "*";
            else if (num == 5 && ((i == 0 || i == 2 || i == 4) && (j > 0 && j < 4) || (i == 1 && j == 0) || (i == 3 && j == 4))) 
                cout << "*";
            else if (num == 6 && ((i == 0 || i == 2 || i == 4) && (j > 0 && j < 4) || (i == 1 && j == 0) || (i == 3 && (j == 0 || j == 4)))) 
                cout << "*";
            else if (num == 7 && (i == 0 && j > 0 || (i > 0 && j == 4))) 
                cout << "*";
            else if (num == 8 && ((i == 0 || i == 2 || i == 4) && (j > 0 && j < 4) || (i > 0 && i < 4 && (j == 0 || j == 4)))) 
                cout << "*";
            else if (num == 9 && ((i == 0 || i == 2) && (j > 0 && j < 4) || (i < 3 && (j == 0 || j == 4)) || (i > 2 && j == 4))) 
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}

//The end