#include <iostream> 
#include <string> 

using namespace std; 

struct PersonInfo
{
    string name;
    string address;
    string phone; 
};

void ShowingEntries(int signal, int Entries, PersonInfo Person[])
{
    int selection ; 
    if (signal == 0)
    {
        cout << "Showing all the entries\n";
        for(int i = 0; i < Entries; i++)
        {
            cout << "Entry number: "<< i<<endl; 
            cout << "Name: "<< Person[ i ].name <<endl; 
            cout << "Address: "<< Person[ i ].address<< endl; 
            cout << "Phone Number: "<< Person[ i ].phone<< endl;  
        }
    }
    else if (signal == 1)
    {
        cout << "What entry you wanna see? ";
        cin >> selection; 

        cout << "Entry number: "<< selection<<endl; 
        cout << "Name: "<< Person[ selection ].name <<endl; 
        cout << "Address: "<< Person[ selection ].address<< endl; 
        cout << "Phone Number: "<< Person[ selection ].phone<< endl;  
    }
    else if (signal == 2)
    {
        cout << "Exit the programm"<<endl;
    }
}



int main()
{
    int Entries; 
    int signal; 

    cout << "How many entries you wanna fill? ";
    cin >> Entries; 

    PersonInfo Person[ Entries ]; 

    for(int i = 0; i < Entries; i++)
    {
        cout << "Name: ";
        cin >> Person[ i ].name;  
        cout << "Addres: ";
        cin >> Person[ i ].address;
        cout << "Phone number: " ;
        cin >> Person[ i ].phone;
        cout << endl ;
    }
    while(1)
    {
        do{
           cout << "Do you wanna see all the entries or only one of them? (0 = all, 1 = one, 2 = Neither all nor one)"<< endl; 
            cin >> signal; 
        } while(signal>2 && signal < 0); 

        ShowingEntries(signal, Entries, Person);
        if (signal == 2)
        {
            return 0; 
        }
    }
    
}