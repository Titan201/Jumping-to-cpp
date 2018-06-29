#include <iostream> 

using namespace std; 

int main ()
{
    int **p_p_tictactoe; 
    //int *p_tictactoe; 
    // notice that it is a int*, since we are allocating an array of pointers
    //p_p_tictactoe = & p_tictactoe;
    p_p_tictactoe = new int*[ 3 ]; 

    // now make each pointer store the address of an array of integers
    for (int i = 0; i < 3; i++)
    {
        p_p_tictactoe[ i ] = new int[ 3 ];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            p_p_tictactoe[ i ][ j ] = 0; 
        }
    }
    cout << "Two dimmensional array stored in a pointer-to-pointer";
    for (int i = 0; i < 3; i++)
    {
        cout << "\n";
        for (int j = 0; j < 3; j++)
        {
            cout << "\t" << p_p_tictactoe[ i ][ j ];
        }
    }
    cout << "\n";

     for (int i = 0; i < 3; i++)
    {
        delete[] p_p_tictactoe[ i ];
    }
    delete[] p_p_tictactoe;
    
}