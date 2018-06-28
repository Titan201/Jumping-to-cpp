#include <iostream>
#include <string>

using namespace std; 

int main ()
{
    string password; 

    cout << "Enter your password: " << "\n"; 
    getline(cin, password, '\n'); 
    if (password == "banana")
    { 
        cout << "Access allowed" << endl; 
    }
    else 
    { 
        cout << "Bad password. Denied acces!"<< endl; 
        //returning is a convenient way to stop the program 
        return 0 ;
    }
    //continue onward! 
}