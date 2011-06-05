#include <iostream>
using namespace std;
class Complex
{
public:
    Complex(double r = 0, double i = 0)
    {
        real = r, img = i;
    }
    void print()
    {
        cout<<"real="<<real<<" img="<<img<<endl;
    }
    Complex operator +(Complex &c);
    Complex operator +(double x);
private:
    double real;
    double img;
};

Complex Complex::operator +(Complex &c)
{
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;

    return temp;
}

Complex Complex::operator +(double x)
{
    Complex temp;

    temp.real = real + x;
    temp.img = img;
    return temp;
}

int main(int argc, const char *argv[])
{
    Complex c1(12, 23), c2(13, 32), c;
    /* c1.operator +(c2) */
    c = c1 + c2;
    c.print();
    /* c1.operatro +(20.0) */
    c = c1 + 20;
    c.print();
    
    return 0;
}
