#include <iostream> 
#include <string> 

using namespace std; 

int main ()
{ 
    string operation; 
    double num1, num2; 

    cout <<"Enter a number: "<< endl; 
    cin >> num1; 
    
    cout << "Enter another number: "<< endl; 
    cin >> num2; 

    cout << "The order of operation is the first number first and the second, second"<< endl;
    cout << "You must choice among these operations: *, /, +, -. Enter the operation that you would like to do with that numbers: "<<endl;
    cin >> operation;

    if (operation == "*")
    {
        cout <<num1<<"*"<<num2 <<"=" <<num1*num2<<endl; 
    }
    else if (operation == "/")
    {
        cout <<num1<<"/"<<num2 <<"=" <<num1/num2<<endl; 
    }
    else if (operation == "+")
    {
        cout <<num1<<"+"<<num2 <<"=" <<num1+num2<<endl; 
    }
    else if (operation == "-")
    {
        cout <<num1<<"-"<<num2 <<"=" <<num1-num2<<endl; 
    }
} 