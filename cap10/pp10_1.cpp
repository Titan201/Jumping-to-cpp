#include <iostream> 
#include <ctime> 
#include <cstdlib> 

using namespace std; 

int findSmallestRemainingElement(int array[], int size, int index); // declaring function 
void swap(int array[], int first_index, int second_index); // declaring function
void sort(int array[], int size); // declaring function

void sort (int array[], int size)
{
    for (int i = 0 ; i < size; i++)
    {
        int index = findSmallestRemainingElement(array, size, i); 
        swap (array, i, index);
    }
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

void swap(int array[], int first_index, int second_index)
{
    int temp = array[ first_index];
    array[ first_index ] = array[ second_index ];
    array[ second_index ] =temp; 
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

int main()
{
    int size ; 

    cout << "Enter the size of your random array: "; 
    cin >> size; 

    int array[ size ]; 
    srand( time (NULL));

    for (int i = 0; i < size; i ++)
    {
        array [ i ] = rand() % 100; 
    }
    cout << "Original Array: ";
    displayArray(array, size); 
    cout << "\n"; 

    sort( array, size); 

    cout << "Sorted array: "; 
    displayArray( array, size); 
    cout << "\n"; 
}