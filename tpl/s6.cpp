#include<iostream>

using namespace std;

template<class T1,class T2>
class TestTpl
{
    public:
        T1 t1;
        T2 t2;
        TestTpl(): t1(T1()), t2(T2()){}
        TestTpl( const TestTpl<T1,T2> &ttpl )
        {
           cout << "Copy constructor " << endl;
           t1 = ttpl.t1;
           t2 = ttpl.t2;
        }

        const T1& getT1()
        {
           return t1;
        } 

        const T2& getT2()
        {
           return t2;
        }
};

int main()
{
    TestTpl<int,float> ttpl;
    ttpl.t1 = 3;
    ttpl.t2 = 4;

    TestTpl<int,float> ttpl2 = ttpl;
    cout << ttpl2.t1 << endl;
    cout << ttpl2.t2 << endl;
    return 0;
}
