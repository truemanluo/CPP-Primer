#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct Person
{
    string name;
    vector<string> phone_numbers;
};

vector<Person> read_person(const string& ifile)
{
    ifstream in(ifile);
    vector<Person> people;
    if (in)
    {
        for (string line, word; getline(in, line);)
        {
            Person p;
            istringstream record(line);
            record >> p.name;
            while (record >> word)
            {
                p.phone_numbers.push_back(word);
            }
            people.push_back(p);
        }
    }
    return people;
}

bool valid(const string& number)
{
    for (auto& n : number)
    {
        if (!isdigit(n))
            return false;
    }
    return true;
}

void Print(const vector<Person>& people)
{
    for (auto& p : people)
    {
        ostringstream formatted, bad_nums;
        for (auto& n : p.phone_numbers)
        {
            if (valid(n))
                formatted << " " << n;
            else
            {
                bad_nums << " " << n;
            }
        }
        if (!formatted.str().empty())
            cout << p.name << " " << formatted.str() << endl;
        else
        {
            cerr << "ERROR INPUT: " << p.name << " invalid: " << bad_nums.str() << endl; 
        }
        
    }
}

int main()
{
    vector<Person> people = read_person("8-13.txt");
    // cout << people.size() << endl;
    Print(people);
    return 0;
}
