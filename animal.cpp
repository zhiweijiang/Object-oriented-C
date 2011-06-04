#include <iostream>
using namespace std;

class Animal
{
public:
        void eat()
        {
                cout<<"animal eat"<<endl;
                breach();
        }
protected:
        void sleep()
        {
                cout<<"animal sleep"<<endl;
        }
private:
        void breach()
        {
                cout<<"animal breach"<<endl;
        }
};

class Person:public Animal
{
public:
        void walk()
        {
                cout<<"Person walk"<<endl;
        }
        void test()
        {
                sleep();
 //             breach();
        }
#if 0
pulbic:
        void eat()
        {
                cout<<"Person eat"<<endl;
        }
        void sleep()
        {
                cout<<"Person sleep"<<endl;
        }
        void breach()
        {
                cout<<"Person breach"<<endl;
        }
#endif
};



int main(int argc, const char *argv[])
{
    
    Person an;
    an.walk();
    an.eat();
    an.test();

    return 0;
}
