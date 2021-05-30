#include <iostream>
#include <unordered_set>
using namespace std;

bool is_valid(int x, int target)
{
    int ans = 0;
    unordered_set<int> set;
    while (x != 0)
    {
        int cur = x%10;
        if (set.find(cur) != set.end()) return false;
        else {
            set.insert(cur);
            ans += cur;
            x /= 10;
        }
    }
    return ans == target;
    
}

int main()
{
    int n, ans = -1;
    cin >> n;
    if (n > 45) {
        cout << -1;
    }
    else {
        for (int i = 0; i < 9876543210; ++i) {
            if (is_valid(i, n)) {
                ans = i;
                break;
            }
        }
        cout << ans;
    }
    return 0;
}