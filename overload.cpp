#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

double add(double a, double b)
{
    return a+b;
}

int main(int argc, const char *argv[])
{
    cout<<add(1,2)<<endl<<add(2.4,3.5)<<endl;
    
    return 0;
}
