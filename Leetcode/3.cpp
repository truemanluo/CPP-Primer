#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int getVolume(int left, int right, vector<int>& height)
{
    return min(height[left], height[right])*(right-left);
}
int maxArea(vector<int>& height) {
    // greedy
    int i = 0, j = height.size() - 1;
    int max_v = getVolume(i, j, height);
    // std::cout << max_v;
    while (i < j)
    {
        int left_v = getVolume(i, j-1, height), right_v =  getVolume(i+1, j, height);
        if (left_v < max_v && right_v < max_v) {
            max_v = max(max_v, getVolume(++i, --j, height));
        }
        else if (left_v > max_v && right_v > max_v) {
            max_v = left_v > right_v ? getVolume(++i, j, height) : getVolume(i, --j, height);
        }
        else if (left_v > max_v) {
            max_v = getVolume(i, --j, height);
        }
        else {
            max_v = getVolume(++i, j, height);
        }
    }
    return max_v;

};

int main()
{
    vector<int> vec  = {1,3,2,5,25,24,5};
    cout << maxArea(vec) << endl;
    return 0;
}
