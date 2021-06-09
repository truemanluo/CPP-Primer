#include "ch12.h"

// error: use of deleted function 'std::unique_ptr<_Tp, _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp>&) [with _Tp = int; _Dp = std::default_delete<int>]'

int main()
{
    unique_ptr<int> p(new int(3));
    // unique_ptr<int> q(p);
    // p.reset(nullptr);
    return 0;
}