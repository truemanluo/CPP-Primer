#include "../Ch9/ch9.h"
using namespace std;

string make_plural(int count)
{
    return count > 1 ? string("words") : string("word");
}

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_uni = unique(words.begin(), words.end());
    words.erase(end_uni, words.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(), words.end(), [](const string &s1, const string &s2)->bool {
        return s1.size() < s2.size();
    });
    auto first_element = find_if(words.begin(), words.end(), [sz](const string &s) {return s.size() >= sz;});
    int nums = words.end() - first_element;
    for_each(first_element, words.end(), [](const string &s)->void {
        cout << s << " ";
    });
    cout << endl;
    cout << nums << " " << make_plural(nums) << " of length " << sz << " or longer" << endl; 


}

int main()
{
    vector<string> vec = {"hello", "hell", "zigger", "ana"};
    biggies(vec, 3);
    return 0;
}