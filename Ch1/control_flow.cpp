#include <iostream>

int main()
{
    // While循环
    // int i = 0, sum=0;
    // while (i <= 10) {
    //     sum += i;
    //     i++;
    // }
    // For循环
    int sum = 0;
    for (int val = -100; val <= 100; ++val)
        sum += val;
    std::cout << "The result is: " << sum << std::endl;
    return 0;
}