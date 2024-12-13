#include <iostream>
#include <string>
using namespace std;

class Teacher{
    private:
    double salary;

    public:
    string name;
    string dept;
    string subject;



// Non parameterised constuctor
    Teacher(){
        cout << "Hi, I am a constructor" << endl;
        dept = "computer"; 
    }


    // parameterised constructor
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    
    void changeDept(string newDept)
        {
            dept = newDept;
            cout << "Department changed to " << dept << endl;

    }

    // get information
    void getInfo(){
        cout << "name:" << name << endl;
        cout << "department:" << dept << endl;
        cout << "subject:" << subject << endl;
        cout << "salary:" << salary << endl;
    }

// setter function
    void setSalary(double s){
        salary = s;
    }

// getter function
    double getSalary(){
        return salary;
    }

};

int main(){
    
    Teacher t1("Deepak", "Computer", "C++", 80000);     

    t1.getInfo();

    Teacher t2("Krishna", "Vaikhunt", "sanskrit", 9999999999);    
    t2.getInfo();

   
    
    

    return 0;
}