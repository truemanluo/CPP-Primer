#include <iostream>
#include <string>

using namespace std;

// Bad, "const int ia[10]" equals "const int *"
void print(const int ia[10])
{
    for (size_t i = 0; i != 10; i++)
    {
        cout << ia[i] << endl;
    }
        
}

int main()
{
    int arr[] = {0, 1, 2, 3};
    print(arr);
    return 0;
}