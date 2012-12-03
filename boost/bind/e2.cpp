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
};

int main()
{
    TestClass t;
    boost::bind( &TestClass::test, &t, 3 )();
    return 0;
}
