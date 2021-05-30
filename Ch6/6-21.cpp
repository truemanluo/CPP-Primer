#include <iostream>
#include <string>

using namespace std;

int compare(int a, const int *b)
{
    return (a > *b) ? a : *b;
}


int main()
{
    int a = 1, b = 2;
    cout << compare(a, &b) << endl;
    
    return 0;
}