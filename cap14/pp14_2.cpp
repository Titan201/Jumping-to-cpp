#include <iostream> 

using namespace std; 

void ThreeDimensionalArray(int lengthSize, int widthSize, int heightSize)
{
    int ***p_p_p_multi;


    p_p_p_multi = new int**[ lengthSize ]; 

    // now make each pointer store the address of an array of integers
    for (int i = 0; i < lengthSize; i++)
    {
        p_p_p_multi[ i ] = new int*[ widthSize ];
    }
    for (int i = 0 ; i < lengthSize; i++)
    {
        for (int j = 0; j < heightSize; j++)
        {
           p_p_p_multi[ i ][ j ] = new int[ heightSize ] ; 
        }
    }
    // fulling the array 
    for (int i = 0; i < lengthSize; i++)
    {
        for (int j = 0; j < heightSize; j++)
        {
            for (int k = 0; k < widthSize; k++)
            {
                p_p_p_multi[ i ][ j ][ k ] = (i+1)*(j+1)*(k+1); 
            }
        }
    }

    for (int i = 0; i < lengthSize; i++)
    {
        cout << "\n";
        for (int j = 0; j < widthSize; j++)
        {
            cout << "\n";
            for (int k = 0; k < heightSize; k++)
            {
                cout << '\t'<< p_p_p_multi[ i ][ j ][ k ];
            }
        }
    }
    cout << "\n";
    // Deleting all the memory 
    for (int i = 0; i < lengthSize; i++)
    {
        for (int j = 0; j < widthSize; j++)
        {
            delete[] p_p_p_multi[ i ][ j ];
        }
    }
    delete[] p_p_p_multi;
}
int main()
{
    int lengthSize, widthSize, heightSize ; 
    int ***p_p_p_multi; 
    cout << "What is the value for the length that do you want?: "; 
    cin >> lengthSize;
    cout << "What is the value for the width that do you want?: ";
    cin >> widthSize; 
    cout << "What is the value for the height that do you want?: ";
    cin >> heightSize; 

    ThreeDimensionalArray( lengthSize, widthSize, heightSize);
}
