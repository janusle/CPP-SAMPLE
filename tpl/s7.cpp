//Example of Non-type Template Arguments
#include<iostream>

using namespace std;

template<class T, int SIZE>
class Array
{
    T data[SIZE];
    public:
       Array()
       {
          for(int i=0; i<SIZE; i++)
             data[i] = T();
       }
       void print()
       {
          for(int i=0; i<SIZE; i++)
            cout << data[i] << endl;
       }
};

int main()
{
    Array<int, 3> array;

    array.print();
    return 0;
}
