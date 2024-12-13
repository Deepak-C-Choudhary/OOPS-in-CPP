#include <iostream>
#include <string>
using namespace std;

class Teacher{

    // Properties or Attributes
    string name;
    string dept;
    string subject;
    double salary;

    // Methods or Member function
    void changeDept (string newDept){
        dept = newDept;
        cout << "Department changed to " << dept << endl;
    }

};



/* 
class - class is like a blueprint of some entities (object)
        class is a user defined data type
        class can also be called as group of objects
        class can be blueprint of object, how a object will look (its properties and features)


object- object are entities in the real world
        any entity of the real world can be consider as object 
        example - pen, paper, bottle, any common noun that represent a class of the entity


Properties- characteristics of the object
            feature related to object
            information associated with object

methods- methods are functions related to object
         methods are written inside the class



*/ 
          