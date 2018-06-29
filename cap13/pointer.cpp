#include <iostream> 

using namespace std; 

int main()
{
    int x; // a normal integer
    int *p_int; //  a pointer to an integer

    p_int = & x; // read it, "assing the address of x to p_int"
    cout << "Please enter a number : "; 
    cin >> x; 
    cout << * p_int << "\n";

    *p_int = 10; 
    cout << x<<endl; 
}