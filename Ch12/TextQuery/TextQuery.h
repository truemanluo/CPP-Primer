#ifndef TEXTQUERY
#define TEXTQUERY

#include "query.h"

class QueryResult;
class TextQuery
{
public:
    friend class QueryResult;
    TextQuery(): data(make_shared<unordered_map<string, set<size_t>>>()), text(make_shared<vector<string>>()) { }
    // 列表初始化不能定义构造函数体？可以
    TextQuery(string filename): text(make_shared<vector<string>>()) {
        data = make_shared<unordered_map<string, set<size_t>>>();
        ifstream istream(filename, ifstream::in); // 以只读方式（in）构建文件输入流
        string s;
        /**
         * Fix bug: getline from istream other than std::cin
         * **/
        for (int i = 1; getline(istream, s); ++i) {
            text->push_back(s);
            istringstream record(s);
            while (record >> s) {
                if (data->count(s) == 0) {
                    (*data)[s] = set<size_t>();
                }
                (*data)[s].insert(i);
            }
        }
    }
    QueryResult query(string query);


private:
    // 存每一行文本
    shared_ptr<vector<string>> text;
    // 存每个单词对应的行号（避免重复）
    shared_ptr<unordered_map<string, set<size_t>>> data;
};

#endif