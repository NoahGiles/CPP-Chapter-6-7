// RockPaperScissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
using namespace std;

int main()
{
    int playerChoice, computerChoice, playerWin = 0, computerWin = 0, playAgain = 1;
    random_device generator;
    uniform_int_distribution<int> distribution(1, 3);
    computerChoice = distribution(generator);
    while (playAgain == 1)
    {
        cout << "Let's play ROCK PAPER SCISSORS! CHOOSE A WEAPON (ROCK (1), PAPER (2), SCISSORS (3))\n";
        cin >> playerChoice;
        if (playerChoice == 1)
        {
            if (computerChoice == 1)
            {
                cout << "Player chose rock, computer chose rock. It's a tie...\n";
            }
            else if (computerChoice == 2)
            {
                cout << "Player chose rock, computer chose paper. Computer wins!\n";
                computerWin++;
            }
            else
            {
                cout << "Player chose rock, computer chose scissors. Player wins...\n";
                playerWin++;
            }
        }
        else if (playerChoice == 2)
        {
            if (computerChoice == 1)
            {
                cout << "Player chose paper, computer chose rock. Player wins...\n";
                playerWin++;
            }
            else if (computerChoice == 2)
            {
                cout << "Player chose paper, computer chose paper. It's a tie...\n";
            }
            else
            {
                cout << "Player chose paper, computer chose scissors. Computer wins!\n";
                computerWin++;
            }
        }
        else if (playerChoice == 3)
        {
            if (computerChoice == 1)
            {
                cout << "Player chose scissors, computer chose rock. Computer wins!\n";
                computerWin++;
            }
            else if (computerChoice == 2)
            {
                cout << "Player chose scissors, computer chose paper. Player wins...\n";
                playerWin++;
            }
            else
            {
                cout << "Player chose scissors, computer chose scissors. It's a tie...\n";
            }
        }
        else
        {
            cout << "That was not an option. You are idiot.";
        }
        cout << "Player wins : " << playerWin << " Computer wins : " << computerWin << "\nWould you like to play again? (Anything but 1 to quit, 1 to continue)\n";
        computerChoice = distribution(generator);
        cin >> playAgain;
    }
    cout << "Goobye...";

}
