#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    // const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char ca[] = "hello";
    const char cb[] = "world";
    const char *p = ca;
    while (*p)
    {
        cout << *p << endl;
        ++p;
    }
    // Compare string
    string x1 = "Nihao lihuanying", x2 = "tangrenjie";
    if (x1 > x2)
    {
        cout << "x1 is bigger" << endl;
    }
    else if (x1 == x2)
    {
        cout << "They are equal!" << endl;
    }
    else
    {
        cout << "x1 is smaller!" << endl;
    }
    // Compare C-style string
    if (strcmp(ca, cb) > 0)
    {
        cout << "ca is bigger" << endl;
    }
    else if (strcmp(ca, cb) == 0)
    {
        cout << "They are equal!" << endl;
    }
    else
    {
        cout << "ca is smaller!" << endl;
    }
    
    return 0;
}