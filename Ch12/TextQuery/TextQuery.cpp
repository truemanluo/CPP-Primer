#include "TextQuery.h"
#include "QueryResult.h"

// query被调用时TextQuery已经被构造好了吗？
QueryResult TextQuery::query(string query) {
    QueryResult qr(*this, query);
    qr.set_occurtimes((*data)[query].size());
    return qr;
}