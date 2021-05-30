#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string word;
    // int cnt = 0;
    cin >> word;
    string preword = word;
    // vector<string> words = {"he", "ha", "ha", "Hel", "Hel", "is"};
    // for (size_t i = 1; i != words.size(); ++i)
    // {
    //     if (words[i] == words[i - 1] && isupper(words[i][0]))
    //     {
    //         cout << "Repeat word is: " << words[i] << endl;
    //         return 0;
    //     }
    // }
    while (cin >> word && !word.empty())
    {
        if (isupper(preword[0]) && word == preword)
        {
            cout << "Repeat word is: " << word << endl;
            return 0;
        }
        preword = word;
    }
    cout << "No repeat word" << endl;
    return 0;
}