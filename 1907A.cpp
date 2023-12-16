#include <iostream>
#include <vector>
#include <string>

// Function to print all possible moves for a rook from a given position
void printRookMoves(const std::string &position) {
    char column = position[0];
    char row = position[1];

    // Print all possible horizontal moves (along the row)
    for (char c = 'a'; c <= 'h'; ++c) {
        if (c != column) {
            std::cout << c << row << ' ';
        }
    }

    // Print all possible vertical moves (along the column)
    for (char r = '1'; r <= '8'; ++r) {
        if (r != row) {
            std::cout << column << r << ' ';
        }
    }

    std::cout << '\n';
}

int main() {
    int t;
    std::cin >> t;
    std::string position;
    while (t--) {
        std::cin >> position;
        printRookMoves(position);
    }
    return 0;
}
