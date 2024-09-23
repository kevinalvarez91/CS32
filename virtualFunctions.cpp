#include <iostream>
#include <memory>  // Include memory for smart pointers

using namespace std;

class Instrument {
public:
    virtual void MakeSound() = 0;
    virtual ~Instrument() {}
};

class Accordion : public Instrument {
public:
    void MakeSound() override {
        cout << "Accordion playing...\n";
    }
    ~Accordion() {}
};

class Piano : public Instrument {
public:
    void MakeSound() override {
        cout << "Piano playing...\n";
    }
    ~Piano() {}
};

int main() {
    // Use unique_ptr for automatic memory management
    shared_ptr<Instrument> i1 = make_shared<Accordion>();
    shared_ptr<Instrument> i2 = make_shared<Piano>();

    // Store smart pointers in an array
    shared_ptr<Instrument> array[2] ={i1, i2};

    // Call the MakeSound() function for each instrument
    for (int i = 0; i < 2; i++) {
        array[i]->MakeSound();
    }

    // No need to manually delete objects; share_ptr takes care of it

    return 0;
}
