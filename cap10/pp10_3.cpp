#include <iostream> 
#include <ctime> 
#include <cstdlib> 

using namespace std; 

int findSmallestRemainingElement(int array[], int size, int index); // declaring function 
void swap(int array[], int first_index, int second_index); // declaring function
int* sort(int array[], int size); // declaring function
int IsTheArraySorted(int array[], int SortedArray[], int size); // declaring function

int* sort (int array[], int size)
{
    for (int i = 0 ; i < size; i++)
    {
        int index = findSmallestRemainingElement(array, size, i); 
        swap (array, i, index);
    }
    int* SortedArray = array; 
    return SortedArray; 
}

int findSmallestRemainingElement(int array[], int size, int index)
{
    int index_of_smallest_value = index; 
    for (int i = index + 1; i < size; i++)
    {
        if (array[ i ] < array[ index_of_smallest_value ])
        {
            index_of_smallest_value = i; 
        }
    }
    return index_of_smallest_value;
}

void swap(int temp_array[], int first_index, int second_index)
{  
    int temp = temp_array[ first_index];
    temp_array[ first_index ] = temp_array[ second_index ];
    temp_array[ second_index ] = temp; 
}

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

int IsTheArraySorted(int array[], int SortedArray[], int size)
{ 
    int signal; 
    
    if( (array[0] == SortedArray[0]) && (array[ size - 1 ] == SortedArray[ size -1 ]))
    { 
        signal = 1 ;
    }
    else 
    {
        signal = 0;
    }
    return signal; 
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

            int *SortedArray = sort( temp_array, size); 
            signal = IsTheArraySorted( array, SortedArray, size); 

            if (signal == 0)
            {   
                cout << "Original Array: \n";
                displayArray(array, size); 
                cout << "\n"; 

                cout << "The Sorted Array is : \n";
                displayArray(SortedArray, size); 
                cout << endl;
            }
            else 
            {   
                cout << "Original Array: \n";
                displayArray(array, size); 
                cout << "\n"; 
            }
            cout << array [ 0 ] << " " << SortedArray[ 0 ]<<endl;
            cout << array [ size-1 ] << " " << SortedArray[ size-1 ]<<endl ;
            cout << signal<< endl ;
        }
        
    }
    
}