#include <iostream>
#include <vector>

struct X
{
    ~X() {
        std::cout << "Destructor called" << std::endl;
    }
    X() {
        std::cout << "Constuctor called " << std::endl;
    }
    X(const X &x) {
        std::cout << "Copy constuctor called " << std::endl;
    }
    X& operator=(const X &x) {
        std::cout << "operator= called " << std::endl;
        return *this;
    }
};


int main()
{
    X x; // Constuctor called
    X new_x(x); // Copy constuctor called
    X new_new_x; // Constuctor called
    new_new_x = new_x; // operator= called
    std::cout << "Dynamic-----------------------" << std::endl;
    X *xp = new X(); // Constuctor called, 但不会调用析构函数
    new_new_x = *xp; // operator= called
    std::cout << "vector-----------------------" << std::endl;
    std::vector<X> vec{x, new_x, new_new_x}; // 为什么此处会调用6次拷贝构造函数
    delete xp; // Deconstructor called
    return 0;
}