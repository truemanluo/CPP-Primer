#include <iostream>
#include <vector>
using namespace std;
int main() {
    int num;
    vector<int> ans;
    while (cin >> num) {
        ans.push_back(num);
    }

    for (auto n : ans) {
        cout << n << endl;
    }
    return 0;
}