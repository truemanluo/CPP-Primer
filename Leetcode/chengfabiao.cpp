#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(vector<int> &vec, int start, int end)
{
    int pivot = vec[start];
    int i = start, j = end;
    while (i < j) {
        while (i < j && vec[j] >= pivot) --j;
        while (i < j && vec[i] <= pivot) ++i;
        swap(vec[i], vec[j]);
    }
    swap(vec[j], vec[start]);
    return j;
}

void findK(vector<int> &vec, int k, int start, int end)
{
    if (start > end) return;
    int mid = partition(vec, start, end);
    if (mid == k) return;
    else if (mid < k) {
        findK(vec, k, mid+1, end);
    }
    else {
        findK(vec, k, start, mid-1);
    }
}

int main()
{
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    vector<int> ans;
    for (int i = 1; i <= a; ++i) {
		for (int j = 1; j <= b; ++j) {
            ans.push_back(i*j);
        }
    }
    findK(ans, c, 0, ans.size()-1);
    cout << ans[c-1] << endl;
    // for (auto a : ans) cout << a << " ";
    return 0;
}