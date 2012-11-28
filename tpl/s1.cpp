#include<iostream>

using namespace std;

template<class T>
void print(T data)
{
   cout << data << endl; 
}


int main()
{
   print(3); 
   return 0;
}
