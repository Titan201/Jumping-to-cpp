#include <iostream> 
#include <ctime> 
#include <cstdlib> 

using namespace std; 

void displayArray (int array[], int size)
{
    cout << "{"; 
    for (int i = 0; i < size; i++)
    {
        if (i !=0 )
        {
            cout <<", ";
        }
        cout << array[ i ];
    }
    cout << "}"; 
}

int main()
{
    int size ; 

    while(1)
    {
        cout << "Enter the size of your random array: "; 
        cin >> size; 

        if (size == 0)
        {
            cout << "Exit the program\n"; 
            return 0 ;
        }
        else
        {
            int array[ size ];
            int temp_array[ size ];
            int signal; 
            srand( time (NULL));

            for (int i = 0; i < size; i ++)
            {
                array [ i ] = rand() % 100; 
            }


            for (int i = 0; i < size; i++)
            {
                temp_array[i] = array[i];
            }

            cout << "Original Array: \n";
            displayArray(array, size); 
            cout << "\n";

            cout << "Temp Array: \n";
            displayArray(temp_array, size); 
            cout << "\n";
        }
        
    }
    
}