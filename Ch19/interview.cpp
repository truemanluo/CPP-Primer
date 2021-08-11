#include <iostream>
using namespace std;

class Base {
public:
    virtual void print() {
        cout << "Base" << endl;
    }

    void location() {
        cout << "I'm in Base" << endl;
    }
};

class Derived : public Base {
public:
    void print() {
        cout << "Derived" << endl;
    }

    void location() {
        cout << "I'm in Derived" << endl;
    }
};


int main()
{
    Derived *ds = new Derived();
    cout << "-------Before cast: -----------" << endl;
    ds->print(); // Derived
    ds->location(); // Derived
    Base *bs = dynamic_cast<Base*>(ds);
    cout << "-------After cast: -----------" << endl;
    bs->print(); // Derived
    bs->location(); // Base
    return 0;
}