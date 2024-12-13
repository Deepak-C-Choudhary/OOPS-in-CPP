#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        string name;
        int age;
};

class Student:public Person{
    public:
        int rollno;
        void getInfo(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Roll No: " << rollno << endl;
        }
};

int main(){
    Student s1;
    s1.name = "Deepak";
    s1.age = 20;
    s1.rollno = 25;
    s1.getInfo();
    return 0;
}