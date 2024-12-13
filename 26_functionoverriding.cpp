#include <iostream>
#include <string>
using namespace std;

class Parent {
    public:
    void getInfo(){
        cout << "Parent class" << endl;
    }
};

class Child: public Parent{
    public:
    void getInfo(){
        cout << "Child class" << endl;
    }
};

int main(){
    Child c1;
    c1.getInfo();//child getinfo function called even though id derived form base class
    return 0;
}