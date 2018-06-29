#include <iostream> 
#include <string> 

using namespace std; 

struct PersonInfo
{
    string name;
    string address;
    string phone; 
};


int main()
{
    PersonInfo Person; 

    cout << "Name: ";
    cin >> Person.name;  
    cout << "Addres: ";
    cin >> Person.address;
    cout << "Phone number: " ;
    cin >> Person.phone;
    cout << endl ;
}