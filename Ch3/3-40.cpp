#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    // const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char ca[] = "hello";
    const char cb[] = "world";
    cout << strlen(ca) << endl;

    char ans[11] = {'\0'};
    strcpy(ans, ca);
    strcat(ans, " ");
    strcat(ans, cb);
    cout << ans << endl;
    cout << strlen(ans) << endl;
    return 0;
}