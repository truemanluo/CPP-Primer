#include <iostream>

// 统计连续出现的字符次数
/**
 * [2 2 2 3 3 4] --> 2：3次；3：2次；4：1次
 */
int main()
{
    int val = 0, curVal = 0;
    if (std::cin >> val)
    {
        int times = 1;
        while (std::cin >> curVal)
        {
            if (curVal == val)
            {
                ++times;
            }
            else
            {
                std::cout << val << " appears " << times << std::endl;
                times = 1;
                val = curVal;
            }
        }
        std::cout << val << " appears " << times << std::endl;
    }
    return 0;
}