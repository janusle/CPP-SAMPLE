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

    boost::bind( &TestClass::test, 3)();

    return 0;
}
