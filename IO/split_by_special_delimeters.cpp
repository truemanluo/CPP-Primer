#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

/**
 * 输入：(1) 1,2,3; (2) abs, tbu, ams; (3) 12:13:14
 * 
 * 
 * **/

int main() {
    string line;
    int num;
    vector<int> ans;
    while (getline(cin, line, ':')) {
        istringstream numbers(line);
        while (numbers >> num) {
            ans.push_back(num);
        }
    }

    // 输出
    for (auto n : ans) {
        cout << n << endl;
    }
    return 0;
}