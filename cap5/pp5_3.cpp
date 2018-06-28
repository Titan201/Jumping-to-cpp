#include <iostream> 

using namespace std; 

int main()
{
    int i, j;
    cout << "Choice an initial value: \n";
    cin >> i; 
    cout << "\n";

    while (i!=0 && j!=0)
    {
        cout << "Choice an integer to add: ";
        cin >> j; 
        i = i + j ;
    }
    cout <<"This is the value of the sum: "<< i << endl; 
}