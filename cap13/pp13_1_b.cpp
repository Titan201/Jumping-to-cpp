#include <iostream> 
#include <string> 

using namespace std; 

/* Maybe I do not undertand the exercise, 
so I write another program with other interpretation of the order */ 

void caller(char *p_first, char *p_last)
{
    int i = 1; 
    cout << "Your Names is: ";
    while( i < 20 && *p_first !=0)
    {
        cout <<  *p_first ;
        p_first++;
        i ++ ; 
    }
    cout << " "; 
    i = 1; 
    while( i < 20 && *p_last !=0)
    {
        cout <<  *p_last ;
        p_last++;
        i ++ ; 
    }
    cout << "\n";
}

int main()
{
    string first_name;
    string last_name; 
     
    cout << "Enter your first name: ";
    cin >> first_name; 
    cout << "Enter your last name: "; 
    cin >> last_name;
    caller(first_name, last_name);
}