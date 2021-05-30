#include <iostream>
#include <string>
using namespace std;


class A
{
private:
    string life;
public:
    // A(const string& s) : life(s) 
    // {
    //     cout << "A construct!" << endl;
    // }
    A()
    {
        cout << "A construct!" << endl;
    }
    ~A()
    {
        cout << "A delete!" << endl;
    }
};

class C
{
private:
    double radius;
public:
    // C(const double r) : radius(r)
    // {
    //     cout << "C construct!" << endl;
    // }
    C()
    {
        cout << "C construct!" << endl;
    }
    ~C()
    {
        cout << "C delete!" << endl;
    }
};


class B : A
{
private:
    C c;
public:
    // B(const C& c, const string& li, const double r) : A(li), c(r) 
    // {
    //     cout << "B construct!" << endl;
    // }
    B()
    {
        cout << "B construct!" << endl;
    }
    ~B()
    {
        cout << "B delete!" << endl;
    }
};


int main()
{
    B* b = new B();
    delete b;
    return 0;
}
