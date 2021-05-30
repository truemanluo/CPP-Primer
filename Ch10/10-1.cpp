#include "../Ch9/ch9.h"
using namespace std;

int main()
{
    int num = 0;
    vector<int> vec;
    while (cin >> num) {
        vec.push_back(num);
    }
    int cnt = count(vec.cbegin(), vec.cend(), 3);
    cout << "Times: " << cnt << endl;
    return 0;
}