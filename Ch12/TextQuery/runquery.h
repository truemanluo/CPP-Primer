/**
 * 需求：输入查询单词，输出单词出现在文本文件中的行号及出现次数
 * **/
#ifndef RUNQUERY
#define RUNQUERY

#include "query.h"
#include "TextQuery.h"
#include "QueryResult.h"

void runQueries(const string &filename) {
    cout << "Query!!" << endl;
    TextQuery tq(filename);
    while (true) {
        cout << "Enter word to look for, or q to quit: \n";
        string s;
        if (!(cin >> s) || s == "q") break;
        QueryResult res = tq.query(s);
        res.print();
    }
}

#endif