#include <iostream>
using namespace std;

class Base {
public:
    int data;
    void print() {
        cout << "Base" << endl;
    }
};

class Derived : public Base {
public:
    char ch;
    void print() {
        cout << "Derived" << endl;
    }
};


int main()
{
    Derived *ds = new Derived();
    cout << "-------Before cast: -----------" << endl;
    ds->print();
    Base *bs = dynamic_cast<Base*>(ds);
    cout << "-------After cast: -----------" << endl;
    bs->print();
    return 0;
}