#include "ch12.h"

vector<int>* newvec()
{
    return new vector<int>();
}

void inputvec(vector<int>* v, int n)
{
    int i;
    while (n-- > 0) {
        cin >> i;
        v->push_back(i);
    }
}

void printvec(vector<int>* v)
{
    for (int i = 0; i < v->size(); ++i) {
        cout << (*v)[i] << endl;
    }
}

int main()
{
    vector<int>* v = newvec();
    inputvec(v, 3);
    printvec(v);
    delete v;
    return 0;
}