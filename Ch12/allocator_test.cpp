// #include <memory>
#include <vector>
#include <forward_list>


std::vector<int>* a = new std::vector<int>(10);
auto it = (*a).begin();

std::forward_list<int> fl;

auto it = fl.end();