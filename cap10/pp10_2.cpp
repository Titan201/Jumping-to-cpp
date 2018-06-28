#include <iostream> 
#include <cstdlib> 
#include <ctime> 

using namespace std; 


int findSmallestRemainingElement(int array[], int size, int index); // declaring function 
void swap(int array[], int first_index, int second_index); // declaring function
int* sort(int array[], int size); // declaring function
void ArrayStatics(int array[], int size); // declaring function


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

void ArrayStatics (int array[], int size)
{
    int min_value = array[ 0 ]; 
    int max_value = array[ size-1 ];
    int average, temp = 0; 

    for (int i = 0; i < size; i++)
    {
        temp = temp + array[ i ]; 
    }
    average = temp / size; 

    cout << "The minimun value is: "<< min_value<< endl; 
    cout << "The maximun value is: "<< max_value<< endl; 
    cout << "The average is: "<< average<< endl; 

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
            cout <<"\n";
        }
        cout << array[ i ];
    }
    cout << "}"; 
}

int main()
{

    int size=4 ;  
    int array[ size ]; 
    srand( time (NULL));

    for (int i = 0; i < size; i ++)
    {
        array [ i ] = rand() % 100; 
    }

    
    int *SortedArray = sort( array, size ); 

    ArrayStatics( SortedArray, size ); 

    cout << "Array: \n"; 
    displayArray( array, size); 
    cout << "\n"; 
}