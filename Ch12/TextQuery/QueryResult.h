// 设计一个类保存查询结果，避免拷贝
#ifndef QUERYSEARCH
#define QYERYSEARCH
#include "query.h"

class TextQuery;
class QueryResult
{
public:
    QueryResult() {}
    QueryResult(TextQuery &tq, string q): spt(tq.data), query(q), spt_text(tq.text), occur_times(0) { }
    void set_occurtimes(size_t i);
    void print();

private:
    size_t occur_times;
    shared_ptr<unordered_map<string, set<size_t>>> spt;
    shared_ptr<vector<string>> spt_text;
    string query;
};

#endif