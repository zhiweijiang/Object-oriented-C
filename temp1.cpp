#include <iostream>
using namespace std;
template <class T, class P, int  zz>
T sum(T x, P y)
{
    return x+y;
}

int main(int argc, const char *argv[])
{
    cout<<"sum(2, 'a')="<<sum<int, char, 10>(2, 'a')<<endl;
    cout<<"sum(2, 3)="<<sum<int, int, 20>(2, 3)<<endl;

    cout<<"sum('a', 2)="<<sum<char, int, 20>('a', 2)<<endl;

    return 0;
}
