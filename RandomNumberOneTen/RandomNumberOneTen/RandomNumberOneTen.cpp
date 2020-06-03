// RandomNumberOneTen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device generator;
    uniform_int_distribution<int> distribution(1, 10);
    int randomNumber = distribution(generator);
    cout << "My number is " << randomNumber << "!";
}