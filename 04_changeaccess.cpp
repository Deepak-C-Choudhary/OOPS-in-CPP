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
    

    void changeDept(string newDept){
        dept = newDept;
        cout << "Department changed to " << dept << endl;

    }

};

int main(){
    Teacher t1;
    
    t1.name = "Deepak";
    
    t1.dept = "Computer";
    
    t1.subject = "C++";

    
    
    // Note - here we cannot set and get the value of salary as it is private
    
    

    return 0;
}