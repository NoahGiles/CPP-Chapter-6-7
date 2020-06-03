// RandomNumberGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device generator;
    uniform_int_distribution<int> distribution(1, 10);
    int randomNumber = distribution(generator), userGuess = 0, tries = 3, compWins = 0, userWins = 0;
    bool playAgain = true;
    string playAgainInput;
    cout << "Welcome to the random number game!";
    while (playAgain == true)
    {
        cout << " I have a number from 1 to 10! Guess my number! (you have 3 guesses) >>> \n";
        while (tries > 0 && randomNumber != userGuess)
        {
            cin >> userGuess;
            if (userGuess > randomNumber)
            {
                cout << "Your number is too high!\n";
                tries--;
            }
            else if (userGuess < randomNumber)
            {
                cout << "Your number is too low!\n";
                tries--;
            }
            if (tries > 0 && randomNumber != userGuess)
            {
                cout << "Try again!\n";
            }
        }
        if (randomNumber == userGuess)
        {
            cout << "That's it! My number was " << userGuess << "!";
            userWins++;
            cout << " User wins : " << userWins << ", Computer wins : " << compWins;
        }
        else
        {
            cout << "I win! My number was " << randomNumber << ", dummy!";
            compWins++;
            cout << " User wins : " << userWins << ", Computer wins : " << compWins;
        }
        cout << "\nWould you like to play again? (yes (or anything but no) or no) >>> \n";
        tries = 3;
        cin >> playAgainInput;
        if (playAgainInput == "no")
        {
            playAgain = false;
        }
    }

}
