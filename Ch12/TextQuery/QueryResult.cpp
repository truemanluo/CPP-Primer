#include "TextQuery.h"
#include "QueryResult.h"

void QueryResult::print() {
    cout << "element occurs " << occur_times << " times" << endl;
    for (auto s: (*spt)[query]) {
        cout << "   (line " << s << ") " << (*(spt_text))[s-1] << endl;
    } 
}

void QueryResult::set_occurtimes(size_t i) {
    occur_times = i;
}