#include <iostream>
#include <string>
using namespace std;

class Parent {
    public:
    virtual void hello(){
        cout << "Parent class" << endl;
    }
};

class Child: public Parent{
    public:
    void hello(){
        cout << "Child class" << endl;
    }
};

int main(){
    Child c1;
    c1.hello();
    return 0;
}