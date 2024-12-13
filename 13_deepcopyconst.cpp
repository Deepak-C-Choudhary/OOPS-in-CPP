#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        string name;
        double *cgpaptr;

        //parameterised constructor
Student(string name, double cgpa){
    this->name = name;
    cgpaptr = new double;
    *cgpaptr = cgpa;
}

Student(Student &stu){
    this->name = stu.name;
    cgpaptr = new double;
    *cgpaptr = *stu.cgpaptr;
}

void getInfo(){
    cout << "name:- " << name << endl;
    cout << "cgpa:- " << *cgpaptr << endl;
}
};


int main(){
    Student s1("Deepak", 9.5);
    Student s2(s1);
    s1.getInfo();
    *(s2.cgpaptr) = 9.2;
    s2.name = "Ram";
    s2.getInfo();
    return 0;

}