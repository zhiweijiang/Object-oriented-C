#include <iostream>
using namespace std;

class Point 
{
friend Point inflate(Point &pt, int noffset);
public:
    Point(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    void print()
    {
        cout<<"Point"<<x<<","<<y<<endl;
    }
private:    
    int x;
    int y;
};

Point inflate(Point &pt, int noffset)
{
    pt.x += noffset;
    pt.y += noffset;
    
    return pt;
}

int main(void)
{
    Point pt(10, 20);
    inflate(pt, 30);
    pt.print();

    return 0;
}
