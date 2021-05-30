#include "string.h"

int main()
{
    String s("hello");
    String* s1 = new String("world");
    std::cout << *s1;
    delete s1;
    return 0;
}