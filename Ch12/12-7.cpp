#include "ch12.h"

shared_ptr<vector<int>> newvec()
{
    return make_shared<vector<int>>();
}

void inputvec(shared_ptr<vector<int>> v, int n)
{
    int i;
    while (n-- > 0) {
        cin >> i;
        v->push_back(i);
    }
}

void printvec(shared_ptr<vector<int>> v)
{
    for (int i = 0; i < v->size(); ++i) {
        cout << (*v)[i] << endl;
    }
}

int main()
{
    shared_ptr<vector<int>> v = newvec();
    inputvec(v, 3);
    printvec(v);
    return 0;
}