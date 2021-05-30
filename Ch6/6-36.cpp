#include <string>
using std::string;
using str_arr = string[10];

string (&func(string x)) [10];
// 类型别名
str_arr &func(string x);
// 尾置返回类型
auto func(string x) -> string(&)[10];
// dectype
string arr[10];
decltype(arr) &func(string x);           