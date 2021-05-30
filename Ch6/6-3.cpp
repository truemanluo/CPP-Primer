#include <iostream>

using namespace std;

int fact(int n)
{
    if (n < 0)
        return -1;
    int ans = 1;
    for (int i = n; i != 1; --i)
    {
        ans *= i;
    }
    return ans;
}

int main()
{
    int n = 0;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}