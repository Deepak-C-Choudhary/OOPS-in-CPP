#include <iostream>
#include <string>
using namespace std;

// Class to demonstrate operator overloading
class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload + operator to add two complex numbers
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    // Function to display a complex number
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5); // First complex number
    Complex c2(1.5, 4.5); // Second complex number

    Complex c3 = c1 + c2; // Using overloaded + operator

    cout << "c1: ";
    c1.display();
    cout << "c2: ";
    c2.display();
    cout << "c1 + c2 = ";
    c3.display();

    return 0;
}
