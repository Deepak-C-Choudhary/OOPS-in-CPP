// Abstract classes
// -An abstract class is a class that cannot be instantiated and is intended to be inherited by other classes.
// - it is like ablueprint for all the classes
// -abstract classes are used to provide a base class  from which other classes can be derived 
//  they cammot be instantiated and are meant to be inherited
// -abstract classes are typically used to define an interface for derived classes


#include <iostream>
#include <string>
using namespace std;

class Shape {
    public:
        virtual void draw() = 0;
};

class Circle: public Shape{
    public:
    void draw(){
        cout << "Drawing circle" << endl;
    }
};

int main(){
    Circle c1;
    c1.draw();
    return 0;
}