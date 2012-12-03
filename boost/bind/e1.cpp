#include<iostream>
#include<boost/bind.hpp>

using namespace std;

void test(int i)
{
    cout << i << endl;
}

int main()
{
    boost::bind( &test, 3 )();
    return 0;
}
