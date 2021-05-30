#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int count_vowel(const string s)
{
    unsigned cnt = 0;
    for (auto x: s)
    {
        if (isupper(x))
            x = tolower(x);
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
            ++cnt;
    }
    return cnt;
}

int count_patition(const string s, char patition)
{
    unsigned cnt = 0;
    for (auto x: s)
    {
        if (x == patition)
            ++cnt;
    }
    return cnt;
}

// 统计换行符

int main()
{
    string s;
    unsigned cnt = 0;
    // getline(cin, s);
    while (getline(cin, s))
    {
        s = s + '\n';
        cnt += count_patition(s, '\n');
        // cnt += count_vowel(s);                                                                      
    }
    cout << "Num is: " << cnt << endl;
    return 0;
}