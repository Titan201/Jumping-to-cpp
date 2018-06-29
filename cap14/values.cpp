#include <iostream> 

using namespace std; 



int main()
{
    int x = 0; 
    int *p_int; 
    p_int = & x; 
    int **p_p_int = & p_int; 

    cout << "Value of x: "<< x << endl; 
    cout << "Value of p_int: "<< *p_int << endl;
    cout << "Value of p_p_int: "<< **p_p_int << endl;
    cout << endl;
    *p_int = 12; 

    cout << "Value of x: "<< x << endl; 
    cout << "Value of p_int: "<< *p_int << endl;
    cout << "Value of p_p_int: "<< **p_p_int << endl;
    cout << endl;
    **p_p_int = 25; 

    cout << "Value of x: "<< x << endl; 
    cout << "Value of p_int: "<< *p_int << endl;
    cout << "Value of p_p_int: "<< **p_p_int << endl;
    cout << endl;
    *p_int = 12; 

    cout << "Value of x: "<< x << endl; 
    cout << "Value of p_int: "<< *p_int << endl;
    cout << "Value of p_p_int: "<< **p_p_int << endl;
    cout << endl;
    **p_p_int = 3; 

    cout << "Value of x: "<< x << endl; 
    cout << "Value of p_int: "<< *p_int << endl;
    cout << "Value of p_p_int: "<< **p_p_int << endl;
    cout << endl;
    **p_p_int = 27; 

    cout << "Value of x: "<< x << endl; 
    cout << "Value of p_int: "<< *p_int << endl;
    cout << "Value of p_p_int: "<< **p_p_int << endl;
    cout << endl;
}