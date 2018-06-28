#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int randRange (int low, int high)
{
    return rand() % (high - low + 1) + low; 
}

int main()
{
    srand( time (NULL));
    int numberToGuess = randRange(1,100);
    int yourGuess;

    while (true)
    {
    cout << "You need to guess a number who is between 1 and 100, what will be your guess?: ";
    cin >> yourGuess; 
    
        if (yourGuess > numberToGuess)
        {
            cout << "Too High!\n";
        }
        else if (yourGuess == numberToGuess)
        {
            cout << "Just Right!\n";
            return 0; 
        }
        else if (yourGuess< numberToGuess)
        {
            cout << "Too low!\n";
        }
        cout << "\n";
    }
    
}