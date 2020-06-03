// GuessingGameDifficulty.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device generator;
    uniform_int_distribution<int> distribution1(0, 33);
    uniform_int_distribution<int> distribution2(0, 66);
    uniform_int_distribution<int> distribution3(0, 100);
    int randomNumber = 0, userGuess = 0, guesses = 0, difficulty;
    bool playAgain = true;
    string playAgainInput;
    while (playAgain == true)
    {
    cout << "Welcome to the random number game! Choose a difficulty (easy (1), medium (2), or hard (3)\n";
    cin >> difficulty;
    if (difficulty == 1)
    {
        randomNumber = distribution1(generator);
    }
    else if (difficulty == 2)
    {

        randomNumber = distribution2(generator);
    }
    else if (difficulty == 3)
    {
        randomNumber = distribution3(generator);
    }
    switch (difficulty)
    {
    case 1 :
        
            for (int i = 5; i > 0; --i)
            {
                cout << " I have a number from 0 to 33! Guess my number! >>> \n";
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

                }
                randomNumber = distribution1(generator);
            }
            break;
    case 2 :

        for (int i = 5; i > 0; --i)
        {
            cout << " I have a number from 0 to 66! Guess my number! >>> \n";
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
            randomNumber = distribution2(generator);
        }
        break;
    case 3 :
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
            randomNumber = distribution3(generator);
        }
        break;
    default: cout << "Invalid difficulty selected";
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
