#include <iostream>
#include <vector>
using namespace std;

int ans = 0;
void helper(int amount, vector<int>& coins, vector<int>& tmp)
{
    if (amount == 0) {
        ++ans;
        return;
    }
    if (amount < 0)
        return;
    for (auto &c : coins) {
        tmp.push_back(c);
        helper(amount-c, coins, tmp);
        tmp.pop_back();
    }
}

int change(int amount, vector<int>& coins) {
    vector<int> tmp;
    helper(amount, coins, tmp);
    return ans;
}

int main()
{
    vector<int> coins = {1, 2, 5};
    change(5, coins);
}