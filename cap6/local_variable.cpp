#include <iostream>

using namespace std; 

void changeArgument (int x) 
{ 
    x = x + 5; 
    cout << x << " \n";
}

int main()
{
    int y = 4; 
    changeArgument(y);

    cout << y << "\n"; 
}