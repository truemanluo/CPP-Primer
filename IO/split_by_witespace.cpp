#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int main() {
    string line;
    int num;
    int sum = 0;
    vector<int> ans;
    while (getline(cin, line)) {
        istringstream numbers(line);
        sum = 0;
        while (numbers >> num) {
            sum += num;
        }
        ans.push_back(sum);
    }

    // 输出
    for (auto n : ans) {
        cout << n << endl;
    }
    return 0;
}