#include <iostream> 

using namespace std;


int main()
{
    int colSize, rowSize; 
    int **p_p_multi; 
    cout << "How many rows do you want?: "; 
    cin >> rowSize;
    cout << "How many cols do you want?: ";
    cin >> colSize; 

    p_p_multi = new int*[ colSize ]; 

    // now make each pointer store the address of an array of integers
    for (int i = 0; i < colSize; i++)
    {
        p_p_multi[ i ] = new int[ rowSize ];
    }
    // fulling the array 
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            p_p_multi[ i ][ j ] = (i+1)*(j+1); 
        }
    }
    // Showing the array
    cout << "Two dimmensional array stored in a pointer-to-pointer";
    for (int i = 0; i < rowSize; i++)
    {
        cout << "\n";
        for (int j = 0; j < colSize; j++)
        {
            cout << "\t" << p_p_multi[ i ][ j ];
        }
    }
    cout << "\n";

    // Printing the address for the pointer in p_p_multi
    cout << "Address for each value\n" ;
    for (int i = 0; i < rowSize; i++)
    {   
        cout << "\n";
        for (int j = 0; j < colSize; j++)
        {
            cout << '\t'<< &p_p_multi[ i ][ j ] ; 
        }
        
    }
    cout << endl; 
    // Deleting all the memory 
    for (int i = 0; i < colSize; i++)
    {
        delete[] p_p_multi[ i ];
    }
    delete[] p_p_multi;
    
}