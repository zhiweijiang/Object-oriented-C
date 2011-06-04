#include <iostream>
#include <string.h>
using namespace std;

namespace my
{
    char name[] = "jiangzhi";
    void show_name()
    {
        cout<<name<<endl;
    }
}
namespace your
{
    char name[] = "wang";
    void show_name()
    {
        cout<<name<<endl;
    }
}

int main(int argc, const char *argv[])
{
    my::show_name();
    your::show_name();
    strcpy(my::name, "zhiwei");
    my::show_name();
    your::show_name();

    return 0;
}
