#include <iostream>
#include <string>

using namespace std; 

int main ()
{
    string username;
    string password; 
    bool user_attemp; 

    cout << "Enter your username: " << "\n"; 
    getline(cin, username, '\n'); 

    cout << "Enter your password: " << "\n"; 
    getline(cin, password, '\n'); 
    if (username == "titan" && password == "banana")
    { 
        cout << "Access allowed" << endl; 
    }
    else 
    { 
        cout << "Bad username or password. Denied acces!"<< endl; 
        //returning is a convenient way to stop the program 
        return 0 ;
    }
    //continue onward! 
}