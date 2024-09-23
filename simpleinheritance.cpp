#include <iostream>
using namespace std;

class Base {
public:
    int value;

    Base(int val) : value(val) {}
};

class Derived : public Base {
public:
    // This member shadows the base class member
    int value;

    //initilazor list
    Derived(int baseVal, int derivedVal) : Base(baseVal), value(derivedVal) {}

    void printValues() {
        cout << "Base value: " << Base::value << endl;  // Accessing base class member
        cout << "Derived value: " << value << endl;     // Accessing derived class member
    }
};

int main() {
    Derived d(10, 20);
    d.printValues();

    return 0;
}
