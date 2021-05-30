#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void combination(vector<int> &values, int sz, vector<int> tmp, vector<vector<int>> &ans, int start)
{
    
}

int main()
{
    int n, target, item;
    cin >> n >> target;
    vector<int> values;
    for (int i = 0; i < n; ++i) {
        cin >> item;
        values.push_back(item);
    }
    vector<vector<int>> ans;
    combination(values, 3, {}, ans, 0);

    return 0;
}