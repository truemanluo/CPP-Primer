#include <iostream>
using namespace std;

int main()
{
    const int a = 10;
    int b = 11;
    const int &a_ref = a;
    const int &b_ref = b;
    return 0;
}