#include<iostream>

using namespace std;

int& ori(int &i)
{
   return i;
}

int main()
{
  int a = 3;
  ori(a) = 4;

  cout << a << endl;
  return 0;
}
