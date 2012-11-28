#include<iostream>

using namespace std;

class TestClass
{
  public:
    TestClass(){ cout<<"Test() is called"<<endl; };
    TestClass( const TestClass &t ); 
};

TestClass::TestClass( const TestClass &t)
{
    cout <<"copy constructor is called"<<endl;
}

TestClass testFunction()
{
   TestClass t;
   return t;
}


int main()
{
   TestClass t;
   TestClass v = t;
   return 0;
}
