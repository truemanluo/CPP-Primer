#include <iostream>
#include <string>

using namespace std;

void exchange_pointers(int *&a, int *&b)
{
    int *tmp = a;
    a = b;
    b = tmp;
}


int main()
{
    int *a, *b;
    cout << "Before" << a << endl;
    cout << "Before" << b << endl;
    exchange_pointers(a, b);
    cout << "After" << a << endl;
    cout << "After" << b << endl;
    return 0;
}