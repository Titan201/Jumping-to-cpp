#include <iostream> 
#include <string> 

using namespace std; 

int main()
{
    string option; 
    do
    {
        cout<< "You must choice one option of this list: "<< endl; 
        cout<< "1. apple"<< "\n";
        cout<< "2. orange"<< "\n";
        cout<< "3. peach"<< "\n";
        cin >> option; 
    }while(option != "apple" && option != "orange" && option != "peach" );
    cout << "Good choice!"<< endl;
}