#include <iostream> 
#include <string>

using namespace std; 

int main()
{
    int i = 3; //number of attemps that you permit
    string password; 
    cout << "Enter your password: \n";
    cin >> password; 

    while(password !="banana") 
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
            cin >> password; 
            --i;
        }
         
    }
    cout << "\n";
    cout << "Access allowed.\n";   
}