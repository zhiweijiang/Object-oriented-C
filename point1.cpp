#include <iostream>
using namespace std;

/*typedef struct point*/
class POINT
{
private:
    int x;
    int y;
public:
/*    void init(int a, int b)
    {
        x = a;
        y = b;
    }*/
    POINT(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    POINT()
    {
        x = 0;
        y = 0;
    }
    ~POINT()
    {
    }
    void show_point()
    {
         cout<<"pt.x="<<x<<endl<<"pt.y="<<y<<endl;
    }
};

int main(int argc, const char *argv[])
{
    POINT pt(5, 9);
//  POINT pt;

//  pt.x = 9;
//  pt.y = 5;
//  cout<<"pt.x="<<pt.x<<endl<<"pt.y="<<pt.y<<endl;
//  pt.init(5, 9);
    pt.show_point();

    return 0;
}
