#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int randRange (int low, int high)
{
    return rand() % (high - low + 1) + low; 
}
int GuessResponse(int response, int numberToGuess)
{
    int signal;

    cout << "You need to guess a number who is between 1 and 100, what will be your guess?: "<< response<<"\n";
    
     if (response > numberToGuess)
     {
        cout << "Too High!\n";
        signal = 1;
        return signal; 
     }
     else if (response == numberToGuess)
     {
        cout << "Just Right!\n";
        signal = 0;
        return signal; 
     }
     else if (response < numberToGuess)
     {
        cout << "Too low!\n";
        signal = -1; 
        return signal; 
     }
     cout << "\n";
}

int main()
{
    srand( time (NULL));
    int numberToGuess = randRange(1,100);
    int yourGuess, pastGuess, highGuess, lowGuess, signal, pastSignal, steps=1;

    yourGuess = randRange(1,100);
    pastGuess = yourGuess;
    signal = GuessResponse(yourGuess,numberToGuess)    ;
  

    while(1)
    { 
        if(signal == 1)
        {
            highGuess = pastGuess; 

            yourGuess = randRange(1,highGuess-1);
   
            signal = GuessResponse(yourGuess, numberToGuess);
        }
        else if (signal == 0)
        {
            yourGuess = yourGuess;
            cout<< "JUST RIGHT!";
            break; 
        }
        else if (signal == -1)
        {   
            lowGuess = pastGuess; 

            yourGuess = randRange(lowGuess+1,100);
        
            signal = GuessResponse(yourGuess,numberToGuess); 
        }
        pastGuess = yourGuess;    
        pastSignal = signal ; 

        steps++; 
    }
    cout << "\nThe number to guess is: "<< numberToGuess << endl; 
    cout << "The number of steps to guess the number was: "<< steps<< endl;
}