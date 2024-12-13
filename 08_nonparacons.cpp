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
        dept = "computer"; // sets all the object dept value to computer when object is created
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
    

    t1.subject = "C++";

    t1.setSalary(50000);

    cout << t1.getSalary() << endl;
    

    t1.getInfo();

    Teacher t2;     ////automatically call the constructor print - Hi, I am a constructor

    // Note - here we cannot set and get the value of salary as it is private
    
    

    return 0;
}