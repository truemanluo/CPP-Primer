#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void read_file(const string ifile, vector<string>& str)
{
    ifstream in(ifile);
    if (in)
    {
        for (string word; in >> word;)
        {
            str.push_back(word);
        }
    }
    // return str;
}

int main()
{
    vector<string> s;
    read_file("8-4.txt", s);
    for (auto& line : s)
    {
        cout << line << endl;
    }
    return 0;
}