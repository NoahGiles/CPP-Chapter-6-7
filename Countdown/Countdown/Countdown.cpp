// Countdown.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    cout << "Initiating countdown sequence...\n";
    for (int i = 10; i > 0; --i)
    {
        cout << i << "...\n";
    }
    cout << "Liftoff!";
}