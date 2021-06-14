#include <iostream>
#include <string>
using namespace std;

bool operator>(const string& s1, const string &s2) {
    if (s1.size() == s2.size()) {
        for (int i = 0; i < s1.size(); ++i) {
            if (s1[i] != s2[i]) return s1[i] > s2[i];
        }
        return false;
    }
    else {
        return s1.size() > s2.size();
    }
}

int main() 
{
    string s1("31"), s2("22");
    cout << (s1 > s2) << endl;
    return 0;
}