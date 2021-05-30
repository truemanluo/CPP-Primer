#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

vector<string>& read_file(const string ifile, vector<string>& str)
{
    ifstream in(ifile);
    if (in)
    {
        for (string line; getline(in, line);)
        {
            str.push_back(line);
        }
    }
    return str;
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