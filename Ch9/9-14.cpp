#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

int main()
{
    vector<string> s1 = {"hello", "world"};
    vector<string> s2 = {"good", "morning"};
    vector<string>::iterator it = s2.begin();
    cout << "Before swap: " << *it << endl; // "good"
    swap(s1, s2);
    for (auto it = s2.cbegin(); it != s2.cend(); ++it) {
        cout << *it << " ";
    }
    cout << "After swap: " << *it << endl; // "good"
    // string类型交换后指针等会失效
    cout << "string swap: " << endl;
    string str1 = "1234";
    string str2 = "567";
    char* ch = &str1[1];
    cout << "(Before)ch: " << ch << endl; // "234"
    swap(str1, str2);
    cout << str2 << endl;
    cout << "(After)ch: " << ch << endl; // "67"

    // 9-14
    list<const char*> list_char = {"nihao"};
    vector<string> vec_str(2, "lihua");
    vec_str.assign(list_char.begin(), list_char.end());
    for (auto it = vec_str.begin(); it != vec_str.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}