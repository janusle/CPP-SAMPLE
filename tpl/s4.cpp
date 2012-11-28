#include<iostream>

using namespace std;

template<class T>
void print()
{
   cout << "Size: " << sizeof(T) << endl;
}

template<class T>
void testFun(T t1, T t2)
{
  cout << t1 << endl;
  cout << t2 << endl;
}

int main()
{
    print<int>(); // Explicit Template Argument Specification
    testFun<float>(1, 1.2); //just specify the first parameter
    return 0;
}
