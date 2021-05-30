#include <vector>
#include <iostream>
using std::vector;

std::ostream& operator<<(std::ostream& os, vector<int> &v)
{
    for (auto it = v.begin(); it != v.end(); ++it) {
        os << *it << std::endl;
    }
    return os;
}

int main()
{
    vector<int> vec1; // 0,0,...0
    vector<int> vec2(vec1);
    vector<int> vec3 = vec1;
    vector<int> vec4 = {1, 2};
    vector<int> vec5(vec4.cbegin(), vec4.cend());
    std::cout << vec4;
    std::cout << "vec5: " << std::endl;
    std::cout << vec5;

    return 0;
}