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
}

void write_file(const string ofile, bool write_app, vector<string>& str)
{
    ofstream out;
    if (write_app)
        out.open(ofile, ofstream::app);
    else
    {
        out.open(ofile);
    }
    
    for (const auto& s : str)
    {
        out << s << endl;
    }
}

int main()
{
    vector<string> s;
    read_file("8-4.txt", s);
    for (auto& line : s)
    {
        cout << line << endl;
    }
    write_file("8-8.txt", true, s);
    return 0;
}