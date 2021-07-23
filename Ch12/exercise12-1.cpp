#include "ch12.h"

int main()
{
    vector<int> b1;
    {
        vector<int> b2 = {1, 2, 3, 4};
        b1 = b2;
        b2.push_back(5);
    }

    cout << b1.size() << endl;

    string s = "111";
    shared_ptr<string> p(&s, [](string*){});
    return 0;
}