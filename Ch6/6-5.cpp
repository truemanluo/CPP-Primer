#include <iostream>

using namespace std;

int abs(int n)
{
    return (n > 0) ? n : (-n);
}

int main()
{
    int n = 0;
    cin >> n;
    cout << abs(n) << endl;
    return 0;
}