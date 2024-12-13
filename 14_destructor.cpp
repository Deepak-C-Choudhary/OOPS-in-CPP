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

        Student(Student &std){
            this->name = std.name;
            cgpaptr = new double;
            *cgpaptr = *std.cgpaptr;
        }

        void getInfo(){
            cout << "Name: " << name << endl;
            cout << "CGPA: " << *cgpaptr << endl;
        }

        ~Student(){
            cout << "Hi, I am destructor, I delete everything" << endl;
            delete cgpaptr;
        }
        //here destructor will run for 2 times because we have created 2 objects of class
        //always run at the end to remove/deallocate the memory that we have created in heap using pointer
};

int main(){
    Student s1("Deepak", 8.8);
    Student s2(s1);
    s1.getInfo();

    *(s2.cgpaptr) = 9.2;
    s2.name = "Ram";
    s2.getInfo();
    return 0;
}