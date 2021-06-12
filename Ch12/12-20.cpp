#include "ch12.h"
#include "StrBlob.h"
#include "StrBlobPtr.h"
#include <fstream>

int main()
{
    StrBlob sb;
    std::ifstream istream("ch12-20.txt", ifstream::in); // 以只读方式（in）构建文件输入流
    string line;
    while (std::getline(istream, line)) {
        sb.push_back(line);
    }

    // 用begin和end来进行迭代 
    StrBlobPtr sp(sb.begin()), spend(sb.end());
    while (sp != spend) {
        cout << sp.deref() << endl;
        sp.incr();        
    }

    return 0;
}