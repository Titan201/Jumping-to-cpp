#include <iostream>

using namespace std; 


void Add(int x, int y)
{
    cout << x << "+" << y << "=" << x+y << endl; 
}

void Minus(int x, int y)
{
    cout << x << "-" << y << "=" << x-y << endl; 
}

void Product(int x, int y)
{
    cout << x << "*" << y << "=" << x*y << endl; 
}

void Division(int x, int y)
{
    cout << x << "/" << y << "=" << x/y << endl; 
}

int main () 
{ 
    int num1 ; 
    int num2;
    cout << "Enter first argument: ";
    cin >> num1; 
    cout << "Enter second argument: "; 
    cin >> num2 ;
    cout << "\n";
    Add(num1, num2);
    Minus(num1, num2);
    Product(num1, num2);
    Division(num1, num2);
}