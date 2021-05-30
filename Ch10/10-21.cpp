#include "../Ch9/ch9.h"
using namespace std;

int foo(int a)
{
    if (a < 0)
        return -1;
    auto exp = [&]() -> bool {
        if (a == 0) 
            return false;
        --a;
        return true;
        };
    while (true) {
        if (!exp())
            return a;
    }
}

int main()
{
    int ans = foo(0);
    cout << ans;
    return 0;
}