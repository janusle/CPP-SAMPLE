#include<iostream>
#include<boost/smart_ptr.hpp>

using boost::shared_ptr;
using namespace std;


int main()
{
   shared_ptr<int> int_ptr(new int(3));

   cout << "Value: " << *int_ptr << endl;
   cout << "Count: " << int_ptr.use_count() << endl; 


   shared_ptr<int> i = int_ptr;
   *i = 4;
   cout << "Value: " << *i << endl;
   cout << "Count: " << i.use_count() << endl;


   int_ptr.reset();
   cout << "Count: " << i.use_count() << endl;

   int *raw_ptr = i.get();
   cout << "Value of var to which raw_ptr point " << *raw_ptr << endl;

}
