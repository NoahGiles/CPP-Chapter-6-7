// GuessingGameComputerGuesses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device generator;
    
    int computerGuess, userChoice = 0, guesses = 0, minVal = 0, maxVal = 100, guessedCorrectly = 0;
    uniform_int_distribution<int> distribution(minVal, maxVal);
    computerGuess = distribution(generator);
    bool playAgain = true;
    string playAgainInput;
    cout << "Welcome to the random number game!";
    while (playAgain == true)
    {
            cout << " Pick a number between 1 and 100 for the computer to guess >>> \n";
            cin >> userChoice;
            while (computerGuess != userChoice || guessedCorrectly == 0)
            {
                
                if (userChoice > computerGuess)
                {
                    cout << "Computer guesses : " << computerGuess << "\n";
                    if (computerGuess > minVal)
                    {
                        minVal = computerGuess;
                    }
                    //cout << "Minimum Value : " << minVal;
                    guesses++;
                    //cout << "Current dist : " << distribution;
                    uniform_int_distribution<int> distribution(minVal, maxVal);
                    computerGuess = distribution(generator);

                }
                else if (userChoice < computerGuess)
                {
                    cout << "Computer guesses : " << computerGuess << "\n";
                    if (computerGuess < maxVal)
                    {
                        maxVal = computerGuess;
                    }
                    //cout << "Maximum value : " << maxVal;
                    guesses++;
                    //cout << "Current dist : " << distribution;
                    uniform_int_distribution<int> distribution(minVal, maxVal);
                    computerGuess = distribution(generator);

                }
                else
                {
                    guesses++;
                    cout << "Computer guesses : " << computerGuess << ": Computer guessed correctly!";
                    guessedCorrectly = 1;

                   
                }
                
               
            }
            if (computerGuess == userChoice)
            {
                cout << "The computer guessed user's " << userChoice << "! It took the computer " << guesses << " guesses!";
            }
            cout << "\nWould you like to play again? (yes (or anything but no) or no) >>> \n";
            guesses = 0;
            cin >> playAgainInput;
            if (playAgainInput == "no")
            {
                playAgain = false;
            }
    }
}
    
        