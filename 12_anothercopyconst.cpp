#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
        string name;
        double *cgpaptr;

        Student(string name, double cgpa){
            this->name = name;
            cgpaptr = new double;
            *cgpaptr = cgpa;
        }

Student(Student &obj){
    this->name = obj.name;
    this->cgpaptr = obj.cgpaptr;
}

void getInfo(){
    cout << "name" << name << endl;
    cout << "CGPA" << *cgpaptr;

}
};


int main(){
    Student s1("Deepak", 8.9);
    Student s2(s1);

    s2.getInfo();

    *(s2.cgpaptr) = 9.2;  // it will cause shallow copy to change the cgpa data from both the object because the shallow copy dosen't create the new memory for the s2 object cgpa instead it points to the same memory location where the cgpa of s1 object is stored.
    //so if we change the value of one object cgpa pointer it will affect the cgpa value of all objected created.

    return 0;
}