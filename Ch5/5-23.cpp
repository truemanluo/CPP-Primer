#include <iostream>
#include <stdexcept>
#include <typeinfo>

using namespace std;

int main()
{
    int a = 0, b = 0;
    cin >> a >> b;
    // if (b == 0)
    // {
    //     throw runtime_error("Division is zero!");
    // }
    double ans = 0.0;
    cout << "Type a: " << typeid(a).name() << endl;
    cout << "Type b: " << typeid(b).name() << endl;
    try
    {
        if (b == 0)
        {
            throw runtime_error("Division is zero!");
        }
        // cout << a / b << endl;
        cout << static_cast<double>(a) / b << endl;

    }
    catch(runtime_error e)
    {
        std::cerr << e.what() << '\n';
        cerr << "Division is zero! n for exit" << '\n';
    }
    return 0;
}