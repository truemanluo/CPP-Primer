#include <iostream>
#include <string>
#include <vector>

using namespace std;
using F = int(*)(int x, int y);
int func(int a, int b);

int bigger_one(int a, int b)
{
    return (a > b) ? a : b;
}

int add_a(int a, int b)
{
    return a + b;
}

int substract_a(int a, int b)
{
    return a - b;
}

int multiply_a(int a, int b)
{
    return a * b;
}

int main()
{
    vector<F> arr = {add_a, substract_a, multiply_a, bigger_one};
    for (auto a : arr)
    {
        cout << a(2, 3) << endl;
    }
    return 0;
}