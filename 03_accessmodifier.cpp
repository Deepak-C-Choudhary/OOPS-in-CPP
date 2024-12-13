#include <iostream>
#include <string>
using namespace std;

class Teacher{

    public:
    string name;
    string dept;
    string subject;
    double salary;

    void changeDept(string newDept){
        dept = newDept;
        cout << "Department changed to " << dept << endl;

    }

};

int main(){
    Teacher t1;
    cout << "Enter name: ";
    cin >> t1.name;
    cout << "Enter department: ";
    cin >> t1.dept;
    cout << "Enter subject: ";
    cin >> t1.subject;
    cout << "Enter salary: ";
    cin >> t1.salary;
    
    cout << "Teacher's name: " << t1.name << endl;

    return 0;
}