#include<iostream>
#include<boost/bind.hpp>

using namespace std;

class TestClass
{
  public:
    void test(int i)
    {
        cout << i << endl;
    }

    static void test1(int i)
    {
        cout << i << endl;
    }

};

int main()
{
    TestClass t;

    cout << (void*)&TestClass::test << endl;

    cout << (void*)TestClass::test1 << endl;

    cout << (void*)&TestClass::test1 << endl;

    return 0;
}
