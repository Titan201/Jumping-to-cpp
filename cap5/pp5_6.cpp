#include <iostream> 

using namespace std; 

int main()
{
  int i=2; 
  int j=2;
  cout << "These are the first 20 square numbers: \n";
  cout <<"Index:"<<'\t' << 1; 
  while(i<=20)
  { 
    cout << '\t' << i; 
    i++; 
  }
  cout << "\n";
  cout<<"Square:"<<'\t'<<1; 
  while(j<=20)
  {
      cout << '\t' << j*j;  
      j++;
  } 
  cout << endl; 
}