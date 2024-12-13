#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        string name;
        int age;

        Person(string name, int age){
            this->name = name;
            this->age = age;
        }
};

class Student:public Person{
    public:
        int rollno;

        //here we are calling the base class constructor
        Student(string name, int age, int rollno) : Person(name, age){

        this->rollno = rollno;
        }

        
        void getInfo(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Roll No: " << rollno << endl;
        }
};

int main(){
    Student s1("Deepak", 21, 123);
    
    s1.getInfo();
    return 0;
}