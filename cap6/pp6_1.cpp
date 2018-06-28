#include <iostream> 
#include <string> 

using namespace std; 
void calculator ()
{
    double first_argument, second_argument;
    double result;  
    cout << "Enter first argument: ";
    cin >> first_argument; 
    cout << "Enter second argument: "; 
    cin >> second_argument; 
    cout << first_argument << "*" << second_argument << "=" << first_argument*second_argument<< endl; 
    cout << first_argument << "+" << second_argument << "=" << first_argument+second_argument<< endl; 
    cout << first_argument << "-" << second_argument << "=" << first_argument-second_argument<< endl; 

    result = first_argument/second_argument; 
    cout << first_argument << "/" << second_argument << "=" << result<< endl; 
}

void beerSong() 
{
    cout << endl; 
    for(int i = 99; i >2; i--)
    {
        cout << i<< " bottles of beer on the wall,"<< i << " bottles of beer.\n"; 
        cout << "Take one down, pass it around,"<< i-1<< " bottles of beer on the wall.\n" ;
        cout << endl;
    }
        cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
        cout << "Go to the store and buy some more, 99 bottles of beer on the wall.\n";
}
int main()
{
    while(1)
    {
        int option; 
        do
        {
            cout<< "You must choice one option of this list: "<< endl; 
            cout <<"0. Exit the program\n";
            cout<< "1. Calculator"<< "\n";
            cout<< "2. Awful song"<< "\n";
            cout<< "Your choice: ";
            cin >> option; 
            cout<< "\n\n";
        }while(option != 1 && option != 2 && option !=0);
        cout << "Good choice!"<< endl;

        if(option == 1) 
        { 
            calculator();
        }
        else if (option == 2)
        {
            beerSong();
        }
        else if (option == 0)
        {
            cout << "Have a nice day!\n";
            return 0; 
        }
    }
    
}