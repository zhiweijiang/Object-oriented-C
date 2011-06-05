#include <iostream>
#include <cstring>
using namespace std;

class Person
{
public:
        Person(char *str)
        {
            name = new char[strlen(str)+1];
            /*name = str;*/
            strcpy(name, str);
        }
        ~Person()
        {
            if(name)
            {
                    delete[] name;
                    name = NULL;
            }
            
       }
       char *get_name()
       {
               return name;
       }
private:
        char *name;
};

int main(int argc, const char *argv[])
{
    char *p = new char[12];
    strcpy(p, "jiangzhiwei");
    Person one(p);

    delete[] p;
    cout<<one.get_name()<<endl;
    
    return 0;
}
