#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std; 

int randRange (int low, int high)
{
    return rand() % (high - low + 1) + low; 
}
void signalResponse(int signal)
{
    if (signal == 1) 
    {
        cout << "JackPot!\n";
    }
    else
    {
        cout << "You loose this time\n";
    }
}
int machineResponse(bool coin, int numberToGuess1, int numberToGuess2, int numberToGuess3)
{
    int signal;
    int firstSlot; 
    int secondSlot; 
    int thirdSlot; 
     if (coin == true)
     {
        cout << "The Slot Machine is working\n";
        firstSlot = randRange(0,9); 
        secondSlot = randRange(0,9); 
        thirdSlot = randRange(0,9); 

        cout << "Your combination is: "<< firstSlot<<" "<<secondSlot<< " "<<thirdSlot<< endl;

        if(firstSlot == numberToGuess1 && secondSlot == numberToGuess2 && thirdSlot == numberToGuess3)
        {
            signal = 1;
            return signal; 
        }
        else
        {
            signal = 0; 
            return signal; 
        }
        
     }
     else 
     {
        cout << "Your are watching a blank screen!\n"; 
        return 0;
     }
}
int main()
{
    int numberToGuess1 = 2; 
    int numberToGuess2 = 0; 
    int numberToGuess3 = 1;
    bool coin; 
    int response;
    int signal;

    while(true)
    { 
        cout << "\nDo you want to put a coin in the Slot Machine (Yes = 1 and No = 0)?  ";
        cin >> response ;
        if (response == 1)
        {
            coin = true; 
            signal = machineResponse(coin, numberToGuess1, numberToGuess2, numberToGuess3);

            signalResponse(signal);
        }
        else if (response == 0)
        {
            coin = false; 
            machineResponse(coin, numberToGuess1, numberToGuess2, numberToGuess3);
            return 0;
        }
        else 
        {
            cout << "Please enter a valid response!\n";
        }    
    }
    

}