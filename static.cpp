#include <iostream>
using namespace std;

class A
{
public:
    /* olny access static variable */
    static void print()
    {
        cout<<i<<endl;
    }
    /* Defined in the external */
    static int i;
    int j;
};

int A::i;

int main(void)
{
    A a, b;
    a.i = 10;
    b.i = 20;
    cout<<a.i<<endl<<b.i<<endl;
    A::i = 30;
    cout<<a.i<<endl<<b.i<<endl;

    return 0;
}
