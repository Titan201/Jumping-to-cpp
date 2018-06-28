#include <iostream> 
#include <string>

using namespace std; 

int Password_checking(string pass)
{   
    int i = 3; //number of attemps that you permit
    while(pass !="banana") 
    {
        if(i == 0)
        {
            cout << "Access not allowed. Good Bye, have a nice day!\n";
            return 0;
        }
        else
        {
            cout << "You entered the wrong password!\n";
            cout << "You have " << i << " more attemps.\n\n";

            cout << "Enter another password: \n";
            cin >> pass; 
            --i;
        }    
    }
    bool success = true; 
    return success; 
}

int main()
{
    string password; 

    cout << "Enter your password: \n";
    cin >> password; 

    bool success = Password_checking(password);  
    if (success  == true)
    {
        cout << "\n";
        cout << "Access allowed.\n"; 
    }
}