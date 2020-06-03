// GuessingGameZeroOneHundred.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
using namespace std;

int main()
{
random_device generator;
uniform_int_distribution<int> distribution(0, 100);
int randomNumber = distribution(generator), userGuess = 0, guesses = 0;
bool playAgain = true;
string playAgainInput;
cout << "Welcome to the random number game!";
while (playAgain == true)
{
    for (int i = 5; i > 0; --i)
    {
        cout << " I have a number from 0 to 100! Guess my number! >>> \n";
        cout << randomNumber;
        for (int j = 101; j > 0; --j)
        {
            cin >> userGuess;
            if (userGuess > randomNumber)
            {
                cout << "Your number is too high!\n";
                guesses++;

            }
            else if (userGuess < randomNumber)
            {
                cout << "Your number is too low!\n";
                guesses++;

            }
            else
            {
                guesses++;
                j = 0;
            }
            if (randomNumber == userGuess)
            {
                cout << "That's it! My number was " << userGuess << "! It has taken you " << guesses << " guesses!";
            }
            if (j == 0 && guesses == 100)
            {
                cout << "You have guessed more than every number, I think it's time to stop you. It took you " << guesses << " guesses. My number was " << randomNumber << "...";
            }

        }
        randomNumber = distribution(generator);
    }
    cout << "\nWould you like to play again? (yes (or anything but no) or no) >>> \n";
    guesses = 0;
    randomNumber = distribution(generator);
    cin >> playAgainInput;
    if (playAgainInput == "no")
    {
        playAgain = false;
    }
}

}
