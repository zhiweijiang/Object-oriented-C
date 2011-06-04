#ifndef STUDENT_H
#define STUDENT_H

class Person
{
public:
        Person(const char *name, int age);
        ~Person();
        void display()const;
protected:
        char *name;
        int age;
};

class Student:public Person
{
public:
        Student(const char *name, int age, int score);
        ~Student();
        void display() const;
private:
        int score;
};
#endif
