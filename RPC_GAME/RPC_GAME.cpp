#include <iostream>

int main()
{
    char pa = 'y';
    std::cout << "Rock, Paper Scissors Game!\n\n(r) for Rock\n(p) for Paper\n(s) for Scissors\n\n";
    while (pa == 'y') {
        char player1;
        char player2;
        std::cout << "Player One's Turn: ";
        std::cin >> player1;
        std::cout << "\n";

        while (player1 != 'r' && player1 != 'p' && player1 != 's') {
            std::cout << "Please select an input from the listed options\n\nPlayer One's Turn: ";
            std::cin >> player1;
            std::cout << "\n";
        }

        std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPlayer Two's Turn: ";
        std::cin >> player2;
        std::cout << "\n";

        while (player2 != 'r' && player2 != 'p' && player2 != 's') {
            std::cout << "Please select an input from the listed options\n\nPlayer One's Turn: ";
            std::cin >> player2;
            std::cout << "\n";
        }

        if (player1 == 'r' && player2 == 's' || player1 == 's' && player2 == 'p' || player1 == 'p' && player2 == 'r') {
            std::cout << "Player 1 guessed: " << player1 << "\nPlayer 2 guessed: " << player2 << "\nPlayer 1 Wins!!!";
        }
        else if (player1 == 's' && player2 == 'r' || player1 == 'p' && player2 == 's' || player1 == 'r' && player2 == 'p') {
            std::cout << "Player 1 guessed: " << player1 << "\nPlayer 2 guessed: " << player2 << "\nPlayer 2 Wins!!!";
        }
        else {
            std::cout << "Player 1 guessed: " << player1 << "\nPlayer 2 guessed: " << player2 << "\nIts a Draw!!!";
        }

        std::cout << "\n\nPlay Again? (y/n): ";
        std::cin >> pa;
        std::cout << "\n\n";
    }
}