#include "../Ch9/ch9.h"
using namespace std;

int main()
{
    string word;
    list<string> vec;
    while (cin >> word) {
        vec.push_back(word);
    }
    int cnt = count(vec.cbegin(), vec.cend(), "hello");
    cout << "Times: " << cnt << endl;
    return 0;
}