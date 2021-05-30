#include "../Ch9/ch9.h"
using namespace std;

// 10-14
auto f = [] (int a, int b) -> int {
    return a + b;
};

int main()
{
    cout << f(2, 3) << endl;
    // 10-15
    int a = 10;
    auto add = [a] (int b) -> int {
        return a + b;
    };
    cout << add(20) << endl;
    return 0;
}
