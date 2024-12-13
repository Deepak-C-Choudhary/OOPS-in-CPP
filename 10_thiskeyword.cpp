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


    // parameterised constructor
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;  //this-> keyword tells compiler that this is variable and on the right        hand side one is parameter that is being passed value
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
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
    
    Teacher t1("Deepak", "Computer", "C++", 80000);     //automatically call the constructor print - Hi, I am a constructor

    t1.getInfo();

    Teacher t2("Krishna", "Vaikhunt", "sanskrit", 9999999999);     ////automatically call the constructor print - Hi, I am a constructor

    t2.getInfo();

    // Note - here we cannot set and get the value of salary as it is private
    
    

    return 0;
}