#include <iostream>
using namespace std;

// 3 1
// 2 3 1
// 5 4
// 1 2 1
// 3 4 0
// 2 5 1
// 3 2 1

int main()
{
    int a = 0, b = 0;
    int c = 0, d = 0, e = 0;
    while (cin >> a >> b)
    {
        for (int i = 0; i < b; ++i) {
            cin >> c >> d >> e;
            cout << c << " " << d << " " << e;
            cout << endl;
        }
    }
    
    return 0;
}