#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        string name;
        int rollno;

        
};

class Teacher{
    public:
        string subject;
        double salary;
};


class TA : public Student, public Teacher {
    public:
        

        void getInfo(){
            cout << "Name: " << name << endl;
            cout << "Subject: " << subject << endl;
            cout << "Roll No: " << rollno << endl;
            cout << "Salary: " << salary << endl;
        }
}; 

int main(){
    TA t1;
    t1.name = "Deepak";
    t1.rollno = 25;
    t1.subject = "Maths";
    t1.salary = 50000;
    
    
    t1.getInfo();
    return 0;
}