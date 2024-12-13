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


    /*constructor - it is a special method/function invoked automatically ata time of object creation
                    used for intialization
                    it allocates the memory to all the object properties value
                    same name as class name
                    constructor doesn't have a return type
                    only called once(automatically) at object creation
                    Memory allocated happens when constructor is called*/

// Types of constuctor
// 1) Non parameterised constructor
// 2) Parameterised constructor
// 2) copy constructor


// Non parameterised constuctor
    Teacher(){
        cout << "Hi, I am a constructor" << endl;
    }
    

    void changeDept(string newDept){
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
    Teacher t1;     //automatically call the constructor print - Hi, I am a constructor
    
    t1.name = "Deepak";
    
    t1.dept = "Computer";
    
    t1.subject = "C++";

    t1.setSalary(50000);

    cout << t1.getSalary() << endl;
    

    t1.getInfo();

    Teacher t2;     ////automatically call the constructor print - Hi, I am a constructor

    // Note - here we cannot set and get the value of salary as it is private
    
    

    return 0;
}