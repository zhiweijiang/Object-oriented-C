#include <iostream>
using namespace std;
template <class T, class P>
T sum(T x, P y)
{
    return x+y;
}

int main(int argc, const char *argv[])
{
    cout<<"sum(2, 'a')="<<sum(2, 'a')<<endl;
    cout<<"sum(2, 3)="<<sum(2, 3)<<endl;

    cout<<"sum('a', 2)="<<sum('a', 2)<<endl;

    return 0;
}
