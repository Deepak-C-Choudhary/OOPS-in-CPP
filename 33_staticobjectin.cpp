#include <iostream>
#include <string>
using namespace std;

class ABC {
    public:
        ABC() {
            cout << "ABC() constructor called" << endl;
        };

        ~ABC(){
            cout << "ABC destructor called" << endl;
        }
};


int main(){
    if(true){
        static ABC obj;
        //object created does not destructed until the last line of the code does not execute 
    }
    cout << "end of main function" << endl;
;
    return 0;
}