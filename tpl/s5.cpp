// Multiple types with class templates
#include<iostream>

using namespace std;

template<class T1, class T2>
class testClass
{
  public:
     T1 first;
     T2 second;
};


int main()
{
    testClass<int, double> t;
    t.first = 1;
    t.second = 2.2;
    cout << t.first << "\n" << t.second << endl;
    return 0;
}
