#include <iostream>
#include <string> 

using namespace std; 

int main() 
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