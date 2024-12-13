#include <iostream>
#include <string>
using namespace std;

class Teacher{
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
    return 0;
}