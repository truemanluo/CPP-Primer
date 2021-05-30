#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


string minWindow(string s, string t) {
    vector<int> dct(128, 0);
    vector<int> flag(128, 0);
    for (auto ch : t) {
        ++dct[ch];
    }
    int left = 0, right = 0, cnt = 0;
    int max_left = 0, min_sz = s.size() + 1;
    while (right < s.size()) {
        if (dct[s[right]] > flag[s[right]]) {
            ++cnt;
        }
        if (dct[s[right]] != 0) ++flag[s[right]];
        while (left < right && cnt == t.size()) {
            if (right - left + 1 < min_sz) {
                min_sz = right - left + 1;
                max_left = max(max_left, left);
            }
            if (flag[s[left]] <= dct[s[left]]) {
                --cnt;
                --flag[s[left]];
            }
            else {
                --flag[s[left]];
            }
            ++left;
        }
        ++right;
    }
    return s.substr(max_left, min_sz);
}

int main()
{
    string s = "ADOBECODEBANC", t = "ABC";
    string ans = minWindow(s, t);
    cout << ans;
    return 0;
}