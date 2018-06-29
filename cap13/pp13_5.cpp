#include <iostream> 

using namespace std; 


void OrderingVariables (int *p_val1, int *p_val2)
{
    if (p_val1 < p_val2)
    {
        cout << "First variable is: "<< *p_val1<< endl; 
        cout << "Second variable is: "<< *p_val2<< endl; 
    }
    else if (p_val1 > p_val2)
    {
        cout << "First variable is: "<< *p_val2<< endl; 
        cout << "Second variable is: "<< *p_val1<< endl; 
    }
    cout << "Printing memory addresses "<< endl;
    cout << '\t'<< "Value 1: "<< p_val1<<endl;
    cout << '\t'<< "Value 2: "<< p_val2<<endl;
}

int main ()
{
    int val1=10, val2=9;

    cout << "Ordering the variables through their memory addresses\n";
    OrderingVariables(& val1, & val2);  
}