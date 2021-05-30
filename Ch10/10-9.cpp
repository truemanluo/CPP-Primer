#include "../Ch9/ch9.h"
using namespace std;

void elim_dups(vector<string> &vec)
{
    if (vec.size() < 2) {
        return;
    }
    sort(vec.begin(), vec.end());
    size_t i, j;
    for (i = 0, j = 1; j < vec.size();++i, ++j) {
        while (vec[j] == vec[i] && j < vec.size() - 1) {
            ++j;
        }
        vec[i+1] = vec[j];
    }
    vec.erase(vec.begin()+i, vec.end());
}

int main()
{
    vector<string> vec = {"once", "upon", "a", "time", "she", "is", "a", "girl", "once", "upon"};
    elim_dups(vec);
    for(auto v : vec) {
        cout << v << " ";
    }
    cout << endl;
    cout << "vec size: " << vec.size();
    return 0;
}