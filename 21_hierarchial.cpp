#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        string name;
        int age;

};

class Student: public Person{
    public:
        int rollno;
};


class Teacher : public Student{
    public:
        string subject;

        void getInfo(){
            cout << "Name: " << name << endl;
            cout << "Subject: " << subject << endl;
            cout << "Roll No: " << rollno << endl;
            cout << "Subject: " << subject << endl;
        }
}; 

int main(){
    Teacher t1;
    t1.name = "Deepak";
    t1.rollno = 25;
    t1.subject = "Maths";
   
    
    
    t1.getInfo();
    return 0;
}