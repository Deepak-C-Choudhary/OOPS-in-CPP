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

        Student(string name, int age, int rollno) : Person(name, age){
            this->rollno = rollno;
        }
};


class Gradstudent:public Student {
    public:
        string researchArea;

        Gradstudent(string name, int age, int rollno, string researchArea) : Student(name, age, rollno){
            this->researchArea = researchArea;
            
        }

        void getInfo(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Roll No: " << rollno << endl;
            cout << "Research Area: " << researchArea << endl;
        }
}; 

int main(){
    Gradstudent s1("Deepak", 25, 123, "AI-Ml");
    
    s1.getInfo();
    return 0;
}