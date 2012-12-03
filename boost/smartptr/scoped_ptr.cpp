#include<iostream>
#include<boost/smart_ptr.hpp>

using boost::scoped_ptr;
using namespace std;

void test()
{
   scoped_ptr<int> int_ptr(new int(3));

   cout << *int_ptr << endl;
}

int main()
{

   test();

}
