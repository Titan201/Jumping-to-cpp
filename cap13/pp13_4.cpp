#include <iostream> 

using namespace std;

int AddMultiply(int *p_value1, int *p_value2, int *sum);

int main()
{
    int value1, value2;
    int Multiply;
    int sum = 0; 
    cout << "Let's do some math!\n";
    cout << "Provide the first number: ";
    cin >> value1;
    cout << "Provide the second number: ";
    cin >> value2;
    
    Multiply = AddMultiply(& value1, & value2, & sum);
    cout << Multiply << endl;
    cout << sum<< endl; 
}

int AddMultiply(int *p_value1, int *p_value2, int *p_sum)
{
   
   int multiplication_result;
   multiplication_result = *p_value1 * *p_value2;
   *p_sum = *p_value1 + *p_value2;

   return multiplication_result;
 }