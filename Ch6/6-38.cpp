#include <string>
using std::string;

inline bool isShorter(const string &s1, const string &s2)
{
    return s1.size() > s2.size();
}

// Wrong, size() is not constexpr!
constexpr bool isShorter(const string &s1, const string &s2)
{
    return s1.size() > s2.size();
}