#include <iostream>

using namespace std; 

int main ()
{
   int x ;
   cout << "Enter a number: "; 
   cin >> x; 
   if (x<10) 
   { 
      cout << "You entered a value less than 10"<<"\n";  
   }
   else
   { 
      cout << "You entered a value greater than or equal to 10"<< "\n"; 
   }
}